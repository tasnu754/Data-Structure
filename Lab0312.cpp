#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

node *top, *temp, *newNode;

void push()
{

    cout << "Enter the data you want to push: ";
    newNode = new node();
    cin >> newNode->data;
    newNode->next = NULL;

    if (top == NULL)
    {
        top = newNode;
    }
    else
    {
        newNode->next = top;
        top = newNode;
    }
}

void print()
{
    temp = top;

    cout << "The Stack elements are: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

void pop()
{

    temp = top;

    if (temp == NULL)
    {
        cout << "The Stack is empty" << endl
             << endl;
    }
    else
    {
        cout << "The data you want to delete is: " << temp->data << endl
             << endl;

        top = top->next;
        delete (temp);
    }
}

int main()
{
    int choice = 1;

    while (choice)
    {
        cout << "1. Insert data/ push stack" << endl;
        cout << "2. Print stack" << endl;
        cout << "3. Pop stack" << endl;
        cout << "O. Exit" << endl
             << endl;
        cout << "Choose an option: ";
        cout << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            print();
            break;
        case 3:
            pop();
            break;

        default:
            break;
        }
    }
}