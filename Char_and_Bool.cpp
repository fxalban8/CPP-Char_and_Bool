#include <iostream>
using namespace std;

int main(){

	bool state=true;	//declaring a bool variable
	
	char x=55;		/*declaring a char variable 
				  which saves the character in 
				  the ASCII table whose key value is 55
				  */ 	

	cout<<x<<endl;

	
	
	
	
	char y='7';	//declaring a char variable which value is 7
			//y cannot be used for arithmetic operations
	cout<<y<<endl;

	

	wchar_t z='Q';	//declaring a wchar_t variable which saves the key value in the ASCII
			//table referring to Q
	cout<<z<<endl;

        //waiting for the user to press ENTER
        cin.get();


	return 0;
}
