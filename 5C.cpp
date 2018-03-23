//WAP TO IMPLEMENT queue USING stack.

#include<iostream>
#include<stack>

using namespace std;

class queue
{
    int top = -1;
    stack<int>st,st1;
    public:
        int front();
        void enQueue(int elem);
        int deQueue();
        void displayQueue();
};

int queue::front()
{
    if(st.empty())
        return -1;
    else
        return st.top();
        
};
void queue::enQueue(int elem)
{
    if (st.empty())
    {
        st.push(elem);
    }
    while(st.size()!=-1)
    {
        st1.push(st.top());
    }
    st.push(elem);
    for(int i=0;i<st.size();i++)
    {
        st.push(st1.top());
    }
};
int queue::deQueue()
{
    st.pop();
};
int main()
{
    queue Q;
    Q.enQueue(4);
    Q.enQueue(5);
    Q.enQueue(6);
    Q.front();
    Q.deQueue();
    Q.front();
}