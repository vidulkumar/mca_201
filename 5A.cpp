//Template QUEUE class


#include<iostream>
#include<cstdlib>
#define SIZE 10
using namespace std;
template <class Q>
class queue
{
    Q *Arr;             //array to store queue ellements
    int capacity;       //maximum capacity of the queue
    int front;          //front points to front element of the queue
    int rear;           //rear points to last element in the queue
    int count;          //current size of queue
    
    public:
        queue (int size = SIZE);
        void enQueue(Q elem);
        void deQueue();
        Q displayQueue();
        Q showFront();
        int size();
        bool isFull();
        bool isEmpty();
};
//constructor for class queue
template <class Q>
queue<Q>::queue(int size)
{
    capacity = size;
    Arr = new Q[size];
    front = -1;
    rear = -1;
    count = 0;
}
template <class Q>
bool queue<Q>::isEmpty()
{
	if (front == -1 && rear == -1)
	   return true;
    else
    	return false;
}
template<class Q>
bool queue<Q>::isFull()
{
    if (rear == (SIZE-1))
		return true;
	else 
		return false;
}
template <class Q>
Q queue<Q>::showFront()
{
    if(isEmpty())
        cout<<"Queue is empty\n";
    else
        cout<<"Front Element is "<<Arr[front]<<"\n";
}
template <class Q>
void queue<Q>::enQueue(Q elem)
{
    if(isFull())
        cout<<"Queue is full!\n";
    if(front==-1)
    {
    	front=0;
    	rear=front;
    	Arr[front]=elem;
    	count++;
	}
   
    else
    {
    
        Arr[++rear]=elem;
        count++;
    }
}
template<class Q>
void queue<Q>::deQueue()
{
    if(isEmpty())
        cout<<"Queue is empty!\n";
    else
    {
        cout<<"Element removed is "<<Arr[front]<<"\n";
        front++;
        count--;
    }
}
template<class Q>
int queue<Q>::size()
{
	if(isEmpty())
		cout<<"Queue Empty\n";
	else
		cout<<"Current Size of Queue is "<<count<<"\n";
}
template <class Q>
Q queue<Q>::displayQueue()
{
    if(isEmpty())
        cout<<"Queue is empty\n";
    else
    {
    	cout<<"Elements in the Queue are \t";
    	for(int i=front;i<=rear;i++)
		{
    			cout<<Arr[i]<<" ";
		}
		cout<<"\n";
	}
}
int main()
{
    char ch;
    int size,count;
    queue<int>q(10);
    do
    {
        cout<<"-------MENU--------\n";
        cout<<"1.Enqueue\n2.Dequeue\n3.Show Front\n4.Size\n5.Display Queue\n";
        cout<<"Enter E to Exit\n";
        cin>>ch;
        switch(ch)
        {
            
            case '1':
                int elem;
                cout<<"Enter the element\t";
                cin>>elem;
                q.enQueue(elem);
                break;
            case '2':
                q.deQueue();
                break;
            case '3':
                q.showFront();
                break;
            case '4':
                q.size();
                break;
            case '5':
            	q.displayQueue();
            	break;
            default:
                if((ch!='e')||(ch!='E'))
                    cout<<"Invalid!\n";
            		break;
                
        };
    }
    while((ch!='e')||(ch!='E'));
    return 0;
}
