#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> &arr1 , vector<int> &arr2 ){
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res(m+n);
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<=n && j<=m){
        if(arr1[i]<arr2[j]){
            res[k] = arr1[i];
            i++;
            k++;

        }
        else{//arr2[j]<arr1[i]
            res[k]= arr2[j];
            j++;
            k++;
        }
    }
    //for remaining elements 
    if (i==n)
    {
        while(j<=m-1){
            res[k]=arr2[j];
            k++;
            j++;
        }
    }
    if (j==m)
    {
        while(i<=n-1){
            res[k]=arr1[i];
            k++;
            i++;
        }
    }
    return res;
}

int main(){
    vector<int> arr1 ={1,3,5,8};
    vector<int> arr2 ={2,4,6,9,10,12};
    for(int i=0; i<arr1.size(); i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<arr2.size(); i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    vector<int> v = merge(arr1,arr2);
    
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
