#include <iostream>

using namespace std;

struct node
{
    char data;
    node *next;
};

node *top = NULL;
node *temp, *newNode;

void push(char ch)
{

    newNode = new node();
    newNode->data = ch;
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

    top = top->next;
    delete (temp);
}

int isEmpty()
{
    if (top == NULL)
    {
        return 1;
    }
    else
        return 0;
}

void parenthesesMatching()
{
    string s;
    char c;

    cout << "Enter the Expression: ";
    cin >> s;

    for (char c : s)
    {
        if (c == '(')
        {
            push('(');
        }
        else if (c == ')')
        {
            if (isEmpty() == 1)
            {
                cout << "Closing parentheses not matched";
                return;
            }
            pop();
        }
    }
    if (isEmpty() == 1)
    {
        cout << "Balanced";
    }
    else
        cout << "Opening parentheses not end";
}

int main()
{
    parenthesesMatching();
}