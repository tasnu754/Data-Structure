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

void dequeue()
{

    // if the queue is empty
    if (front == NULL && rear == NULL)
    {
        cout << "Underflow condition" << endl;
    }

    // if there is only one node in the queue
    else if (front == rear)
    {
        temp = front;
        front = rear = NULL;
        delete (temp);
    }

    // if there is multiple node in the queue
    else
    {
        temp = front;
        front = front->next;
        delete (temp);
    }
}

void print()
{

    if (front == NULL && rear == NULL)
    {
        cout << "The queue is empty" << endl;
    }

    else
    {
        temp = front;

        while (temp->next != front)
        {
            cout << temp->data;
            temp = temp->next;
        }
        cout << temp->data;
    }
}

int main()
{
    // int choice;

    cout << "1.Enqueu" << endl;
    cout << "2.Dequeue" << endl;
    cout << "3.Print the queue" << endl;
    cout << "Which operation you want to do: " << endl;

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        int value;
        cout << "Enter the data you want to enqueue: " << endl;
        cin >> value;
        enqueue(value);
        print();
        break;

    case 2:
        dequeue();
        print();
        break;

    case 3:
        print();
        break;

    default:
        cout << "Invalid choice";
        break;
    }
}