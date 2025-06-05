//repo name: stacksingelinkedlist_0069
// commit min 20

#include <iostream>
using namespace std;

//Node class representation a single node in the linked list 
class Node 
{
  public:
  int data;
  Node * next;

  Node()
  {
   next = NULL;
  }
};

//Stack class 
class Stack
{
  private:
  Node *top; // Pointer to the top node of the stack

  public:
  Stack()
  {
     top = NULL; // Initialize the stack with a null top 
  }

  //Push operation: Insert an element onto the top of the 
  int push(int value)
  {
Node *newNode = new Node(); // 1. Alocate memory fo
newNode->data = value;      // 1. assigne value 
  }
  
}