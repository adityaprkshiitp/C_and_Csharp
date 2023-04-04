#include<iostream>
using namespace std;
int dice(int x,int y){
    if (x>y){
        cout << x <<endl;
    }
    else {
        cout << y <<endl;
    }
}
int main() {
     int x,y;
    cin >> x >> y;
    cout << dice(x,y);
}