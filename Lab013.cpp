#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Input size of the elements: ";
    cin>>n;

    int a[n],*p,*q,c=0;
    p = a;
    q = a;
    for(int i=0; i<n; i++){  
        cin>>*(p+i);
    }

    for(int i=0,j=0; i<n; i++){
        if(*(p+i)>=0){
            c++;
        }
    }
    

    for(int i=0,j=0; i<n; i++){
        if(*(p+i)>=0){
            *(q+j) = *(p+i);
            j++;
        }
    }

    for(int i=0; i<c; i++){
        cout<<" "<<*(q+i);
    }
}