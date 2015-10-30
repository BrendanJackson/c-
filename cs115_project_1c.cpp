// <Program Name> Programming Project #1: Arithmatic Expressions in C++
// <Author> Brendan Jackson
// <Date of Programs Release> 07/17/2015
// <Program Description> Allows user to enter 5 customer data sets for an Interest Calculation

#include <iostream> //allows cin & cout
#include <iomanip> //this is setw()
#include <math.h>  //this is pow()
 
using namespace std; // Namespace std allows program to use entities from <iostream>

	int main() // Main function

{
// 	<Variables> 
	const int fill = 20 ; // Easy spacing, data stored in variable setw() allows consistent spacing
			// '20' is the variable 'fill' literal value

// Data input sets for 5 indivual customers

//	 set1
	string customer_name1; //  stores Customers #1's Name
	int account_number1;  // stores Customers #1's Account Number
	double principal1 ; // stores Customers #1's Principal(Original Balance)
	double interest_rate1 ; // stores Customers #1's Interest Rate
	int times1 ; // stores Customers #1's times their Interest rate is Compounded Annually
	double calculationpt1	;
	double interest1; 
	double amount1 ;


	


// 	<Program Users Prompts>
	cout << "Type customer #1's Name.\n" ; // requests Customers #1's Name
	getline (cin, customer_name1) ;  // Gets Customers #1's Name
	cout << "Type customer #1's Account Number.\n"; // requests Customers #1's Account Number
	cin  >> account_number1  ;  // Gets Customers #1's Account Number
	cout << "Type customer #1's Principal.\n" ; // requests Customers #1's Principal
	cin  >> principal1 ; // Gets Customers #1's Principal
	cout << "Type customer #1's Interest Rate in decimal form.\n" ; // requests Customers #1's Interest Rate
	cin  >> interest_rate1 ; // Gets Customers #1's Interest Rate
	cout << "Type the amount of Times customer #1's  Interest Rate was compounded.\n";// requests Customers #1's Compounded Interest Rate Times
	cin  >> times1 ; // Gets Customers #1's Compounded Interest Rate Times

	calculationpt1 = 1 + interest_rate1 / times1 ;	

	interest1 = pow(calculationpt1, times1);

	amount1 = principal1 * interest1 ;

// 	<Programs Table> Organizes User info neatly under proper categories 

	cout << setw(fill) << ""
     	     << setw(fill) << "Account" 
     	     << setw(fill) << "" 
             << setw(fill) << "Interest"
             << setw(fill) << ""  
             << setw(fill) << ""
             << setw(fill) << "" 
             << endl ;


	cout << setw(fill) << "Customer Name" 
             << setw(fill) << "number" 
             << setw(fill) << "Principal" 
             << setw(fill) << "Rate"
             << setw(fill) << "Times"  
             << setw(fill) << "Interest"
             << setw(fill) << "Amount" 
             << endl ;


	cout << setw(fill) << "-------------" 
             << setw(fill) << "------" 
             << setw(fill) << "---------" 
             << setw(fill) << "----"
             << setw(fill) << "-----"  
             << setw(fill) << "--------"
             << setw(fill) << "------" 
             << endl ;
//	</Progam Table>



//	<User Input Table> This sets the spacing of the users input gathered from the "<Progam Users Prompts>"
//	 		    and alligns it under the "<Program Table>".
//		           Also displays decimal amounts and calculates Interest Rate
//	1st line:Calculates customer #1's Compounded Interest Rate, factors in pricipal and displays all data in an organized manner.
	cout << setw(fill) << customer_name1	 
             << setw(fill) << account_number1
             << setw(fill) << setprecision(2) << fixed << showpoint << principal1
             << setw(fill) << setprecision(6) << interest_rate1
             << setw(fill) << times1
             << setw(fill) << setprecision(6) << interest1
             << setw(fill) << setprecision(2) << fixed 
	     << amount1	
             << endl ;


// principal * (1 + rate / times )pow(times) = __(amount)
// get values >> Calculate values >> 


// Final notes
//
// Float Values can and more often than not will ruin calculations with money 
// integer conversion w/ pennies http://stackoverflow.com/questions/3730019/why-not-use-double-or-float-to-represent-currency
// 
// Problems with Interest Rate and Final Balance potentially off by 0.0X$ example: 0.005 rounds to 0.00 not 0.01
//
// Original calculation test
// test for calculation accuracy
//	customer_name = // ;
//	account# = 1 ; //
//	principal = 100 ; //
//	interest_rate = .01 ; //
//	times = 12 ; //

	return 0;
}
