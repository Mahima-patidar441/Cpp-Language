#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int *ptr = arr ; // int *ptr = &arr[0]; 
    cout<<ptr<<endl;

    for (int i = 0; i <= 4; i++)
    {
        cout<<ptr[i]<<" ";
    }

    cout<<endl;

    *ptr = 8 ; //ptr[0]=8 
    ptr++; // ptr is pointing to second element 
    *ptr = 9 ;
    ptr--;

    for (int i = 0; i <= 4; i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    
}
