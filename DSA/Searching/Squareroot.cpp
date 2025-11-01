#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int low,mid,high;
    low=0;
    high=n;

    while(low<=high){
        mid=(low+high)/2;
        if(mid*mid==n){
            break;
        }
        if(mid*mid<n){
            low=mid+1;   
        }
        if(mid*mid>n){
            high=mid-1;
        }
    }

    cout<<"The squareroot of "<<n<<" is "<<mid;
}