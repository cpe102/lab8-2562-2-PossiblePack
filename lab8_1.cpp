#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	float loan, rate, pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	int count=1;
	float interest, total, payment, latest;
	while(loan>=pay){
		interest = loan*rate/100;
		total = loan+interest;
		latest = total-pay;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << count; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << latest;
	cout << "\n";
		loan = latest;
		count++;
	}
		interest = loan*rate/100;
		total = loan+interest;
		latest = 0;
		pay = total;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << count; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << latest;
	cout << "\n";
	

	
	
	return 0;
}
