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

    int Target;
    cout<<"Enter the value of target: ";
    cin>>Target;

    int high, low, mid;
    low=0;
    high=n-1;

    bool flag = false;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==Target){
            flag = true;
            break;
        }
        
        else if(arr[mid]<Target) low=mid+1;

        else high=mid-1;
    }

    if(flag==true){
        int Lowbound, Highbound;
        Lowbound=mid-1;
        Highbound=mid+1;

        cout<<"Low bound of the target is "<<arr[Lowbound]<<endl;
        cout<<"High bound of the target is "<<arr[Highbound];
    }
    else cout<<"Target not found";
}