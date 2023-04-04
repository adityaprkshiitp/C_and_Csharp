#include<iostream>
#include<cstdlib>
using namespace std;
int volume(int l= 1,int b= 1,int h= 1){
        return(l*b*h);
    }
int main() {
    cout << volume() <<endl;
    cout << volume(5) <<endl;
    cout << volume(8,6,7) <<endl;
    cout << volume(8,8) <<endl;
    return 0;
}