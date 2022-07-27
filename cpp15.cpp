// stack and heap memory
#include <iostream>
#include "adder.h"

using namespace std;

void lifeUp(int &life) {
    ++life;
}

template<typename T>
T adder(T a, T b){
    return a + b;
}

int main() {
    int life = 3;
    lifeUp(life);
    cout << life <<endl;

    int v1 = 4;
    int v2 = 5;
    float v3 = 5.6 ;
    float v4 = 7.5 ;

    //cout << addme(v3 , v4) << endl;
    return 0;

}

