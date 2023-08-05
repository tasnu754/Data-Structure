#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int gcd(int num1,int num2){
    if(num2==0){
        return num1;
    }
    else if(num1<num2){
        gcd(num2,num1);
    }
    else
        gcd(num2, num1 % num2);
}


int main(){
    int num1,num2;
    cout<<"Input first number: ";
    cin>>num1;
    cout<<"Input second number: ";
    cin>>num2;

    int lcm = (num1 * num2) / gcd(num1,num2);
    cout<<lcm;
}