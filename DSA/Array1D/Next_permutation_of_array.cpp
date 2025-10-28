#include<iostream>
#include<vector>
using namespace std;
void reverse(int i , int j , vector<int> &v1){
     while(i<j){
        int temp = v1[i];
        v1[i] = v1[j];
        v1[j] = temp ;
        i++;
        j--;
    }

}
void nextPermutation(vector<int> &v){
    int idx = -1 ;
    int n = v.size();
    for (int i = n-2; i >= 0; i--)
    {
        if(v[i]<v[i+1]){
            idx = i ;
            break; 
        }
    }
    if(idx==-1){ // if array is already greatest 
        reverse(0 , n-1, v);
        return ;
    }
    //sorting after pivot index
    reverse(idx+1 ,n-1 , v);
    //finding the just greater number than idx
    int j = -1;
    for(int i=idx+1 ; i<n ; i++){
        if (v[i]>v[idx])
        {
            j=i;
            break;
        }
        
    }
    // swapping 
    int temp = v[idx];
    v[idx] = v[j];
    v[j] = temp;
}
int main (){

    vector<int> v = {1,3,2} ;
    int n = v.size();
    nextPermutation(v);
    for(int i=0; i<n ; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}
