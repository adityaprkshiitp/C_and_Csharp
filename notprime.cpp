#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int x;
    cin>>x;
    bool flag=0;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x%i ==0){
        cout<<"not prime"<<endl;
        flag=1;
        break;
        }   
    }
    if(flag==0){
        cout<<"prime"<<endl;
    }
    return 0;
   
}