#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the values in array in ascending order:-"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int low,mid,high;
    low=0;
    high=n-1;

    bool flag=false;
    int target;
    cout<<"Enter the value of target: ";
    cin>>target;

    while(low<=high){
        mid=(low+high)/2;

        if(arr[mid]==target){
            if(arr[mid-1]==target){
                high=mid-1;
            }
            else{
                flag=true;
                break;
            }
        }

        else if(arr[mid]<target) low=mid-1;

        else high=mid-1;
    }

    if(flag==true){
        cout<<"First occuring index of the target is "<<mid;
    }
    else cout<<"Target not found";
}