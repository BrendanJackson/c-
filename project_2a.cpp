//Program Name: Programming project #2 Geometry-Calculator Using Branching 
//Author: Brendan Jackson
//Date Released: 07/26/2015
//Description: Program calculates the Area and Circumference of a Circle, Area and Perimeter of a Rectangle, and the Area and Perimeter of a Triangle
#include <iostream> // allow cout & cin
#include <cmath> // allows sqrt(square root)
#include <iomanip> //allows setprecision
using namespace std; // Namespace std allows program to use entities from <iostream>
	
	int main() // Main function
{
	
	int choice ; // menu choice (input)
	
	//circle variables
	const double pi = 3.1459 ; // (output)keeps pi constant 
	double radius ;	// (input) stores circles radius 
	double circle_area ; // (output)stores circle area 
	double circle_circumference ; // (output) stores circle circumference 
		
	//rectangle variables
	double rectangle_length ; // (input) stores rectangle length
	double rectangle_width ; // (input) stores rectangle width
	double rectangle_area ; //(output) displays output area after calculation
	double rectangle_perimeter ; //(output) displays output perimeter after calculation
	
	//triangle variables
	double area_triangle ; // (output) displays output area after calculation
	double perimeter_triangle ; // (output) displays output perimeter after calculation
	double triangle_base ; // (input) stores triangle base
	double triangle_height ; //(input) stores triangle height
	double intersection_point ; // (input) stores triangle intersection point

	//menu choice constants
	const int circle_choice = 1 , // (input) stores users circle menu selection
		  rectangle_choice = 2 , // (input) stores users rectangle menu selection
		  triangle_choice = 3 , // (input) stores users triangle menu selection
		  quit_choice = 4 ; // (input) stores users quit menu selection


	
		// "option 1: circle"
	        // "option 2: rectangle"
	 	// "option 3: triangle"
	 	// "option 4: quit"


	//displays menu choices
	cout	<< "1.Calculate the Area and Circumference of a Circle\n"  
  		<< "2.Calculate the Area and Perimeter of a Rectangle\n" 
		<< "3.Calculate the Area and Perimeter of a Triangle\n" 
		<< "4.Quit\n\n" 
		<< "Enter your choice (1-4)\n" ;
	cin	>> choice ;


	//option 1: what is the radius of the circle? 
	// area :pi*(radius*radius) and circumference: 2*pi*radius
	
	//circle menu selection
	if	 (choice == circle_choice)
	{
		//Asks user for radius, user inputs 
		cout    << "What is the circles radius?\t" ;
		cin     >> radius ;
		 
  		 //Calculates circles area and circumference
		 circle_area = pi*(radius*radius) ;
		 circle_circumference = 2*pi*radius ;
		
		//Displays calculation
		cout    << "The Area of the circle is\t" << circle_area << endl ;
		cout	<< "The circumference of the circle is\t" << setprecision(4) << circle_circumference << endl ;
	}
	
	//rectangle menu selection
		else if (choice == rectangle_choice)
			{
			//asks user for rectangles length and width, user inputs 
			cout   << "What is the rectangles length?\t" ; 
			cin    >> rectangle_length ;
			cout   << "What is the rectangles width?\t" ;
			cin    >> rectangle_width ;
			
			 //Calculates area and perimeter
			 rectangle_area = rectangle_length*rectangle_width ;
			 rectangle_perimeter = 2*(rectangle_length+rectangle_width);
			
			//Displays calculation
			cout   << "The rectangles area is\t" << setprecision(4) << showpoint << fixed << rectangle_area << endl ;
		        cout   << "The rectangles perimeter is\t" << setprecision(4) << showpoint << fixed << rectangle_perimeter << endl ;
			
			}

	//triangle menu selection
		else if (choice == triangle_choice)	
			{

			//asks user for triangles base, height, and intersection point, user inputs 		
			cout   << "What is the triagles base?\t" ;
			cin    >> triangle_base ;
			cout   << "What is triangles height?\t" ;
			cin    >> triangle_height ;
			cout   << "What is triagles intesection point?\t" ;
			cin    >> intersection_point ;
			 
			 //Calculates area and perimeter
			 area_triangle = triangle_base*triangle_height/2 ;
			 perimeter_triangle = triangle_base + sqrt((intersection_point*intersection_point)+                                      			         (triangle_height+triangle_height))+sqrt((triangle_height*triangle_height)) ;			

			//Displays calculation
			cout   << "Triangles area is\t" <<  area_triangle << endl ; 
			cout   << "The triangles perimeter is\t" << setprecision(4) << perimeter_triangle << endl ;
			}

	//quit menu selection
		else if (choice == quit_choice)
			{

			cout << "Bye.\n";
		
			}

	//other menu selection if user selects anything other than 1-4 including letters or symbols this message is displayed
		else
			
			{
			cout << "The valid choices are 1 through 4.\n";
			cout << "Run the program again and select one of those\n";	
			}




	return 0 ;	
}


