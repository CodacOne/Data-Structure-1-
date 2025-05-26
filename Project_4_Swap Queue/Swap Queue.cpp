#include<iostream>

#include<stack>
#include<queue>

using namespace std;

int main()
{
	queue <int> MyQueue1;
	queue <int> MyQueue2;



	//Fill queue  1
	MyQueue1.push(10);
	MyQueue1.push(20);
	MyQueue1.push(30);
	MyQueue1.push(40);
	MyQueue1.push(50);


	//Fill queue  2
	MyQueue2.push(110);
	MyQueue2.push(120);
	MyQueue2.push(130);
	MyQueue2.push(140);
	MyQueue2.push(150);


	//// Before Swap
	//cout << "Print Queue 1 & 2 Before Swap :\n\n";
	//while (!MyQueue1.empty())
	//{

	//	cout << MyQueue1.front() << endl;

	//	MyQueue1.pop();
	//}

	//while (!MyQueue2.empty())
	//{

	//	cout << MyQueue2.front() << endl;

	//	MyQueue2.pop();
	//}

	/////////////////////////////Swap/////////////////////////
	MyQueue1.swap(MyQueue2);


	// Print queue 1  
	cout << "Print Queue 1 After Swap :\n\n";
	while (!MyQueue1.empty())
	{
		
		cout << MyQueue1.front() << endl;

		MyQueue1.pop();
	}

	// Print queue 2  
	cout << "Print Queue 2 After Swap :\n\n";
	while (!MyQueue2.empty())
	{
		
		cout << MyQueue2.front() << endl;

		MyQueue2.pop();
	}



	system("pause>0");
	return 0;
}
