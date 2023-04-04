#include<iostream>
using namespace std;
template<class T>
T sum(T a, T b) {
    return a+b;
}
int main() {
    int x = 7;
    int y = 15;
    cout<<sum(x,y)<<endl;
}