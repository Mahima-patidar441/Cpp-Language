#include<iostream>
#include<vector>
using namespace std;
int main(){
    int sum ;
    cout<<"Enter the target sum : ";
    cin>>sum;

    int n;
    cout<<"Enter the array size : ";
    cin>>n;

    vector<int> v;
    cout<<"Enter the array elements : ";
    for(int i = 0 ; i < n ; i++){
        int q ; 
        cin>>q;
        v.push_back(q);
    }
    for(int i = 0 ; i < v.size()-2 ; i++){
        for (int j = i+1 ; j < v.size()-1 ; j++ ){
            if(v[i]+v[j]==sum){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }

}
