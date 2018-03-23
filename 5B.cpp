//WAP to implement stack using STL Queue

#include<iostream>
#include<queue>

using namespace std;
class stack
{	
	int count = 0;
	queue <int>Q,Q1;
	public:
		
		bool isEmpty();
		void displayStack();
		int size();
		int top();
		void push(int elem);
		int pop();
		
};
int stack::top()
{
    if(isEmpty())
        return -1;
    else
        return Q.back();
}
bool stack::isEmpty()
{
	if(Q.empty())
		return true;
	else
		return false;
};
void stack::push(int elem)
{
		Q.push(elem);
};
int stack::pop()
{
	if (Q.empty())
	{
	    return -1;
	}
	while(Q.size()!=1)
	{
	    Q1.push(Q.front());
	    Q.pop();
	}
	Q.pop();
    
    queue<int>Q2=Q;
    
    Q=Q1;
    Q1=Q2;
};
int stack::size()
{
    return Q.size();
 
};

int main()
{
	struct stack st;
	st.push(4);
	cout<<st.top();
	st.push(7);
	st.push(8);
	cout<<st.top();
}