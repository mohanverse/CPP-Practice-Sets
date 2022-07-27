#include <iostream>

using namespace std;

int main(){
	
	char my_string[] = "mohan";
	char my_name[] = {'m', 'o', 'h', 'a', 'n', 0};
	printf("my name is: %s\n", my_string);
	
	cout<< "take a breack\n";
	
	for (int i = 0; my_name[i]; i++) {
		cout << "charecter is:" <<my_name[i]<< endl;
     }
	cout<< "take a breack part2\n";
		
	for (char * cp = my_name; *cp !=0; cp++){
		cout << "charecter is:" << *cp << endl;
				
	}
	
	cout << "take a break part3\n";
	for(char i :my_name){
		if(i == 0) break;
		cout <<"char is:"<< i <<endl;
		
		
		
	}
	
	return 0;
	
}
