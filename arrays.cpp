#include<iostream>
using namespace std;
int main() {
    int arr[] = {23,45,567,6789,73};
    int sum = 0;
    for (int x = 0; x < 4; x++)
    {
        sum += arr[x];
    }
    cout<<sum<<endl;
    
}