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
	int flag = 1;
	for (int i=0;i<str.length()&& flag==1;i++)
	{
		if(st.top()!=q.front())
		{
		
			cout<<"Not Palindrome\n";
			flag=0;
		}
		st.pop();
		q.pop();
	}
	if(flag==1)
		cout<<"Palindrome\n";
	
}
