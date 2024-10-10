
#include <iostream>
using namespace std;
class clsPerson
{



private:
	string _FirstName;
	string _LastName;
public:
	//Set Property
	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	//Get Propertie
	string GetFirstName()
	{
		return _FirstName;
	}

	//Set Properties
	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}

	//Get Propertie
	string LastName()
	{
		return _LastName;
	}
	__declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;
};
int main()
{
	clsPerson Person1;
	Person1.SetFirstName("Mouhamed");
	cout << Person1.GetFirstName() << endl;
	
	//insted of the above we only write
	Person1.FirstName = "Mouhamed";
	cout << Person1. << endl;
	system("pause>0");
}


