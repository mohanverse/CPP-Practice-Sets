#include <iostream>
using namespace std;
int main() {
	printf("float size is %1d bits\n", sizeof( long double)*8);
	
	float my_p_value = 20.2 + 20.2;
	
	if(my_p_value == 40.400){
		puts("you got it right");
		
	}else{
		puts("sumthing");
	}
	printf("my p value is: %1.3f in float\n", my_p_value);
	
	return 0;
}
