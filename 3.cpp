//Program to convert infix to postfix expression.


#include<iostream>
#include<string>
#include<stack>
using namespace std;
stack <char>s;

char precedence(char opr)
{
	if (opr == '+' || opr == '-')
	   return 1;
    if (opr == '*' || opr == '/' )
       return 2;
    if (opr == '^' )
       return 3;
}
void intopos(string str)
{
 	stack <char> st;
	for(int i=0;i<str.length();i++)
	{
		if( str[i] == '(')
			st.push('(');
		else if(str[i] == ')')
		{
			 while (!st.empty() && st.top() != '(')
			{
		    	 	cout<<st.top();
       		 		st.pop();
    	   	}
    	    st.pop();
		}
		else 
		{
		 	if( st.empty() )
				st.push(str[i]);	
			else if(  precedence(str[i]) > precedence(st.top()) )
				st.push(str[i]);
			else{
				while( !st.empty() && st.top()!='(' && precedence(str[i]) <= precedence(st.top()) ){
					cout<<st.top()<<" ";
					st.pop();
				}
				st.push(str[i]);
			}
		}
	}
	while(!st.empty()) {
        cout<<st.top();
        st.pop();
    }
}
int main()
{
	string str;
	cout<<"Enter the String to Convert \t";
    cin>>str;
    intopos(str);
    return 0;
}
