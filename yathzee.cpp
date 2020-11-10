#include <iostream>
#include <random>
#include <vector>
using namespace std;

vector<int> *randDice(int number);

int main(int argc, char *argv[]){
    vector<int> *dices = randDice(6);
    for(auto i: *dices){
        cout << i << "\t";
    };
    cout << endl;
    return 0;
}

vector<int> *randDice(int number){
    random_device rnd;
    mt19937 gen(rnd()); //big boys say mersenne twister is the best
    uniform_int_distribution<> dist(1,6);
    vector<int> *vec = new vector<int>;
    vec->clear();
    for(int i=0; i<number; ++i){
        vec->push_back(dist(gen));
    }
    return vec;
}