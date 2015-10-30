// <Program Name> Programming Project #3 Average Income (Using Functions and Arrays)
// <Author> Brendan Jackson
// <Date of Programs Release> 08/05/15
// <Program Description> takes 3 arrays and displays them with average income
#include <iostream> // allows cin and cout statements
#include <iomanip> //allows setprecision
#include <string> //allows strings
using namespace std; // Namespace std allows program to use entities from <iostream>

int input(string[], int[], double[]); //function 1
double calculate_average_income(double[], int);  //function 2
void display_survey_data(string[], int[], double[],int , double);  //function 3


int main() // main function
{

	//variables for functions
	string name[10];
	
	int members[10];
	
	double income[10];
	
	int count_of_households;
	
	double average;
	
	//get input
	count_of_households = input(name, members, income);
	
	//calculate average
	average = calculate_average_income(income, count_of_households);
	
	
	//output all data in table
	display_survey_data(name, members, income, count_of_households, average);
	
	
	return 0;
			
}


int input(string name[], int members[], double income[]) //function 1
{

	// get household info
	int count_of_households = 0;
	
	cout << "How many house holds were there? ";
	cin >> count_of_households;
	//TODO: handle bad input (characters and decimals)
	if (count_of_households >= 11 || count_of_households < 0) 
	{
		cout << "must enter valid # " ; //TODO: more description
		count_of_households = 0; //set back to safe value
	}
	else 
	{
	
	       //cycle through arrays                  
		for (int count = 0; count < count_of_households; count++) //TODO:  take out (count + 1) start from 1 alternatively
		{

			// get survey info for names
			cout << "Enter household #" << (count + 1) << "'s head of household name\t"  ;
			cin.ignore() ; // ignores keyboard buffer characters
			getline (cin, name[count]) ; 

			
			// get survey info for income
			cout << "Enter household #" << (count + 1) << "'s annual income\t"  ;
			cin >> 	income[count];
		
			
			// get survey info for members
			cout << "Enter household #" << (count + 1) << "'s household members\t"  ;	
			cin >>  members[count]; 
		}	
	}
	return count_of_households;
}

double calculate_average_income(double income[], int count_of_households) //function 2
{
	
	
	//add incomes together
	double total = 0.0;
	double average = 0.0;

	//loop over income
	for (int count = 0 ; count < count_of_households; count++)
	{
		//add income to runnning total
		total += income[count];  
	}

	// save calculations
	average = total / count_of_households; 
	return average;
}




void display_survey_data(string name[], int members[], double income[],int count_of_households, double average) //funtion 3
{
	//print out header
	cout << setw(30) << ""
	     << setw(30) << ""
	     << setw(30) << "NUMBER OF\n" ;
	cout << setw(30) << "HOUSEHOLD NAME"
	     << setw(30) << "ANNUAL INCOME"
	     << setw(30) << "HOUSEHOLD MEMBERS\n" ;
	cout << setw(30) << "--------------------" 
	     << setw(30) << "---------------" 
	     << setw(30) << "------------------------\n" ;		
	///loop over values
	for (int count = 0 ; count < count_of_households; count++)
	{
		cout << setw(30) << name[count]
		     << setw(30) << setprecision(2) << fixed << showpoint << income[count]
		     << setw(30) << members[count] 
		     << endl;	
	}	
	// display average
	cout << endl
	     << setw(30) << "AVERAGE INCOME"
	     << setw(30) << average
	     << endl;
}
	
