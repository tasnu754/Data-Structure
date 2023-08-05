#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int rev=0,rem;


int palin(int num){
    if(num==0){
        return rev;
    }
    else
        rem = num % 10;
        rev = rev * 10 + rem;
        palin(num/10);

}

int main(){
    int num;
    cout<<"Input a number: ";
    cin>>num;

    int r = palin(num);

    if(r == num){
        cout<<"The number is palidrom";
    }
    else 
       cout<<"The number is not palidrom";
}