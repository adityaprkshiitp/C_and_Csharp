#include<iostream>
using namespace std;

int main(){
    class MyClass {
 public:
  MyClass(int a, int b)
  : regVar(a), constVar(b)
  {
  }
 private:
  int regVar;
  const int constVar;
};
    return 0;
}