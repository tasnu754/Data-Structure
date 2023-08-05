#include<iostream>

using namespace std;

int main(){
    int s;
    cout<<"Input size of array: ";
    cin>>s;
    int arr[s];
    
    for(int i=0; i<s; i++){
        cin>>arr[i];
    }

    cout<<"\nArray elements: ";
    for(int i=0; i<s; i++){
        cout<<" "<<arr[i];
    }

    int max = arr[0];
    for(int i=1; i<s-1; i++){
        if(max<arr[i]){
            max = arr[i+1];
        }
    }

    cout<<"\nLargest element is "<<max<<endl;

}