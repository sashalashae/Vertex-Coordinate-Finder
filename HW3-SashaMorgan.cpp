/**
* @file <HW3-SashaMorgan>
* <This program allows users to input data into the system which returns the output of the answer for the quadratic formula and vertex coordinates.
*
* @author <Sasha Morgan, sasha97>
* @date   <September 13, 2015>
*
* Virginia Tech Honor Code Pledge
* On my honor:
*
* - I have not discussed the C++ language code in my program with
* anyone other than my instructor or the teaching assistants
* assigned to this course.
* - I have not used C++ language code obtained from another student,
* or any other unauthorized source, either modified or unmodified.
* - If any C++ language code or documentation used in my program
* was obtained from another source, such as a text book of coarse
* notes, that has been clearly noted with a proper citation in
* the comments of my program.
* - I have not designed this program in such a way as to defeat or
* interfere with the normal operation of the Web-Cat Server.
*
* <Sasha Morgan>
*/
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;


int main()
{
	double a; //declaring integer a
	double b; //declaring integer b
	double c; //declaring integer c

	//These lines of code allow the users to declare their values for a,b,and c
	cout << "Please enter a, b and c: ";
	cin >> a >> b >> c;

	//These lines of code use the quadratic equation to find the values for Root1 and Root2
	double Root1 = (-b + sqrt(b*b - 4 * a*c))/(2 * a);
	double Root2 = (-b - sqrt(b*b - 4 * a*c))/(2 * a);
	
	//These lines of code set the output values of Root1 and Root2 to two decimal places
	cout << fixed << showpoint;
	cout << setprecision(2) << "Root1: " << Root1 << endl;
	cout << setprecision(2) << "Root2: " << Root2 << endl;

	//These lines of code find compute the output of the vertical and horizantal line of the vertex
	double x = (-b)/(2*a);
	double y = a*x*x + b*x + c;

	//This line of code displays the vertex coordinates
	cout << "Vertex Coordinates (x, y): " << "(" << x <<", " << y <<")"<< endl;
	

	return 0;
}