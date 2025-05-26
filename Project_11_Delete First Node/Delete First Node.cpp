#include<iomanip>
#include<fstream>
#include<iostream>

using namespace std;

class Node
{

public:

	int  Value;
	Node* next;



};

////////////////////////Print List
void PrintList(Node* head)
{
	cout << "\n\n";
	while (head != NULL)

	{
		cout << head->Value << endl;
		head = head->next;
	}

}

////////////////////////Find the Node
Node* Find(Node* head, int Value)
{

	while (head != NULL) {

		if (head->Value == Value)
			return head;


		head = head->next;
	}

	return NULL;

}



////////////////////////Insert After
void InsertAtEnd(Node*& head, int Value)
{
	Node* newNode = new Node();

	newNode->Value = Value;
	newNode->next = NULL;

	if (head == NULL)
	{
		head = newNode;
		return;
	}

	Node* LastNode = head;

	while (LastNode->next != NULL)
	{
		LastNode = LastNode->next;

	}

	LastNode->next = newNode;
	return;
}

////////////////////////Delete Node 
void DeleteFirstNode(Node*& head)
{
	Node* Current = head;
	
	if (head == NULL)
	{
		return;

	}

	
		head = Current->next;
		delete Current;
		return;
	

}


////////////////////////////////////////////////////////////////////////
int main()
{

	Node* head = NULL;

	InsertAtEnd(head, 1);
	InsertAtEnd(head, 2);
	InsertAtEnd(head, 3);
	InsertAtEnd(head, 4);
	InsertAtEnd(head, 5);


	PrintList(head);

	DeleteFirstNode(head);
	DeleteFirstNode(head);
	DeleteFirstNode(head);

	PrintList(head);


	system("pause>0");
	return 0;
}





