//Template queue class


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
    if (rear == size-1 && front == 0 || rear == front -1)
		return true;
	else 
		return false;
}
template <class Q>
Q queue<Q>::showFront()
{
    if(isEmpty())
        cout<<"Queue is empty";
    else
        return Arr[front];
}
template <class Q>
void queue<Q>::enQueue(Q elem)
{
    if(isFull())
        cout<<"Queue is full!\n";
    else
    {
        rear++;
        Arr[rear]=elem;
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
        cout<<"Element removed is "<<Arr[front];
        front++;
        count--;
    }
}

int main()
{
    char ch;
    int size,count;
    queue<int>q(10);
    
    do
    {
        cout<<"-------MENU--------";
        cout<<"1.Enqueue\n2.Dequeue\n3.Show Front\n4.Size\n";
        cout<<"E to exit";
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
            case '4':
                q.size();
                break;
            default:
                if(ch!='e'||ch!='E')
                    cout<<"Invalid!\n";
            break;
                
        };
    }
    while((ch!='e')||(ch!='E'));
    return 0;
}

