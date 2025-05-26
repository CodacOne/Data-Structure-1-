#include<iomanip>
#include<fstream>
#include<iostream>




using namespace std;

class Node
{

public:

	int  Value;
	Node* next;
	Node* prev;


};

////////////////////////////// Insert At Beginning To Double Linked LIst
void InsertAtBeginning(Node*& head, int Value)
{

	Node* new_Node = new Node();

	new_Node->Value = Value;

	new_Node->next = head;
	new_Node->prev = NULL;



	if (head != NULL)
	{
		head->prev = new_Node;

	}
	head = new_Node;

}


void PrintList(Node* head)
{
	cout << "NULL";

	while (head != NULL)
	{

		cout << " <--> " << head->Value;
		head = head->next;

	}
	cout << " <--> NULL ";
}


  Node*  Find(Node* head , int Value)
  {
	  while (head != NULL)
	  {
		  if (head->Value== Value )
		  {

			  return head;

		  }

		  head = head->next;
	  }

	  return NULL;
  }
////////////////////////////////////////////////////////////////////////
int main()
{

	Node* head = NULL;

	InsertAtBeginning(head, 5);
	InsertAtBeginning(head, 4);
	InsertAtBeginning(head, 3);
	InsertAtBeginning(head, 2);
	InsertAtBeginning(head, 1);

	cout << "Linked List Content :\n";
	
	cout << "\n\n";
	PrintList(head);

	Node* N1 = Find(head,22);
	cout << "\n\n";

	if (N1 != NULL)

	{
		cout << "Node Found \n";
	}
		
	else

	{
		cout << "Node is Not Found \n";
	}
	

	system("pause>0");
	return 0;
}





