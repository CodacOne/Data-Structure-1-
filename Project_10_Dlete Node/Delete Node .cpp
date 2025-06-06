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
//
//////////////////////////Insert At Begnning
//void InsertAtBegnning(Node*& head, int Value)
//{
//	Node* new_Node = new Node();
//	new_Node->Value = Value;
//
//	new_Node->next = head;  //  head ���� ��� �����next
//	head = new_Node;
//
//}

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
void DeleteNode(Node* &head, int Value)
{
	Node* Current= head;
	Node* Prev_Mode= head;


	if (head== NULL)
	{
		return;

	}

	if (Current->Value== Value)
	{
		head = Current->next;
		delete Current;
		return;
	}

	while (Current != NULL && Current->Value!= Value)
	{
		Prev_Mode = Current;
		Current = Current->next;
	}


	
	if (Current== NULL)
	{
		return;

	}
	
	Prev_Mode->next = Current->next;
	delete Current;
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

	DeleteNode(head, 4);
	PrintList(head);


	system("pause>0");
	return 0;
}





