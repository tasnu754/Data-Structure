#include<iostream>

using namespace std;

int main(){
    int nums[100],s,k=1;
    cout<<"Input array size: ";
    cin>>s;
    cout<<"\nInput the array elements: ";


    for(int i=0; i<s; i++){
        cin>>nums[i];
    }

    for(int i=0; i<s; i++){
        for(int j=i+1; j<s; j++){
            if(nums[i] != nums[j]){
                k++;
                break;
            }
        }
    }

    cout<<k;

}
