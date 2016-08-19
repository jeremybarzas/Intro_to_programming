#include <iostream>
using namespace std;


void ConditionalsQuestion1()
{
	int y = 0;
	int x = 0;

	cout << "The value of y is : " << y << endl;
	printf("\n");

	cout << "The value of x is : " << x << endl;
	printf("\n");

	if (y == 0)
	{
		x = 100;
	}

	cout << "The new value of x is : " << x << endl;
	printf("\n");
}

void ConditionalsQuestion2()
{
	int a;
	int b;

	cout << "Enter the first number. " << endl;
	cin >> a;
	printf("\n");

	cout << "Enter the second number" << endl;
	cin >> b;
	printf("\n");

	if (a > b)
	{
		cout << "The first number of " << a << " is larger than the second number of " << b << endl;
		printf("\n");
	}

	if (a < b)
	{
		cout << "The second number of " << b << " is larger than the first number of " << a << endl;
		printf("\n");
	}

	if (a == b)
	{
		cout << "The first number of " << a << " is equal to the second number of " << b << endl;
		printf("\n");
	}
}

void ConditionalsQuestion4()
{
	/*
	if (choice == 1)
	{
	std::cout << "1";
	}

	else if (choice == 2 || choice == 3)
	{
	std::cout << "2 or 3";
	}

	else if (choice == 4)
	{
	std::cout << "4";
	}

	else
	{
	std::cout << "Invalid";
	}
	*/

	int choice;

	cout << "Enter a number one of the following numbers: 0, 1, 2, 3" << endl;
	cin >> choice;
	printf("\n");

	switch (choice)
	{
	case 0:
		cout << "0";
		printf("\n");
		break;

	case 1:
	case 2:
		cout << "1 or 2";
		printf("\n");
		break;

	case 3:
		cout << "3";
		printf("\n");
		break;

	default:
		cout << "Invalid input";
		printf("\n");
	}
}

void ConditionalsQuestion5()
{
	/*
	if (x == 0)
	{
	y = 0;
	}

	else
	{
	y = 10 / x;
	}
	*/

	int x = 0;
	int y;
	float result;

	result = (x == 0) ? 0 : 10 / x;
}

void ConditionalsQuestion6()
{
	float input1 = 0;
	float input2 = 0;
	float output;
	char mathOpr;

	cout << "Enter the first number." << endl;
	cin >> input1;
	printf("\n");

	cout << "Enter the second number." << endl;
	cin >> input2;
	printf("\n");

	cout << "Enter a mathematical operation character." << endl;
	cin >> mathOpr;
	printf("\n");

	switch (mathOpr)
	{
	case '+':
		output = input1 + input2;
		cout << output << endl;
		printf("\n");
		break;

	case '-':
		output = input1 - input2;
		cout << output << endl;
		printf("\n");
		break;

	case '/':
		output = input1 / input2;
		cout << output << endl;
		printf("\n");
		break;

	case '*':
		output = input1 * input2;
		cout << output << endl;
		printf("\n");
		break;

	case '%':
		output = (int)input1 % (int)input2;
		cout << output << endl;
		printf("\n");
		break;

	default:
		cout << "Invalid Operator";
		printf("\n");
	}
}

void ConditionalsQuestion7()
{
	int numMonth = 0;
	int numDays;

	cout << "Enter a month by the number of month is it in the year." << endl;
	cin >> numMonth;

	switch (numMonth)
	{
	case 1:
		numDays = 31;
		cout << "The month chosen" << " (" << numMonth << ") " << "was January." << "It has " << numDays << "days in it." << endl;

	case 2:
		numDays = 28;
		cout << "The month chosen" << " (" << numMonth << ") " << "was Febuary." << "It has " << numDays << "days in it." << endl;

	case 3:
		numDays = 31;
		cout << "The month chosen" << " (" << numMonth << ") " << "was March." << "It has " << numDays << "days in it." << endl;

	case 4:
		numDays = 30;
		cout << "The month chosen" << " (" << numMonth << ") " << "was April." << "It has " << numDays << "days in it." << endl;

	case 5:
		numDays = 31;
		cout << "The month chosen" << " (" << numMonth << ") " << "was May." << "It has " << numDays << "days in it." << endl;

	case 6:
		numDays = 30;
		cout << "The month chosen" << " (" << numMonth << ") " << "was June." << "It has " << numDays << "days in it." << endl;

	case 7:
		numDays = 31;
		cout << "The month chosen" << " (" << numMonth << ") " << "was July." << "It has " << numDays << "days in it." << endl;

	case 8:
		numDays = 31;
		cout << "The month chosen" << " (" << numMonth << ") " << "was August." << "It has " << numDays << "days in it." << endl;

	case 9:
		numDays = 3;
		cout << "The month chosen" << " (" << numMonth << ") " << "was September." << "It has " << numDays << "days in it." << endl;

	case 10:
		numDays = 31;
		cout << "The month chosen" << " (" << numMonth << ") " << "was October." << "It has " << numDays << "days in it." << endl;

	case 11:
		numDays = 30;
		cout << "The month chosen" << " (" << numMonth << ") " << "was November." << "It has " << numDays << "days in it." << endl;

	case 12:
		numDays = 30;
		cout << "The month chosen" << " (" << numMonth << ") " << "was December." << "It has " << numDays << "days in it." << endl;
	}
}

int main()
{
	int input;
	// 1. Write a statement that assigns 100 to x when y is equal to zero.
	cout << "Pick an Example...\n";

	cin >> input;
	while (input != 'q')
	{
		switch (input)
		{
		case 1: ConditionalsQuestion1(); break;
		case 2: ConditionalsQuestion2(); break;
		case 4: ConditionalsQuestion4(); break;
		case 5: ConditionalsQuestion5(); break;
		case 6: ConditionalsQuestion6(); break;
		case 7: ConditionalsQuestion7(); break;
		default: break;
		}
		printf("%c", '\a');
		cout << "Pick an Example... or press q to quit \n";
		cin >> input;
	}
	/*
	ConditonalsQuestion1();

	// 2. Write a program that ask the user for two numbers then display the large number to the console.

	ConditonalsQuestion2();

	// 3. Write a program that accepts and displays 5 numbers in ascending order is the sum of the 5 numbers is postive and in desxceneding order if the sum is negative.
	// if the sum is equal to zero then the program must display the numbers in the same order that they were entered.


	// 4. Convert the following code into a switch statement.

	ConditonalsQuestion4();

	// 5. Convert the following if statement into a ternary operator.

	ConditonalsQuestion5();

	// 6. Write a program that accepts from the user two numbers and a mathematical operation character. Preform the appropriate maths base on which character is input.

	ConditonalsQuestion6();

	// 7. Write a program that accepts an integer that represents the month of the year.
	// it should then display the number of days in that month. If a number that doesn't 
	// correspond to a month is entered the the program should display an error message.

	ConditonalsQuestion7();

	system("pause");
	*/
	return 0;
}