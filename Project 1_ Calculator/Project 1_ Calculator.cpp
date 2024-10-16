#include <iostream>
using namespace std;

class clsCalculator
{

private:
	int _Result = 0;
	int _LastNumber = 0;
	string _LastOperation = "Clear";
	float _PreviousResult = 0;
	
	bool _IsZero(float Number)
	{
		return Number == 0;
	}
public:
	void Add(float Number)
	{
		_LastNumber = Number;
		_PreviousResult = _Result;
		_LastOperation = "Adding";

		_Result += Number;
		
	}
	void Substract(int Number)
	{
		_LastNumber = Number;
		_PreviousResult = _Result;
		_LastOperation = "Subtracting";

		_Result -= Number;
	}
	void Multiply(int Number)
	{
		_LastNumber = Number;
		_PreviousResult = _Result;
		_LastOperation = "Multiplying";

		_Result *= Number;
	}

	void Divide(int Number)
	{
		_LastNumber = Number;
		if (_IsZero(Number))
			Number = 1;
		_PreviousResult = _Result;
		_LastOperation = "Dividing";

		_Result /= Number;
	}

	float GetFinalResults()
	{
		return _Result;
	}
	void Clear()
	{
		_LastNumber = 0;
		_PreviousResult = 0;
		_LastOperation = "Clear";
		_Result = 0;
	}

	void CancelLastOperation()
	{
		_LastNumber = 0;
		_LastOperation = "Cancelling Last Operation";
		_Result = _PreviousResult;
	}
	void PrintResult()
	{
		cout << "Result ";
		cout << "After " << _LastOperation << " " <<
			_LastNumber << " is: " << _Result << "\n";
	}

};


int main()
{
	clsCalculator Calculator1;
	Calculator1.Clear();
	Calculator1.Add(15);
	Calculator1.PrintResult();

	Calculator1.Substract(5);
	Calculator1.PrintResult();

	Calculator1.Multiply(5);
	Calculator1.PrintResult();

	Calculator1.Divide(5);
	Calculator1.PrintResult();

	Calculator1.CancelLastOperation();
	Calculator1.PrintResult();


	Calculator1.Clear();
	Calculator1.PrintResult();
}

