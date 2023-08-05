#include<bits/stdc++.h>
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

void display(node * head)
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

node * reverse(node * head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    else{
        node *newhead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;

        return newhead;
    }
}

int main(){
    create();
    node * rev = reverse(head);
    display(rev);

}