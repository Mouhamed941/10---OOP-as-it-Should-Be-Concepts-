

#include <iostream>
using namespace std;

class clsPerson
{
public:
	//Data Members
	//Have their own space in memory
	string FirstName;
	string LastName;
	
	//Member Functions
	//They share memory space among all the members
	string FullName()
	{
		return FirstName + " " + LastName;
	}

private:
	string NakName;
protected:
	int x;
		
};


int main()
{
	clsPerson Person1;
	Person1.FirstName = "Mouhamed";
	Person1.LastName = "FARDOUSI";
	
	cout << Person1.FullName() << endl;
	system("Pause>0");
}


