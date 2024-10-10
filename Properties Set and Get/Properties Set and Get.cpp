

#include <iostream>
using namespace std;

class clsPerson
{



private:
	string _FirstName;
	string _LastName;
public:
	//Set Propertie
	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	//Get Propertie
	string FirstName()
	{
		return _FirstName;
	}

	//Set Propertie
	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}
	
	//Get Propertie
	string LastName()
	{
		return _LastName;
	}
};

int main()
{
	clsPerson Person1;
	Person1.SetFirstName("Mouhamed");
	Person1.SetLastName("FARDOUSI");

	cout << Person1.FirstName() << endl;
	cout << Person1.LastName() << endl;
	system("pause>0");
}

