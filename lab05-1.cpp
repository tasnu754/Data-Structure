#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int power(int num, int p){
    if(p==0){
        return 1;
    }
    else{
        return num * power(num, p-1);
    }
}

int main(){
    int num,p;
    cout<<"Input any number: ";
    cin>>num;
    cout<<"Input power: ";
    cin>>p;

    int x = power(num,p);
    cout<<x;
}