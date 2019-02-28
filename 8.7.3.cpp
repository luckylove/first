






if(node==NULL)
  {
      return 0;
  }
  queue < Node*> qu;
  qu.push(node);
  Node* some=NULL;
  qu.push(some);
  int maxvalue=0;
  int value=0;
  while(!qu.empty())
  {
      Node* head =qu.front();
      qu.pop();
      if(head==NULL&&qu.empty())
      {
         // cout<<"$ ";
         return maxvalue;
          //break;

      }
      else if(head==NULL)
      {
          //cout<<"$ ";
          value=qu.size();
          maxvalue=max(value,maxvalue);
          qu.push(some);

      }
      else
      {
         // cout<<head->data<<" ";
          if(head->left!=NULL)
          {
              qu.push(head->left);
          }

          if(head->right!=NULL)
          {
              qu.push(head->right);
          }
      }
  }
