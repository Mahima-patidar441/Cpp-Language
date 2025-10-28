#include <iostream>
using namespace std;
int main()
{
    string s ;
    cout<<"Enter a string :";
    cin>>s;
    
    for (int i = 0; s[i]!='\0'; i++)
    {
        if (i%2==0)
        {
            s[i] = 'a';
        }
    }
    cout<<s;
}
    
