#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    sort(s.begin(),s.end());
    cout<<s<<endl;
    
}//it is arranged in the order of ASCII value 
