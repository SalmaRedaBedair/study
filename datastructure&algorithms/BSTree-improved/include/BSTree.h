#include<Node.h>
#include<bits/stdc++.h>
#ifndef BSTEE_H
#define BSTEE_H

using namespace std;

class BSTree
{
public:
    Node* root;
    Node* nil;
    void IntializeTree()
    {
        root = nullptr;
        nil = nullptr;
    }

    void initializeNULLNode(Node* node,Node* p)//i need parent because it represent root ,left and right
    {
        node->data = 0;
        node->parent = p;
        node->left = nullptr;
        node->right = nullptr;
        node->color = 0;
    }

    Node* GetNewNode(int data)
    {
        Node* newNode = new Node;
        newNode->key = data;
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->p = NULL;
        return newNode;
    }

    Node* Insert(Node* root,int key)
    {
        Node* z = GetNewNode(key);
        if(root == NULL)
            root = z;
        else if(key <= root->key)
        {

            root->left = Insert(root->left,key);
            root->left->p = root;
        }
        else
        {

            root->right = Insert(root->right,key);
            root->right->p = root;
        }
        return root;
    }

    Node* Insert2(Node* root,int key)
    {
        Node* z = GetNewNode(key);
        Node* y = NULL;
        Node* x = root;
        while(x != NULL)
        {
            y = x;
            if(key < x->key)
                x = x->left;
            else
                x = x->right;
        }
        z->p=y;
        if(y == NULL)
            y = z;
        else if(key < y->key)
            y->left = z;
        else
            y->right = z;
        return y;
    }

    void Transplant(Node** root,Node* u,Node* v)
    {
        if(u == NULL)
            return ;
        if(u->p == NULL)
        {
            //cout<<"root\n";
            *root = v;
        }


        else if(u == u->p->left)
            u->p->left = v;
        else u->p->right = v;
        if(v != NULL)
            v->p = u->p;
    }
    Node* Delete(Node* root,Node* z)
    {
        if(z == NULL)
            return root;
        Node* y = NULL;
        if(z->left == NULL)
            Transplant(&root,z,z->right);
        else if(z->right == NULL)
            Transplant(&root,z,z->left);
        else
        {
            y = Successor(z);
            if(z->right != y)
            {
                Transplant(&root,y,y->right);
                y->right = z->right;
                y->right->p = y;
            }
            Transplant(&root,z,y);
            y->left = z->left;
            y->left->p = y;

        }
        return root;
    }

    bool Search(Node* root,int key)
    {
        if(root == NULL)
            return false;
        if(key == root->key)
            return true;
        if(key<root->key)
        {
            return Search(root->left,key);
        }
        return Search(root->right,key);
    }

    Node* Find(Node* root,int key)
    {
        if(root == NULL)
            return NULL;
        if(key == root->key)
            return root;
        if(key < root->key)
        {
            return Find(root->left,key);
        }
        return Find(root->right,key);
    }

    void print(Node* root)
    {
        if(root==NULL)
            return;
        print(root->left);
        cout<<root->key<<" ";
        print(root->right);
    }

    void print2(Node* root)
    {
        stack<Node*>st;
        while(true)
        {
            if(root != NULL)
            {
                st.push(root);
                root = root->left;
            }
            else if(!st.empty())
            {
                cout<<st.top()->key<<" ";
                root = st.top()->right;
                st.pop();
            }
            else break;
        }

    }

    Node* Min(Node* root)
    {
        while(root->left != NULL)
            root = root->left;
        return root;
    }

    Node* Max(Node* root)
    {
        while(root->right != NULL)
            root = root->right;
        return root;
    }

    Node* Successor(Node* x)
    {
        if(x == NULL)
            return NULL;
        if(x->right != NULL)
            return Min(x->right);
        Node *y = new Node;
        y = x->p;
        while(y != NULL && x == y->right)
        {
            x = y;
            y = y->p;
        }
        return y;
    }

    Node* Predecessor(Node* x)
    {
        if(x->left != NULL)
            return Max(x->left);
        Node *y = new Node;
        y = x->p;
        while(y != NULL && x == y->left)
        {
            x = y;
            y = y->p;
        }
        return y;
    }

};

#endif // BSTEE_H
