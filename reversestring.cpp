#include <iostream>
#include <string>
using namespace std;

void reverse(string &str);

int main(int argc, char *argv[]){

    string str = argv[1];

    cout << str << endl;
    reverse(str);

    return 0;
}

void reverse(const string &str){
    size_t size = str.size();
    if(size == 1){
        cout << str << endl;
    } else {
        cout << str[size -1] << endl;
        reverse(str.substr(0, size -1));
    }
}