//Some code for doubly link list insert 
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node *back;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
    this->back = NULL;
  }
};
void insert_head(Node *&head, Node *&tail,int val)
{
  Node *newnode = new Node(val);
  if (head == NULL)
  {
    head = newnode;
    tail = newnode;
    return;
  }
  newnode->next = head;
  head->back = newnode;
  head = newnode;
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
