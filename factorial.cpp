#include<iostream>
#include<cstdlib>
using namespace std;
int factorial(int n) {
  if (n==1) {
    return 1;
  }
  else {
    return n * factorial(n-1);
  }
}
int main() {
    int x;
    cout<<"enter the number"<<endl;
    cin>>x;
    cout<<factorial(x);
}