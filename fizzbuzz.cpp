#include <iostream>
#include <cstdlib>
using namespace std;

bool isValid(char *str);

int main(int argc, char *argv[]) {
  /*
  * Simple fizzbuzz, takes int n as an argument and returns every
  * prints out string based on if iterator between 1,2,3,..., n is
  * factor of either 3, 5 or 3 and 5
  */
  if (!isValid(argv[1])) {
    return 1;
  }
  int n = atoi(argv[1]);

  for(int i=1; i <= n; i++){
    if (i % 3 == 0 && i % 5 == 0) {
      cout << "fizzbuzz";
    } else if (i % 3 == 0) {
      cout << "fizz";
    } else if(i % 5 == 0){
      cout << "buzz";
    } else {
      cout << i;
    }
    cout << "\n";
  }

  return 0;
}

bool isValid(char *str){
  while (*str) {
    if(!isdigit(*str++)) {
      return false;
    }
  }
  return true;
}
