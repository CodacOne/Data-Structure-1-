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


////////////////////////////////////////////////////////////////////////
int main()
{
	Node* head;

	Node* Node1 = NULL;
	Node* Node2 = NULL;
	Node* Node3 = NULL;


	Node1 = new Node();
	Node2 = new Node();
	Node3 = new Node();

	Node1->Value = 10;
	Node2->Value = 20;
	Node3->Value = 30;

	Node1->next = Node2;
	Node1->prev = NULL;

	Node2->next = Node3;
	Node2->prev = Node1;

	Node3->next = NULL;
	Node3->prev = Node2;

	head = Node1;
	

	cout << "\n\n";

	while (head != NULL)
	{

		cout << head->Value<<endl;
		head = head->next;

	}


	system("pause>0");
	return 0;
}





