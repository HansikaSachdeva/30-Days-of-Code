Node* insert(Node *head,int data)
      {
          //Complete this method
          if(head==NULL){
              head = new Node(data);
              return head;
          }
          else if(head->next == NULL){
              Node *temp = new Node(data);
              head->next = temp;
              return head;
          }
          else {
          insert(head->next, data);
          }
          return head;
      }
