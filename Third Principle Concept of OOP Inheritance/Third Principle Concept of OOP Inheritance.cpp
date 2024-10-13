#include <iostream>

using namespace std;

class clsPerson
{
private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;
public:
	clsPerson()
	{

	};

	clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	};

	//Read only property
	int GetID()
	{
		return _ID;
	}

	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	//Get Property
	string FirstName()
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

	void SetEmail(string Email)
	{
		_Email = Email;
	}

	//Get Propertie
	string GetEmail()
	{
		return _Email;
	}

	//Set Properties
	void SetPhone(string Phone)
	{
		_Phone = Phone;
	}

	//Get Propertie
	string GetPhone()
	{
		return _Phone;
	}
	string FullName()
	{
		return _FirstName + " " + _LastName;
	}
	void Print()
	{
		cout << "\nInfo:\n";
		cout << "____________________________\n";
		cout << "ID         : " << _ID << endl;
		cout << "First Name : " << _FirstName << endl;
		cout << "Last  Name : " << _LastName << endl;
		cout << "Full  Name : " << FullName() << endl;
		cout << "Email      : " << _Email << endl;
		cout << "Phone      : " << _Phone << endl;
		cout << "____________________________\n";

	}
	void SendEmail(string Subject, string Body)
	{
		cout << "\nThe following message sent successfully to email: " << _Email << endl;
		cout << "Subject : " << Subject << endl;
		cout << "Body : " << Body << endl;
	}

	void SendSMS(string Message)
	{
		cout << "The following message sent successfully to Phone: " << _Phone << endl;
		cout << Message << endl;

	}

};

class clsEmployee :public clsPerson
{
private:
	string _Title;
	string _Department;
	float _Salary;
public:
	void SetTitle(string Title)
	{
		_Title = Title;
	}
	string GetTitle()
	{
		return _Title;
	}

	void SetDepartment(string Department) {
		_Department = Department;
	}
	string GetDepartment()
	{
		return _Department;
	}

	void SetSalary(float Salary)
	{
		_Salary = Salary;
	}
	float GetSalary()
	{
		return _Salary;
	}
};
int main()
{
	clsEmployee Employee1;
	Employee1.SetFirstName("Mouhamed");
	Employee1.SetLastName("FARDOUSI");
	Employee1.SetEmail("fardosi1994@gmail.com");
	Employee1.SetPhone("053678389");
	Employee1.SetTitle("Developer");
	Employee1.SetDepartment("IT");
	Employee1.SetSalary(1000);
	Employee1.GetID();
	Employee1.Print();
	cout << "Title : " << Employee1.GetTitle() << endl;
	cout << "Department : " << Employee1.GetDepartment() << endl;
	cout << "Salary : " << Employee1.GetSalary() << endl;

	Employee1.SendEmail("Hi", "How are you");
	Employee1.SendSMS("Hi");
}

