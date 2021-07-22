int getHeight(Node* root){
          //Write your code here
          if(root == NULL)
            return -1;
          else{
            int ldepth = getHeight(root->left);
            int rdepth = getHeight(root->right);
            
            if(ldepth>rdepth)
                return(ldepth+1);
            else 
                return(rdepth+1);
            }
