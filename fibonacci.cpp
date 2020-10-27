#include <iostream>
using namespace std;

void fibonacci(int n);

int main(int argc, char *argv[]){
  /*
  * Fibonacci series calculator - prints out the nth fibonacci number
  */
  int n = atoi(argv[1]);
  fibonacci(n);
  return 0;
}

void fibonacci(int n){
  static int i1 = 0,i2 = 1,i3;
  if(n > 0){
    cout << i1 << endl;
    i3 = i1 + i2;
    i1 = i2;
    i2 = i3;
    fibonacci(n - 1);
  }
}
