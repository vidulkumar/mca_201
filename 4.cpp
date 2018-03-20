//Program to check if entered string is a palindrome or not.

#include<iostream>
#include<string>
#include<queue>
#include<stack>
using namespace std;

int main(void)
{
	queue<char>q;
	queue<char>q1;
	stack<string>st;
	string str;
	int length;
	length == strlen(str);
	
	cout<<"Enter the String\t";
	cin>>str;
	if (str.length() > 0)
	{
		int length = str.size()/2;
		for(int i=0;i<length;i++)
		{
			q.enqueue();
			
		}
		for(int i=length;i>=0;i--)
		{
			q1.dequeue();
		}
		if(q1==q)
		{
		 cout<<"Entered string"<<str<<" is a palindrome";
		}
		else
			cout<<"Entered string"<<str<<" is a not a palindrome";
		
	}
	else
		cout<<"Entered string"<<str<<" is a palindrome";
}
