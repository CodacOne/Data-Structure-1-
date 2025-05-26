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

////////////////////////Insert At Begnning
void InsertAtBegnning(Node*& head, int Value)
{
	Node* new_Node = new Node();
	new_Node->Value = Value;

	new_Node->next = head;  //  head «··Ì ﬂ«‰ ”«»ﬁ«next
	head = new_Node;

}

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
Node* Find(Node* head)
{
	while (head != NULL)
	{
		if (head->next == NULL)
		{
			return head;
		}


		head = head->next;
	}
	return NULL;

}



////////////////////////Insert After
void InsertAtEnd(Node* Prev_node, int Value)
{
	if (Prev_node == NULL)
	{
		cout << "the given previous node cannot be NULL";
		return;
	}

	Node* new_Node = new Node();

	new_Node->Value = Value;
	
	Prev_node->next = new_Node;
	new_Node->next = NULL;

}




////////////////////////////////////////////////////////////////////////
int main()
{

	Node* head = NULL;

	InsertAtBegnning(head, 1);
	InsertAtBegnning(head, 2);
	InsertAtBegnning(head, 3);
	InsertAtBegnning(head, 4);
	InsertAtBegnning(head, 5);

	PrintList(head);

	Node* N1 = NULL;

	N1 = Find(head);
	InsertAtEnd(N1, 500);
	// InsertAfter(N1, 500);
	PrintList(head);

	system("pause>0");
	return 0;
}





