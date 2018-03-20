#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main()
{
    stack<char>st;
    queue<char>q;
    string str;
    
    cout<<"Enter the String \t";
    cin>>str;
    
    for (int i=0;i<str.length();i++)
	{
		q.push(str[i]);
		st.push(str[i]);
	}
	for (int i=0;i<str.length();i++)
	{
		
	}
	if(st.top()==q.front())
			cout<<"Palindrome\n";
	else
		cout<<"Not Palindrome\n";
}
void isPalindrome()
{
	
}
