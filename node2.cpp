//node for doubly linked list 
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
