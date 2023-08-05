#include<iostream>

using namespace std;

void sortarray(int n,int *p){
    int temp;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(*(p+i)>*(p+j)){
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }

}


int main(){
    int n,*q;
    cout<<"Input array size: "<<endl;
    cin>>n;

    int a[n];
    cout<<"Input "<<n<<" number of elements in the array: ";

    q = a;
    for(int i=0; i<n; i++){  
        cin>>*(q+i);

    }

    sortarray(n,a);

    cout<<"Expected output: ";
    for(int i=0; i<n; i++){
        cout<<*(q+i)<<" ";
    }


}
