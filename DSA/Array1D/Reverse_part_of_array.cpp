#include<iostream>
#include<vector>
using namespace std;
void reversePart(int i , int j , vector<int> &v1){
     while(i<=j){
        int temp = v1[i];
        v1[i] = v1[j];
        v1[j] = temp ;
        i++;
        j--;
    }

}
int main(){
    vector<int> v1; 
    v1.push_back(4);
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(9);
    v1.push_back(3);
    v1.push_back(1);
    
    for(int i=0; i<v1.size() ; i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    
    reversePart(0,3,v1);

    for(int i=0; i<v1.size() ; i++){
        cout<<v1[i]<<" ";
    }

}
