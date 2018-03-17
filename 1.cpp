/*
Objective: To push elements on stack and then popping them out to print in reverse order.
User inputs :num - Elements to push into the stack
*/

#include<iostream>
#include<string>
#include<stack>
# define MAXSIZE 10

using namespace std;
int main()
{
	int num, size = MAXSIZE;
	stack<int>st;
	cout<<"Enter the elements in the stack: ";
	for (int i = 0; i < size; i++)
	{
		cin>>num;
		st.push(num);	
	}
	cout<<"Elements in the stack are... ";
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
}
