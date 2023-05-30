#include <bits/stdc++.h>
#include<BSTee.h>
#include<Node.h>


using namespace std;

int main()
{
    BSTree bst;
    bst.IntializeTree();
    bst.root = bst.Insert(bst.root,10);
    bst.Insert(bst.root,18);
    bst.Insert(bst.root,6);
    bst.Insert(bst.root,3);
    bst.Insert(bst.root,100);
    bst.Insert(bst.root,17);
    bst.Insert(bst.root,20);
    bst.Insert(bst.root,2);
    bst.Insert(bst.root,4);
    bst.Insert(bst.root,13);
    bst.Insert(bst.root,9);

    cout<<"\n";
    bst.print(bst.root);
    bst.root=bst.Delete(bst.root,bst.root);

    if(bst.Search(bst.root,6))
        cout<<"found.";
    else
        cout<<"not found

    cout<<"\n";
    bst.print(bst.root);
    cout<<"\n";
    cout<<bst.Min(bst.root)->key;
    cout<<"\n";
    cout<<bst.Max(bst.root)->key;
    cout<<"\n";

    Node *suc=bst.Successor(bst.Find(bst.root,2));

    if(bst.Find(bst.root,2)==NULL)
        cout<<"no such element.";
    else if(suc==NULL)
        cout<<"no Successor,it is the greatest element.";
    else
        cout<<suc->key;

    cout<<"\n";
    cout<<bst.Predecessor(bst.root)->key;
    return 0;
}
