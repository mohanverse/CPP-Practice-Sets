// Base class and drive class overriding
#include <iostream>
#include <string>
using namespace std;

class Man{
    string _name;
    int _age;
    Man(){} 
protected:
    Man(const string & nam, const int & age)
    : _name(name), _age(age){}
    void run(){puts("i can run");} 
public:
    void sayName() const; 
};

void Man::sayName() const {
    cout << "My name is: " << _name << "and age is: "<< _age << endl;
}
//superman
class superman : public Man{
    bool flight;
public:
    superman (string name): Man(name,26){}
    void run(){puts("i can run at ligh speed");}

};

//spiderman
class spiderman : public Man{
    bool webbing;
public:
    spiderman (string name): Man(name,19){}
    void run(){puts("i can run at normal speed");}
};

int main(){
    superman clark("kent");
    clark.sayName();
        



    return 0;
}