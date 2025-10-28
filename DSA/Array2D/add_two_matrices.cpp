#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[3][3];
    int brr[3][3];
    int crr[3][3];
    cout<<"Enter the elements of 1st array:";
    for(int i = 0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the elements of 2nd array:";
    for(int i = 0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cin>>brr[i][j];
        }
    }
    for(int i = 0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            crr[i][j] = arr[i][j] + brr[i][j];
        }
    }
    for(int i = 0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }

}
