//repo name: stacksingelinkedlist_0069
// commit min 20

#include <iostream>
using namespace std;

//Node class representation a single node in the linked list 
class Node 
{
  public:
  int data;
  Node * nect;

  Node()
  {
   next = NULL;
  }
}