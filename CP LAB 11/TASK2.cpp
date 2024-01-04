#include<iostream>
using namespace std;

struct Phone
{

	int areacode;
	int exchange;
	int number;

};

int main()
{

	Phone p1 = { 212,767,8900 };
	Phone p2;
	cout << "Enter your area code, exchange and number: ";
	cin >> p2.areacode >> p2.exchange >> p2.number;
	cout << "My Number is " << "(" << p1.areacode << ")" << " " << p1.exchange << "-" << p1.number;
	cout << "\nYour Number is " << "(" << p2.areacode << ")" << " " << p2.exchange << "-" << p2.number;
	return 0;
}