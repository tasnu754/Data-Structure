#include<iostream>

using namespace std;

struct students{
    char name[30];
    float id;
    float cgpa;
};

int main(){
    struct students *p;
    int n;
    cout<<"Number of students you want to input information: ";
    cin>>n;
    p = new students[n];

    for(int i=0; i<n; i++){
        cout<<"Input the name of  stuent "<<i+1<<" : ";
        cin>>(p+i)->name;

        cout<<"Input the id of  stuent "<<i+1<<" : ";
        cin>>(p+i)->id;

        cout<<"Input the cgpa of stuent "<<i+1<<" : ";
        cin>>(p+i)->cgpa;
    }

}