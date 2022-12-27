#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate,amount;
	double total=0,I=0,NB=0;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> amount;

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
	NB=loan;
	int i=1;
	while (true)
	{
		if (NB>0)
		{
			cout << fixed << setprecision(2);
			cout << setw(13) << left << i;
			cout << setw(13) << left << loan;
			I=loan*(rate/100);
			cout << setw(13) << left << I;
			total=loan+I;
			cout << setw(13) << left << total;
			NB=total-amount;
			if (NB<0)
			{
				NB=0.00;
				amount=total;
				cout << setw(13) << left << amount;
				cout << NB;
			}
			else{
				cout << setw(13) << left << amount;
				cout << setw(13) << left << NB;
			}
			loan=NB;
			cout << "\n";
		}
		else
		{
			break;
		}
		i++;
	}

	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
		
	
	return 0;
}
