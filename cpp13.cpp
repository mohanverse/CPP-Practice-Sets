#include <iostream>
using namespace std;
int lifeUp(){
    static int life = 3;
    return ++life;

}
int main(){
    int life = 3;
    cout << "your starting game life is: " <<life <<endl;

    life = lifeUp();
    printf("your updated game life is %d\n", life);

    life = lifeUp();
    printf("your updated game life is %d\n", life);

    return 0;

}