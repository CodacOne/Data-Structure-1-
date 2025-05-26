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
void DeleteFirstNode(Node* & head)
{
	Node* Current = head;

	if (head == NULL)
	{
		return;

	}

	else

		Current->next->prev = Current->prev;
	    head = Current->next;
		delete Current;

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

	cout << "\n\n Linked List Content Before Delete First Node\n";
	PrintListDetails(head);
	PrintList(head);
	///

	cout << "\n\n\n\n Linked List Content After Delete First Node\n";

	DeleteFirstNode(head);
	PrintListDetails(head);
	PrintList(head);


	system("pause>0");
	return 0;
}





