#include<iostream>

#include<stack>


using namespace std;

int main()
{
	stack<int> stkStack1;
    stack<int> stkStack2;


	//Fill Stack 1
	stkStack1.push(10);
	stkStack1.push(20);
	stkStack1.push(30);
	stkStack1.push(40);
	stkStack1.push(50);

	//Fill Stack 2
	stkStack2.push(110);
	stkStack2.push(120);
	stkStack2.push(130);
	stkStack2.push(140);
	stkStack2.push(150);

	stkStack1.swap(stkStack2);


	// Print Stack 1 After Swap
	cout << "\nStack 1 After Swap : \n";
	while (!stkStack1.empty())
	{
		cout<<stkStack1.top() << endl;

		stkStack1.pop();
	}

	// Print Stack 2 After Swap
	cout << "\nStack 2 After Swap : \n";
	while (!stkStack2.empty())
	{
		cout << stkStack2.top() << endl;

		stkStack2.pop();
	}


	system("pause>0");
	return 0;
}
