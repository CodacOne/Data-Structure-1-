#include<iomanip>
#include<fstream>
#include<iostream>

using namespace std;

class Node
{

public:

	int Value;
    Node* next;



};


void InsertAtBegnning(Node* &head,int Value)
{

	Node* new_node = new Node();

	new_node->Value = Value;
	new_node->next = head;

	head = new_node;

}


void PrintList(Node* head)
{

	while (head != NULL)
	{
		cout << head->Value << endl;
		head = head->next;

	}

}



int main()
{

	Node* head = NULL;

	InsertAtBegnning(head, 1);
	InsertAtBegnning(head, 2);
	InsertAtBegnning(head, 3);
	InsertAtBegnning(head, 4);
	InsertAtBegnning(head, 5);

	PrintList(head);


	system("pause>0");
	return 0;
}





