#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double prevBalance, rate, payPerYear;

    cout << "Enter initial loan: ";
    cin >> prevBalance;
    cout << "Enter interest rate per year (%): ";
    cin >> rate;
    cout << "Enter amount you can pay per year: ";
    cin >> payPerYear;

    cout << setw(13) << left << "EndOfYear#"; 
    cout << setw(13) << left << "PrevBalance"; 
    cout << setw(13) << left << "Interest"; 
    cout << setw(13) << left << "Total";
    cout << setw(13) << left << "Payment";
    cout << setw(13) << left << "NewBalance";
    cout << "\n";
    
    int year = 1;
    cout << fixed << setprecision(2); 

    while(prevBalance > 0){
        double interest = prevBalance * (rate / 100.0);
        double total = prevBalance + interest;
        double payment, newBalance;

        if(total < payPerYear){
            payment = total;
        }else{
            payment = payPerYear;
        }

        newBalance = total - payment;

        cout << setw(13) << left << year; 
        cout << setw(13) << left << prevBalance;
        cout << setw(13) << left << interest;
        cout << setw(13) << left << total;
        cout << setw(13) << left << payment;
        cout << setw(13) << left << newBalance;
        cout << "\n";

        prevBalance = newBalance;
        year++;
    }	
    
    return 0;
}