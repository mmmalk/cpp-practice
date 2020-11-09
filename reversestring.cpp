#include <iostream>
#include <string.h>
using namespace std;

char reverse(char *arg[]);

int main(int argc, char *argv[]){

    size_t size = strlen(argv[1]);
    char reversed[size];

    cout << size << endl;
            
    return 0;
}

char reverse(char *arg[]){
    if(arg[0]=='\0'){
        return *arg[0];
    } else {
        
    }
}