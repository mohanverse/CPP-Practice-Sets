//
//  main.cpp
//  get_started
//
//  Created by lco on 19/04/20.
//  Copyright Â© 2020 lco. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class User{

    int _secret = 22;
    
public:
    string name = "default";
    void classMessage();
    void setSecert(const int & newsecret){_secret = newsecret;}
    int getSecret()const;
    
};

void User::classMessage(){
    cout << "Class is great, " << name << endl;
    
}

int User::getSecret()const{
    return _secret;
    
}


int main()
{
   
    User sam;
    sam.name = "Sam";
    sam.classMessage();
    sam.setSecert(333);
    
    cout << sam.getSecret() << endl;
    
    User hitesh;
    hitesh.classMessage();
    hitesh.name = "mohanverse";
    hitesh.classMessage();
    
    const User rock;
    cout << rock.getSecret() << endl;

    User peter = sam;
    cout << peter.getSecret()<<endl;

    return 0;
}