//macros

#include <iostream>
#include <string>

#define END return 0  
#define ENDMESSAGE  cout << "program ends here\n"
#define LOCINT int8_t
#define LCOCCPC const char* const
#define console_log(a) cout << a << endl




using namespace std;

int main(){
    
   int score = 400;
   console_log(score);
   string name = "mohanchaudhary";
   console_log(name); 

    ENDMESSAGE; 
    END;
}

