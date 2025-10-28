#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[3][3];
    cout<<"Enter the elements of 2D array:";
     for(int i = 0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cin>>arr[i][j];
        }
    }

    int max = INT_MIN;
    for(int i=0; i<3 ; i++){
        for(int j=0; j<3; j++){
            if (arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }
    cout<<"The maximum element is : "<<max;
}
