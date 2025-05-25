
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        if(head==nullptr){
            return head;
        }

        ListNode* first=head;

        ListNode* prev=NULL;
      
        ListNode* sec=head->next;

        while(first!=NULL && sec!=NULL){

            ListNode * third=sec->next;

            sec->next=first;
            first->next=third;
            
            if(prev!=NULL){
                prev->next=sec;
            }
            else{head=sec;}

            //Updation

            prev=first;
            first=third;

            if(third!=NULL){

            sec=third->next;
            
            }

            else{sec=NULL;}

        } return head;
        }
  
