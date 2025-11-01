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

    int low,mid,high,ans=0;
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==mid){
            low=mid+1;
        }
        else{
            ans=mid;
            high=mid-1;
        }
    
    }

    if(ans!=0){
        cout<<"Smallest missing non negative integer is "<<ans;
    }
    else cout<<"There is no non negative number missing";
}