// Program to implement QUEUE using STACK
#include<iostream>
#include<stack>

using namespace std;

class queue
{
    int last;
    stack<int>st,st1;
    public:
        void enQueue(int elem);
        int deQueue();
        bool isEmpty();
        int front();
        int rear();
        void displayQueue();
};

bool queue::isEmpty()
{
    if(st.empty())
        return true;
    else
        return false;
}

int queue::front()
{
    if(isEmpty())
        return -1;
    else
        return st.top();
};

int queue::rear()
{
	if(st.empty())
		return -1;
	else
		return last;
}
void queue::enQueue(int elem)
{
	last = elem;
    st.push(elem);    
};
int queue::deQueue()
{
    int temp,temp1;
    if(st.empty())
        cout<<"Queue is Empty!\n";
    else
        while(!st.empty())
        {
            temp = st.top();
            st.pop();
            st1.push(temp);
        }
        temp1 = st1.top();
        st1.pop();
        while(!st1.empty()) 
           {
               temp = st1.top();
               st1.pop();
            st.push(temp);
           }
        return temp1;
};

int main()
{
    queue Q;
    Q.enQueue(4);
    Q.enQueue(5);
    Q.enQueue(6);
    cout<<Q.rear();
    Q.deQueue();
    cout<<Q.rear();
}
