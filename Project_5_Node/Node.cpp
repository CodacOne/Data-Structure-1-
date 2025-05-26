#include<iomanip>
#include<fstream>
#include<iostream>

using namespace std;

class Node 
{

public :

	int Value;
	Node* next;



};


int main()
{
	
	Node* head;

	Node* Node1 = NULL;
	Node* Node2 = NULL;
	Node* Node3 = NULL;

	Node1 = new Node();
	Node2 = new Node();
	Node3 = new Node();

	Node1->Value = 1;
	Node2->Value = 20;
	Node3->Value = 30;

	Node1->next = Node2;
	Node2->next = Node3;
	Node3->next = NULL;

	head = Node1;


	while (head != NULL)
	{
		cout << head->Value << endl;
		head = head->next;

	}

	system("pause>0");
	return 0;
}





