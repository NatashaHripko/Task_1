#include <iostream>
using namespace std;

void data_display()   //������� 1
{
	cout << "Natasha Khrypko" << endl;
	cout << "Sechenova 6-A" << endl;
}

int farlongs_yards(int n)   // ������� 2
{
	return n * 220;
}

void phrase_1()        // ������� 3
{
	cout << "Three blind mice" << endl;
}
 
void phrase_2()     // ������� 3
{
	cout << "See how they run" << endl;
}

int age_in_months(int p)   //������� 4
{
	return p * 12;
}

double celsius_in_fahrenheit(double n)   //������� 5
{
	return 1.8*n + 32;
}

double years_in_units(double p)   //������� 6
{
	return p * 63240;
}

void time(int h, int m)   //������� 7
{
	cout << "Time " << h << ":" << m << endl;
}



int main()
{
	data_display();
	cout << endl;

	cout << "Enter the distance in farlongs" << endl;
	int farlongs;
	cin >> farlongs;
	cout << farlongs << "  farlongs = " << farlongs_yards(farlongs) << "  yards" << endl;
	cout << endl;

	phrase_1();
	phrase_1();
	phrase_2();
	phrase_2();
	cout << endl;

	cout << "Enter your age:  ";
	int age;
	cin >> age;
	cout << "Your sge in months is " << age_in_months(age) << endl;
	cout << endl;

	cout << "Please enter the Celsius value: ";
	double celsius;
	cin >> celsius;
	cout << celsius<< "  degrees Celsius is " <<  celsius_in_fahrenheit(celsius) <<"  degrees Fahrenheit."<<endl;
	cout << endl;

	cout << "Enter the number of light year:  ";
	double l_year;
	cin >> l_year;
	cout << l_year << "  light yeats = " << years_in_units(l_year) << "  astronomical units." << endl;
	cout << endl;

	cout << "Enter the number of hours: ";
	int hours;
	cin >> hours;
	cout << "Enter the number of minutes: ";
	int minutes;
	cin >> minutes;
	time(hours, minutes);


	system("pause");
	return 0;
}
