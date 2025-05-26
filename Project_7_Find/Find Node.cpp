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


void InsertAtBegnning(Node*& head, int Value)
{

	Node* new_node = new Node();

	new_node->Value = Value;
	new_node->next = head;   //  head «··Ì ﬂ«‰ ”«»ﬁ«next


	 head= new_node ;
}


void PrintList(Node* head)
{

	while (head != NULL)
	{
		cout << head->Value << endl;
		head = head->next;

	}

}

Node* Find(Node* head , int Value)
{

	while (head != NULL)
	{
		if (head->Value== Value)
		
			return head;

		
		head = head->next;
	}
	return NULL;
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

	Node* N1 = NULL;

	 N1 = Find(head,3);

	if (N1 !=NULL)
	{

		cout << "Node Found -)\n";

	}

	else 

		cout << "Node is Not Found -(\n";


	system("pause>0");
	return 0;
}





