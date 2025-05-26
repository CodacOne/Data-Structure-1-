#include<iostream>

#include<stack>
#include<queue>

using namespace std;

int main()
{
	queue <int> MyQueue;
	


	//Fill queue 
	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);

	
	cout << MyQueue.front() << endl;
	cout << MyQueue.back() << endl;
	cout << MyQueue.size() << endl;

	// Print queue 1 
	
	while (!MyQueue.empty())
	{
		cout  << endl;
		cout << MyQueue.front() << endl;

		MyQueue.pop();
	}

	
	system("pause>0");
	return 0;
}
