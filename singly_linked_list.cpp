//insert and in a singly list list
#include <bits/stdc++.h>
using namespace std; 
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert(Node *&head,Node* &tail,int v){
    Node *newnode = new Node(v);
     Node *tmp=head;
    if(head==NULL){
        head=newnode;
        tail=newnode;
         newnode->next=NULL;
    }
    else{
        tail->next=newnode;
        newnode->next=NULL;
        tail=newnode;
    } 
}
int main() {
    int val;
    Node* head=NULL;
    Node* tail=NULL;
    while (true)
    {
        cin>>val;
        if(val==-1){
            break;
        }
        insert(head,tail,val);
    }
  return 0;
}
