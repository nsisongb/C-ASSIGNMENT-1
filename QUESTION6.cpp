/*
*	Question6.cpp
*
*	Name:				[BASSEY, NSISONG OTO ]
*	Department:			[STATISTICS]
*	Matric./Reg. No:	[47270021FH]
*	
*	Create a Body Mass Index (BMI) calculator application that reads
*	the user’s weight in kilograms and height in meters, calculate and
*	display the user’s body mass index.
*	
*/

#include <iostream>

int main ()
{
	int e;
	float i,BMI;
	
	std::cout << "Welcome!!!\n\n";
	std::cout << "This program creates a Body Mass Index (BMI) calculator application that\n";
	std::cout << "reads the user's weight in kilograms and height in meters.\n\n";
	
	std::cout << "Please enter your Weight(kg): ";
	std::cin >> e;
	
	std::cout << "Please enter your Height(m): ";
	std::cin >> i;
	
	BMI = e/(i*i);
	std::cout << "Your Body Mass Index is: " << BMI;
	
	if (BMI > 25 && BMI < 29.9)
	std::cout << "\nThis User is Overweight";
	
	if (BMI >= 30)
	std::cout << "\nYou are Obessed\n";
	
	if (BMI < 18.5)
	std::cout << "\nThis User is Underwieght";
	
	if (BMI > 18.5 && BMI < 24.9)
	std::cout << "\nThis User is in a normal weight range.";

	return 0; 
}
