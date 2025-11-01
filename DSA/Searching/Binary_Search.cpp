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

    int target;
    cout<<"Enter target value: ";
    cin>>target;

    int low,mid,high;
    bool flag = false;
    low=0;
    high=n-1;

    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==target){
            flag=true;
            break;
        }
        else if(arr[mid]<target) low=mid+1;

        else high = mid-1;
    }

    if(flag==true){
        cout<<"Target value is found at "<<mid<<" index";
    }
    else cout<<"Target value not found";
}
