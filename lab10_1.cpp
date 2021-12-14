#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double capital,interest,rebate,total,newbalamnce,perinterest;
	cout << "Enter initial loan: ";
	cin>>capital;
	cout << "Enter interest rate per year (%): ";
	cin>>perinterest;
	cout << "Enter amount you can pay per year: ";

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cin>>rebate;
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << 1; 
	cout << setw(13) << left << 1000.0;
	cout << setw(13) << left << 50.0;
	cout << setw(13) << left << 1050.0;
	cout << setw(13) << left << 100.0;
	cout << setw(13) << left << 950.0;
	cout << "\n";	


	for(int i = 1;true;i++){
		if(capital>rebate){	
			cout << fixed << setprecision(2);
			cout << setw(13) << left << i; 
			cout << setw(13) << left << capital;
			interest=capital*(perinterest/100);
			cout << setw(13) << left << interest;
			total=interest+capital;
			cout << setw(13) << left << total;
			cout << setw(13) << left << rebate;
			newbalamnce= total- rebate;
			cout << setw(13) << left << newbalamnce;
			cout << "\n";
			capital=newbalamnce;
				if(newbalamnce<rebate){
				cout << fixed << setprecision(2);
				cout << setw(13) << left << i+1; 
				cout << setw(13) << left << capital;
				interest=capital*(perinterest/100);
				cout << setw(13) << left << interest;
				newbalamnce=interest+capital;
				cout << setw(13) << left << newbalamnce;
				cout << setw(13) << left << newbalamnce;
				cout << setw(13) << left << newbalamnce-newbalamnce;
				cout << "\n";
				break;}
		}else {
		cout << fixed << setprecision(2);
				cout << setw(13) << left << 1; 
				cout << setw(13) << left << capital;
				interest=capital*(perinterest/100);
				cout << setw(13) << left << interest;
				total=interest+capital;
				cout << setw(13) << left << total;
				cout << setw(13) << left << total;
				cout << setw(13) << left << total-total;
				cout << "\n";
				break;}
	}
	return 0;
}