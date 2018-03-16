#include<iostream>
# define SIZE 5
using namespace std;
int Arr[SIZE];
int front = -1;
int rear = -1;
int size = SIZE;
//Check if queue is empty
bool isEmpty()
{
	if (front == -1 && rear == -1)
	   return true;
    else
    	return false;
}
//function to insert element in a queue
bool isFull()
{
	if (rear == size-1 && front == 0 || rear == front -1)
		return true;
	else 
		return false;
}
void enQueue(int value)
{ if (isFull())
                {
                  cout<<"queue is full ";
                  return;
                 }
               else
                if(rear==SIZE-1&&front!=0)
                  {
                    rear=0;
                    Arr[rear]=value;
                  }
               else
                   Arr[++rear]=value;
                  return;
};
    	
void deQueue(){
	if (isEmpty())
	   cout<<"Queue is Empty\n";
    else
	{
	 	if( front == rear )
		    front = rear = -1;
   		    else
   		    front++;
	}
}
//function to display element at front
void showFront( )
{
 if( isEmpty())
  cout<<"Queue is empty \n";
 else
  cout<<"Element at front is:"<<Arr[front+1]<<"\n";
}
void displayQueue()
{
 if(isEmpty())
  cout<<"Queue is empty\n";
 else
 {
  for( int i=front+1 ; i<= rear ; i++)
   cout<<Arr[i]<<" ";
  cout<<"\n";
 }
}
int main()
{
 //inserting elements in queue
 cout<<"Inserting elements in queue\n";
 enQueue(2);
 enQueue(3);
 enQueue(5);
 enQueue(6);
 enQueue(7);
 enQueue(8);
 displayQueue();
 // queue is full
 enQueue(9);
 //show element at front
 showFront();

 cout<<"Removing elements from queue\n";
 //removing elements from the queue
 deQueue();
 displayQueue();
 deQueue();
 displayQueue();
 deQueue();
 displayQueue();
 deQueue();
 displayQueue();
 deQueue();
 enQueue(55);
 enQueue(56);
 enQueue(57);
 enQueue(58);
 enQueue(59);
 displayQueue();
 showFront();
}
