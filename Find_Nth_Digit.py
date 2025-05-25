//Day 9 Mothers Day

class Solution:
    def findNthDigit(self, n: int) -> int:
        length = 1         # Number of digits per number in current range
        count = 9          # Number of integers in current range
        start = 1          # Starting number in current range

        # Step 1: Find the range where the nth digit falls
        while n > length * count:
            n -= length * count
            length += 1
            count *= 10
            start *= 10

        # Step 2: Identify the actual number containing the nth digit
        num = start + (n - 1) // length

        # Step 3: Get the digit at the right index
        digit_index = (n - 1) % length
        return int(str(num)[digit_index])
