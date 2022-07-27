#include <iostream>
using namespace std;
int main(){

    int my_numbers[] = {4, 5, 6, 7, 8, 9, 0};
    int i = 0;

    while (i<7){
    if (i == 3)
    {
        cout<< "speacial thing" << endl;
    }
    
      cout<<"current number is:" << my_numbers[i] <<endl;
     // i = i + 1;  //++i; , i++; three think you can use
     ++i;
    }
    
    return 0;
}