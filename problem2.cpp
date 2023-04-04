#include <iostream>
using namespace std;

int main() {
    int n,i;
    cin >> n;
    
    for (int i = n; i > 0; i--)
    {
        cout<<i<<endl;
        if(i % 5 == 0){
            cout<<"beep\n";
        }
    }
    return 0;
}