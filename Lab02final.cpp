#include <bits/stdc++.h>
#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

node *head, *curr, *tail;

void create()
{
    head = NULL;

    int n, val;
    cout << "How many nodes you want to create: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        curr = new node();
        cout << "Enter the value of node " << i + 1 << " : ";
        cin >> curr->data;
        curr->next = NULL;

        if (head == NULL)
        {
            head = curr;
            tail = curr;
        }

        else
        {
            tail->next = curr;
            tail = curr;
        }
    }
}

void insertAtBeg()
{
    curr = new node();

    cout << "\n\nEnter value of the node: ";
    cin >> curr->data;

    if (head == NULL)
    {
        head = curr;
    }

    else
    {
        curr->next = head;
        head = curr;
    }
}

int getTotalNode()
{
    node *temp = head;

    if (head == NULL)
    {
        return 0;
    }

    else
    {
        int c = 0;

        while (temp != NULL)
        {
            c++;
            temp = temp->next;
        }

        return c;
    }
}

void insertAnyPos()
{
    int pos;
    cout << "\n\nEnter the position: ";
    cin >> pos;

    int totalNode = getTotalNode();

    if (pos < 0 || pos > totalNode + 1)
    {
        cout << "Invalid position. Please enter correct position";
    }

    else
    {
        curr = new node();
        cout << "\n\nEnter the value of the node: ";
        cin >> curr->data;
        curr->next = NULL;

        node *trevers;
        trevers = head;

        for (int i = 1; i < pos - 1; i++)
        {
            trevers = trevers->next;
        }

        curr->next = trevers->next;
        trevers->next = curr;
    }
}

void deleteFromEnd()
{

    if (head != NULL)
    {
        node *prevNode;
        curr = head;

        while (curr->next != NULL)
        {

            prevNode = curr;
            curr = curr->next;
        }

        prevNode->next = NULL;
        delete (curr);
    }
}

void deleteFromBeg()
{
    if (head != NULL){
    curr = head;
    head = head->next;
    delete (curr);
    }

    else{
        cout<<"No data exist";
    }
}

void deleteFromAny()
{

    if (head != NULL)
    {
        int p, nodeNum;

        cout << "\n\nEnter the position number: ";
        cin >> p;
        nodeNum = getTotalNode();

        if (p < 0 || p > nodeNum)
        {
            cout << "\n\nInvalid position. Please try again";
        }

        else
        {
            node *temp1;
            curr = head;

            for (int i = 1; i < p - 1; i++)
            {
                curr = curr->next;
            }

            temp1 = curr->next;
            curr->next = temp1->next;
            delete (temp1);
        }
    }

    else{
        cout<<"No data exist";
    }
}


void reverse()
{
    if (head != NULL)
    {
        node *prev1, *nextnode;
        prev1 = NULL;

        curr = nextnode = head;

        while (nextnode != 0)
        {
            nextnode = nextnode->next;
            curr->next = prev1;
            prev1 = curr;
            curr = nextnode;
        }

        head = prev1;
    }

    else{
        cout<<"No data exist";
    }
}


void removeDuplicate()
{

    if (head != NULL)
    {

        node *temp3;
        temp3 = head;

        while (temp3 != NULL)
        {

            curr = temp3;

            while (curr->next != NULL)
            {

                if (temp3->data == curr->next->data)
                {
                    node *temp4 = curr->next;
                    curr->next = temp4->next;
                    delete (temp4);
                }

                else
                {
                    curr = curr->next;
                }
            }

            temp3 = temp3->next;
        }
    }

    else{
        cout<<"No data exist";
    }
}

void display()
{
    curr = head;

    cout << "\n\n\nDisplaying the list:" << endl;
    while (curr != NULL)
    {
        cout << " " << curr->data;
        curr = curr->next;
    }
    cout<<endl<<endl;
}


int main()
{
    int c;
    while(c!=9){
    cout<<"1. Create a linked list/Insert new node"<<endl;
    cout<<"2. Insert node at beginning"<<endl;
    cout<<"3. Insert node at any position"<<endl;
    cout<<"4. Delete Node from last position"<<endl;
    cout<<"5. Delete Node from beginning"<<endl;
    cout<<"6. Delete Node from any position"<<endl;
    cout<<"7. Reverse Linked list"<<endl;
    cout<<"8. Remove Duplicate data from Linked list"<<endl;
    cout<<"9. Out of the Linked list"<<endl;
    cout<<"Select an option"<<endl;

    cin>>c;

    switch(c){
        case 1:
             create();
             display();
             break;

        case 2:
             insertAtBeg();
             display();
             break;

        case 3:
             insertAnyPos();
             display();
             break;

        case 4:
             deleteFromEnd();
             display();
             break;

        case 5:
             deleteFromBeg();
             display();
             break;

        case 6:
             deleteFromAny();
             display();
             break;

        case 7:
             reverse();
             display();
             break;

        case 8:
             removeDuplicate();
             display();
             break;

        default:
             break;


    }

    }

}
