#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements in the array such that, They are sorted and can be rotated:-"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int high1, mid1, low1;
    low1=0;
    high1=n-1;
    int pivot=-1;
    while(low1<=high1){
        mid1=(low1+high1)/2;
        if(arr[mid1]<arr[mid1+1] && arr[mid1]<arr[mid1-1]){
            pivot=mid1;
            break;
        }
        if(arr[mid1]>arr[mid1-1] && arr[mid1]>arr[mid1+1]){
            pivot=mid1+1;
            break;
        }
        else if(arr[mid1]>arr[high1]){
            low1=mid1+1;
        }
        else if(arr[mid1]<arr[high1]){
            high1=mid1-1;
        }
    }

    int target,ans=-1;
    cout<<"Enter the target: ";
    cin>>target;

    cout<<pivot<<endl;
    
    int low2=0,high2=n-1,mid2;
    if(arr[pivot]<=target && target<=arr[high2]){
        low2=pivot;
        high2=n-1;
    }
    else{
        high2=pivot-1;
        low2=0;
    }
    while(low2<=high2){
        mid2=(low2+high2)/2;

        if(arr[mid2]==target){
            ans=mid2;
            break;
        }
        else if(arr[mid2]<target){
            low2=mid2+1;
        }
        else{
            high2=mid2-1;
        }
    }

    if(ans==-1){
        cout<<"Element not found";
    }
    else cout<<"Element found at "<<ans<<" index";
}