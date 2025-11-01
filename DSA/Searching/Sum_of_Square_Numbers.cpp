#include<iostream>
using namespace std;
#include<cmath>

bool isPerfectSq(int n){
    int root = sqrt(n);
    if(root*root==n) return true;
    else return false;
}
int main(){
    int x;
    cout<<"Enter the number you wanna check: ";
    cin>>x;

    int flag=-1;
    int a=0,b=x;
    while(a<=x){
        if(isPerfectSq(a) && isPerfectSq(b)){
            flag=1;
            break;
        }
        else if(!isPerfectSq(b)){
            b=(int)sqrt(b)*(int)sqrt(b);
            a=x-b;
        }
        else{
            a=((int)sqrt(a)+1)*((int)sqrt(a)+1);
            b=x-a;
        }
    }

    if(flag==true){
        cout<<x<<"is the sum of ("<<a<<", "<<b<<") squares";
    }
    else cout<<"Sum does not exists";
}