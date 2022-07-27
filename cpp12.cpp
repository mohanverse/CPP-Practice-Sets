#include <iostream>
using namespace std;

void sayHello() {
    puts("Hello there!");
}

int saytwo(){
    //puts("2");
    return 2;
}

int main(){
    sayHello();
    //saytwo();
    printf("%d\n", saytwo());

    return 0;

}