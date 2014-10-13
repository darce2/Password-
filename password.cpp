#include <iostream>
#include <string>
using namespace std;

namespace
{
	string password;

	bool isValidp()
	{
		int j = 0;
		if (password.length() < 8)
			return false;
		for (int i = 0; i < password.length(); i++)
		{
			if (password[i] == 0 || password[i] == 1 || password[i] == 2 || password[i] == 3 || password[i] == 4 || password[i] == 5 || password[i] == 6 || password[i] == 7 || password[i] == 8 || password[i] == 9)
				j++;

		}

		if (password.length() > 7 && j > 0)
		{
			return true;
		}
		
	}
	
	
}

using namespace std;
namespace Authenticate
{

	void inputPassword()
	{
		do
		{
			cout << "Enter your password (at least 8 characters " << "and at least one non-letter)" << endl;
			cin >> password;
		} while (!isValidp());

	}
	string getPassword()
	{
		return password;
	}

	
	
}
