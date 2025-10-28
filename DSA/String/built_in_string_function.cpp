#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    //string length
    string s1 = " Mahima patidar is in IIST";
    cout<<s1.length()<<endl;
    
    // Push baAck 
    string s2 = "Mahima";
    cout<<s2<<endl;

    s2.push_back('a');
    s2.push_back('b');
    s2.push_back('c');
    s2.pop_back();

    cout<<s2<<endl;
     
    //addition
    string s3 = "abc";
    string s4 = "def";
    string s5 = s3 + s4 ;
    cout<<s5<<endl;

    //reverse
    string s6 = "hello";
    reverse(s6.begin(), s6.end());
    cout<<s6<<endl;

}
