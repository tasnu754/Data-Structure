#include <bits/stdc++.h>
#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

node *front = NULL;
node *rear = NULL;
node *temp;

void enqueue(int x)
{
    temp = new node();
    temp->data = x;
    temp->next = NULL;

    // if the queue is empty
    if (rear == NULL && front == NULL)
    {
        front = rear = temp;
        rear->next = front; //Bz it is a circular link list
    }

    // if there are one or more than one node in the queue
    else
    {
        rear->next = temp;
        rear = temp;
        rear->next = front; //Bz it is a circular link list
    }
}

int main(){
    int num;
    cout<<"Insert the elements of Q1 "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"How many nodes you want to enqueue: ";
    cin>>num;
    cout<<endl;

    while (num--)
    {
        int value;
        cout<<"Enter the data of the node: ";
        cin>>value;
        cout<<endl; 
        enqueue(value);
    }
    
}