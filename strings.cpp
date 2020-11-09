#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isSame(string *str1, string *str2);

int main(int argc, char *argv[]){

    string str1 = argv[1];
    string str2 = argv[2];

    cout << "first argument\t" + str1 << endl;
    cout << "second argument\t" + str2 << endl;

    bool same = isSame(&str1, &str2);
    cout << same << endl;
    return 0;
}

bool isSame(string *str1, string *str2){
    if(str1->length() != str2->length()){
        return false;
    }
    sort(str1->begin(), str1->end());
    cout << "sorted 1\t" + *str1 << endl;
    sort(str2->begin(), str2->end());
    cout << "sorted 2\t" + *str2 << endl;

    for(size_t i=0; i < str1->length(); i++){
        if(str1->at(i) != str2->at(i)){
            return false;
        };
    };
    return true;
}