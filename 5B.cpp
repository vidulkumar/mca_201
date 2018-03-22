//WAP to implement stack using STL Queue

#include<iostream>
#include<stack>
#include<queue>
#define SIZE 10

using namespace std;
class stack
{	
	int top;
	public:
		stack()
		{
			top=-1;
		}
		
		int s[SIZE];
		bool isEmpty();
		bool isFull();
		void topStack();
		int size;
		void push(int elem);
		int pop();
		
};
bool stack::isFull()
{
	if (top = SIZE-1)
		return true;
	else 
		return false;
}
bool stack::isEmpty()
{
	if(top<0)
		return true;
	else
		return false;
}
void stack::push(int elem)
{
	if(isFull())
		cout<<"Stack Overflow ";
	else
		top++;
		s[top]>>elem;
}
int stack::pop()
{
	is(isEmpty())
		cout<<"Stack Undeflow ";
	else
	{
		int x;
		x=s[top];
		top--;
		cout<<"Pop Element is"<< x;
	}
}
int main()
{
	struct stack st;
	st.push(4);
	st.topStack();
	st.push(7);
	st.pop();
}
