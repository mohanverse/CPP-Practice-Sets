#include <iostream> 
using namespace std;

int main(){
	int my_numbers[] = {4, 5, 6, 7, 8, 9, 0};
	
	int i = 0;
	
	do{
		cout << "current number is:" << my_numbers[i] << endl;
		i++;
	} wile(i < 7);
	
	cout << "outside of loop" << endl;
	
	return 0;
	
}
