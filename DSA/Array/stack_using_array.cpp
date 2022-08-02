//Linear data structure


//LIFO=Last in first out                                //stack,heap,queue


/*In order to create a stack we need a pointer to the top most element along with other
elements which are stored inside the stack*/


//1.push()=push an element into the stack.
//2.pop()=Remove the topmost element from the stack.
//3.peek(index)=Value at given position is returned.
//4.isEmpty()/isFull()=Determine whether the stack is empty or full.


/*Stack Definition= A stack is a collection of elements with certain operations
                    following LIFO(last in First out) dicipline.A stack can be
                    implemented using array and linked list.*/

//On the above of the stack we need to create a top variable and assign the top variable to -1.

//Code    (Implement stack using array)

#include<iostream>
using namespace std;

int stack[100],n=100,top=-1;

void push(int val)
{
    if(top>=n-1)    //Top start from -1 and the value start from 0 so top value upto n-1
    cout<<"Stack Overflow"<<endl;
    else
    {
        top++;
        stack[top]=val;    //Ater push the value on top  the top of stack value equal to the value which to be push.
    }
}

void pop()
{
    if(top<=-1)
    cout<<"Stack Underflow"<<endl;
    else
    {
        cout<<"The popped element is "<<stack[top]<<endl;
        top--;
    }
}

void display()
{
    if(top>=0)
    {
        cout<<"Stack elements are:";
        for(int i=top;i>=0;i--)
        cout<<stack[i]<<" ";
        cout<<endl;
    }
    else
    cout<<"Stack is empty";
}

int main()
{
    int ch,val;
    cout<<"1) Push in stack"<<endl;
    cout<<"2) Pop from stack"<<endl;
    cout<<"3) Display stack"<<endl;
    cout<<"4) Exit"<<endl;

    do
    {
        cout<<"Enter choice: "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1: {
                cout<<"Enter the value to be pushed:"<<endl;
                cin>>val;
                push(val);
                break;
            }

            case 2: {
                pop();
                break;
            }

            case 3: {
                display();
                break;
            }

            case 4: {
                cout<<"Exit"<<endl;
                break;
            }

            default: {
                cout<<"Invalid Choice"<<endl;
            }
        }
    }
    while(ch!=4);
    return 0;
}







//Implement stack using Linked list