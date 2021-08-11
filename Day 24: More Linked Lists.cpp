          Node* removeDuplicates(Node *head)
          {
            //Write your code here
            Node *ptr1, *ptr2, *dup;
            ptr1 = head;
            
            while(ptr1 != NULL && ptr1->next != NULL){
                ptr2 = ptr1;
                
                while(ptr2->next != NULL){
                    if(ptr1->data == ptr2->next->data){
                        dup = ptr2->next;
                        ptr2->next = ptr2->next->next;
                        delete(dup);
                    }
                    else 
                        ptr2 = ptr2->next;
                }
                ptr1=ptr1->next;
            } 
            return head;
          }
