#include<iostream>
#include<vector>
using namespace std;
void printSubsets(string ans , string original, vector<string> &v){
    if(original ==""){
        v.push_back(ans);
        return ;
    }
    char ch = original[0];
    printSubsets(ans+ch , original.substr(1) , v);
    printSubsets(ans , original.substr(1) , v);

}
int main(){
   string str = "abc";
   vector<string> v;
   printSubsets("",str,v);  
   for(string ele:v)
   cout<<ele<<endl;
}
