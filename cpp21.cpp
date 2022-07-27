#include <iostream>
#include <string>

constexpr int maxbuffer = 1024;
using namespace std;
int main(){
    const char * filename = "myfirstfile.txt";
    const  char * information = "mohan kumar chaudhary";
    
    //FILE * fh = fopen(filename, "a");

    //for (int i = 0; i < 50; ++i) {
      //  fputs(information, fh);
    //}
    //fclose(fh);
     
    char buf[maxbuffer];

    FILE * fh = fopen(filename, "w");
    while (fgets(buf, maxbuffer,fh)) {
        fputs(buf, stdout);
       


    }
    fclose(fh);
    
    return 0;
}