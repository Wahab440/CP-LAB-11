#include<iostream>
using namespace std;
struct
{
	long int hours;
	int mins, sec;
}time1;



int main()

{
	int temp;

	cout << "Enter your time in hours,minutes & seconds: ";
	cin >> time1.hours >> time1.mins >> time1.sec;

	temp = time1.hours * 3600 + time1.mins * 60 + time1.sec;
	cout << "The total time in seconds is: " << temp;
	return 0;
}