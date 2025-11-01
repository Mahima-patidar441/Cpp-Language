#include<iostream>
using namespace std;
#include<algorithm>

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements in array in asscending order:-"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x,k;
    cout<<"Enter the element whose closest elemennts are needed: ";
    cin>>x;

    cout<<"How many closest element do you want: ";
    cin>>k;

    int ans[k];
    int low,high,mid,flag=0;
    low=0;
    high=n-1;
    int idx=0;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==x){
            ans[idx]=arr[mid];
            idx++;
            flag=1;
            break;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else high=mid-1;
    }

    int lb=high;
    int ub=low;

    if(flag==1){
        lb=mid-1;
        ub=mid+1;
    }

    while(idx<k && ub<n && lb>=0){
        int d1=abs(x-arr[lb]);
        int d2=abs(x-arr[ub]);

        if(d1<=d2){
            ans[idx]=arr[lb];
            idx++,lb--;
        }
        else{
            ans[idx]=arr[ub];
            idx++,ub++;
        }
    }

    if(idx<k && lb<0){
        ans[idx]=arr[ub];
        idx++;
        ub++;
    }
    else{
        ans[idx]=arr[lb];
        idx++;
        lb++;
    }

    sort(ans, ans+k);
    cout<<"Closest elements are:-"<<endl;
    for(int i=0; i<k; i++){
        cout<<ans[i]<<" ";
    }
}