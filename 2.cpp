#include <iostream>
#include <cstdlib>
#define MAXSIZE 100  // or const int MAXSIZE=100;

using namespace std;

template <class T>
class stack
	/*
	objective: Create a class for implementing Stack using array
	input parameters: none
	output value: none
	description:  class definition
	approach: Class defines data member and member function of the stack class
	*/
{
	T *arr;					// for dynamic array 
	int top;					//top of stack
	int capacity;					// checks size defined by user
public:
	stack(int size = MAXSIZE);			// constructor to create array dynamically
	~stack();					// destructor to delete dynamically created array
	void push(T &);
	T pop();
	T peek();
	int size();					// Current size of stack
	bool isEmpty();
	bool isFull();
	void display();
};

template<class T>
stack<T>::stack(int size)
{
	capacity = size;
	top == -1;
	arr = new T[size];
}

template<class T>
stack<T>::~stack()
{
	delete arr;
}
template<class T>
void stack<T>::push(T & elem)
{	
	if (isFull())
	{
		cout<<"Stack Overflow.\n";
		return;
	}
	else
	{
		top++;
		arr[top]=elem;
	}
	
}

template<class T>
T stack<T>::pop()
{
	if (isEmpty())
		cout<<"Stack Underflow.\n";
	else
	{
		T top_elem = arr[top];
		top--;
		return top_elem;
	}
}

template<class T>
T stack<T>::peek()
{
	return arr[top];
}

template<class T>
stack<T>::size()
{
	if(isEmpty())
		return false;
	else 
		return top+1;	
}
template<class T>
bool stack<T>::isEmpty()
{
	if (top == -1)
		return true;
	else 
		return false;
}

template<class T>
bool stack<T>::isFull()
{
	if (top == capacity-1)
		return true;
	else 
		return false;
}
template<class T>
void stack<T>::display()
{
	if(!isEmpty())
	for(int i=0; i<top; i--)
	{
		cout<<arr[i]<<"/n";
	}
	else 
		cout<<"Stack is Empty...\n";
}
int main()
{
	int sz,choice;
	char cont;
	cout<<"\n Enter the size of the stack : ";
	cin>>sz;
	stack<int>st(sz);
	do 
	{
		cout<<"\n\n  	-----MENU-----";
		cout<<"\n 1. Push element on the stack ";
		cout<<"\n 2. Pop element from the stack ";
		cout<<"\n 3. Peek top element of the stack ";
		cout<<"\n 4. Size of the stack ";
		cout<<"\n Enter your choice : ";
		cin>>choice;
		
		switch(choice)
		{
			case 1: 
			int ele,cont;
				cout<<"Enter the element to push...";
				cin>>ele;
				st.push(ele);
				break;
			case 2: 
				if(st.isEmpty())
					cout<<"Stack Underflow.";
				else
				{
					st.pop();
					cout<<"New Stack.\n";
					st.display();
				}
				break;
			case 3:
	
				if(st.isEmpty())
					cout<<"Empty Stack...\n";
				else
					cout<<"Top element in the stack is ...\t "<<st.peek();
					break;
			case 4:
				cout<<"Size of the stack is \t"<<st.size();
				break;
			default: 
				cout<<"Invalid Input.\n";
				break;
		}
		cout<<"Do You Want to continue? (Y/N)";
		cin>>cont;
	}	
	while(cont == 'Y' || cont =='y');
}
