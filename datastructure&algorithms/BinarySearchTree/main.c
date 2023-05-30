#include <stdio.h>
#include <stdlib.h>

typedef struct node{
   int key;
   struct node* left;
   struct node* right;
   struct node* parent;
}Node;

typedef struct binarySearchTree{
   Node *root;

}BinarySearchTree;
void Intialize(BinarySearchTree *T){
    T->root=NULL;
}
Node *MakeNode(int item){
    Node *p;
    p=(Node *)malloc(sizeof item);
    p->left=NULL;
    p->right=NULL;
    //p->parent=NULL;
    p->key=item;
    //printf("%d",p->key);
    return p;
}
void InorderTreeWalk(Node *x){
 if(x!=NULL){
    InorderTreeWalk(x->left);
    printf("%d ",x->key);
    InorderTreeWalk(x->right);
}
}
/*void InorderTreeWalkStack(BinarySearchTree *x){
   stack<Node*>st;
   Node* x=new Node();
   if(X!=NULL)st.push(X);
   while(!st.empty()){
    x=st.top();
    while(x->left!=NULL){
        st.push(x->left);
    }
    x=st.top();
    st.pop();
    cout<<x->key<<" ";
    if(x->right!=NULL)
    st.push(x->right);
   }
}*/

Node* TreeSearch(Node *x,int k){
  if(x==NULL||x->key==k)return x;
  if(x->key>k)return TreeSearch(x->left,k);
  else return TreeSearch(x->right,k);
}
Node* Min(Node* x){
  while(x->left!=NULL)x=x->left;
  return x;
}
Node* Max(Node* x){
  while(x->right!=NULL)x=x->right;
  return x;
}
Node* TreeSuccessor(Node *x){
    if(x->right!=NULL)
        return Min(x->right);
    Node* y=x->parent;
    while(y!=NULL &&x==y->right){//if i am right then i am the greater
        x=y;
        y=y->parent;
    }
    return y;

}
Node* Insert(BinarySearchTree *T,Node* z){
   Node *y=NULL;
   Node *x=T->root;
   while(x!=NULL){
    y=x;
    if(z->key<x->key)
        x=x->left;
    else x=x->right;
   }
   z->parent=y;
   if(y==NULL)
    y=z;
   else if(z->key<y->key)
    y->left=z;
   else
    y->right=z;
    return y;
}
void Transplant(BinarySearchTree *T,Node *u,Node *v){
    Node *p=(u->parent);
    if(u->parent==NULL)
        T->root=v;
    else if(u==(p->left))
        p->left=v;
    else p->right=v;
    if(v!=NULL)
        v->parent=u->parent;

}
void Delete(BinarySearchTree *T,Node *z){
    if(z->left==NULL)
        Transplant(T,z,z->right);
    else if(z->right==NULL)
        Transplant(T,z,z->left);
    else
    {
        Node *y=Min(z->right);
        if(y->parent){
            Transplant(T,y,y->right);
            y->right=z->right;
            Node *r=y->right;
            r->parent=y;
        }
        Transplant(T,z,y);
        y->left=z->left;
        Node *l=y->left;
        l->parent=y;
    }
}

int main()
{
    BinarySearchTree *tree;
    Intialize(&tree);
    Node *node=MakeNode(3);
    tree->root=Insert(&tree,&node);

    //printf("%d",(tree->root)->key);
    /*node=MakeStackNode(5);
    Insert(&tree,&node);
    node=MakeStackNode(6);
    Insert(&tree,&node);
    node=MakeStackNode(7);
    Insert(&tree,&node);
    node=MakeStackNode(8);
    InorderTreeWalk(&(tree->root));*/
    return 0;
}
