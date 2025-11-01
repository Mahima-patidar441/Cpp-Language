#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array such that:\nSize should be greater than 2 : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements in array such that:\nThey Form Mountain:-"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int low,mid,high;
    low=1;
    high=size-2;

    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            break;
        }
        else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
            low=mid+1;
        }
        else high=mid-1;
    }

    cout<<"Peek index is "<<mid;
}