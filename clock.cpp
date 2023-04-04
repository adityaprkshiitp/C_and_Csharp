#include<iostream>
using namespace std;
double clock(double x) {
   return x*60;
}
int main(){
    cout << "Please enter the time in hours" << endl;
    int y;
    cin >> y;
    cout << "Hours to Min - " << clock(y) << endl;
}
