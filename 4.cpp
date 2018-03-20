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
	stack<char>st;
	stack<char>st1;
	string str;
	int length;
	length = str.length();
	
	cout<<"Enter the String\t";
	cin>>str;
	if (str.length() > 0)
	{
		int length = str.length()/2;
		for(int i=0;i<length;i++)
		{
			st.push(i);
			
		}
		for(int i=length;i>=0;i--)
		{
			st1.push(i);
		}
		for(int i=0;i<length;i++)
		{
		
		 if(st==st1)
		 {
		  cout<<"Entered string"<<str<<" is a palindrome";
		  }
 	   
	   	else
			cout<<"Entered string"<<str<<" is a not a palindrome";
        }
	}
	else
		cout<<"Entered string"<<str<<" is a palindrome";
}
