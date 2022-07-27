#include <iostream>


void printval(int a){
    printf("integer value is %d\n", a);
}
void printval(double a){
    printf("double value is %f\n", a);
}
void printval(int * a){
    printf("pointer value is %f\n", a);
}\

int main(){
    printval(nullptr);
    return 0;
}

