#include <iostream>
#include "password.h"
#include "user.h"
#include <string>

using namespace std;
using namespace Authenticate;

int main( )
{
	inputUserName();
	inputPassword();

	cout << "Your username is " << getUserName() <<
		" and your password is: " <<
		getPassword() << endl;

	
	
	return 0;
}
