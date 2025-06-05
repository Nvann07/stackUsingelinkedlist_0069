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
newNode->data = value;      //2. assigne value
newNode->next = top;         // 3. Set the next pointer 
top = newNode;               // 4.Update the top 
cout << "Push value: " << value << endl;
return value; 
  }

  void pop()
  {
    Node *temp = top;
    if (isEmpty())
    {
      cout << "Stack is empety." << endl;
      return;
    }

    cout << "Popped value: " << temp->data << endl;
    top = temp->next; // Update the top pointer to the 
    delete temp;
  }

  //Peek/Top operation: Retrive the value of the topmost
  void peak()
  {
    if (isEmpty())
    {
      cout << "List is empty. " << endl;
    }
    else
    {
      Node *current = top;
      while (current != NULL)
      {
        cout << current->data << " " << endl;
        current = current->next;
      }
      cout << endl;
    }
    }

    bool isEmpty()
    {
      return top == NULL; // Return true if the top pointer 
    }
  };
  
int main()
{
  Stack stack;

  int choice = o;
  int value;

  while (choice != 5)
  {
    cout << "1. Push\n";
    cout << "2. Pop\n";
    cout << "3. Peak\n";
    cout << "4. Exit\n";
    cout << " Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
      case 1: 
      cout << " Enter the value to push: ";
      cin >> value;
      stack.push(value);  //Push the enterd from the 
      break;
      case 2;
    }
  }
}