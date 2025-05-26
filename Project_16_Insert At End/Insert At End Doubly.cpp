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
/////////////////////////////////

void PrintNodeDetails(Node* head)
{
	if (head->prev != NULL)
	{

		cout << head->prev->Value;
	}


	else

	{
		cout << "NULL";
	}

	cout << " <-- > " << head->Value << " <--> ";


	if (head->next != NULL)
	{

		cout << head->next->Value << "\n";
	}


	else
	{
		cout << "NULL";
	}

}

/////////////////////////////////

void PrintListDetails(Node* head)

{
	cout << "\n\n";

	while (head != NULL)
	{

		PrintNodeDetails(head);
		head = head->next;
		cout << "\n";
	}

}

/////////////////////////////////
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


/////////////////////////////////
void InsertAtEnd(Node* head, int Value)
{ 

	Node* new_Node = new Node();

	new_Node->Value = Value;

	if (head == NULL)
	{
		new_Node->prev = NULL;
		head = new_Node;
	}

	else 
	{
		  Node*  Current=head;
		while (Current->next != NULL)
		{

			Current = Current->next;
		}



		new_Node->next = NULL;

		new_Node->prev = Current;
		Current->next = new_Node;

	}
	
}



/////////////////////////////////
Node* Find(Node* head, int Value)
{
	while (head != NULL)
	{
		if (head->Value == Value)
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

	cout << "\n\n Linked List Content Before Insert At End\n";
	PrintListDetails(head);
	PrintList(head);
	///

	cout << "\n\n\n\n Linked List Content After Insert At End\n";

	InsertAtEnd(head,5000);
	PrintListDetails(head);
	PrintList(head);


	system("pause>0");
	return 0;
}





