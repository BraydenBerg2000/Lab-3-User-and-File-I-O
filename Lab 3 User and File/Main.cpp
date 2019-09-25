/* 
Brayden Berg 
C++ Fall 2019
Due: 9/26/19
Lab 3 User and File I/O
We are tasked with creating an interactive C++ program that allows a user to input four numbers that will then be computed by the computer in order to display the mean and 
standard deviation of those four numbers. In addition to those user inputted numbers, there must be an input file named "inMeanStd.dat" that will input four numbers for the
computer to compute them into the mean and standard deviation of those four numbers that will then be displayed on screen using an output file called "outMeanStd.dat".
*/

// these are the libraries that I used for the code
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

// this is where I linked the files to their respective key identifiers
string inputFile = "C:/Users/brayd/OneDrive/Desktop/C++ Projects/Lab 3 User and File/inMeanStd.dat";
string outputFile = "C: / Users / brayd / OneDrive / Desktop / C++ Projects / Lab 3 User and File/outMeanStd.dat";

//these are the numbers from the input file that I set as intigers
int num;
int num2;
int num3;
int num4;

// these are the function prototypes for the user inputted data to produce a mean and standard deviation
float mean(float data, float data2, float data3, float data4);
float strd(float data, float data2, float data3, float data4);

// this holds the main functions
int main()
{
	// these are the streams that I set the files as in order to properly use input and output
	ifstream inFile;
	ofstream outFile; 

	//these functions open the files
	inFile.open(inputFile);
	outFile.open(outputFile);
	
	// this is where I attached the numbers from the input file to their respective identifiers
	inFile >> num >> num2 >> num3 >> num4;
	
	//this is where I assigned the user inputted numbers to their respective identifiers
	float data;
	float data2;
	float data3; 
	float data4;
	
	//this allows the user to input their desired numbers 
	cin >> data >> data2 >> data3 >> data4;
	
	//these functions output both user and computer inputted data
	cout << "Your mean is: " << mean(data, data2, data3, data4) << endl;
	cout << "Your standard deviation is: "<< strd(data, data2, data3, data4) << endl;
	cout << "The computer's mean is: " << mean(num,num2,num3,num4) << endl;
	cout << "The computer's standard deviation is:" << strd(num,num2,num3,num4) << endl;
	
	//these close the input and output files
	inFile.close();
	outFile.close();
	
	//this ends the main function
	return 0;
}

//this function inputs the user and computer's numbers into a mean equation
float mean(float data, float data2, float data3, float data4)
{
	return ((data + data2 + data3 + data4) / 4);
}

//this function inputs the user and computer's numbers into a standard deviation equation
float strd(float data, float data2, float data3, float data4)
{
	
	return (sqrt(((pow((data - (((data)+(data2)+(data3)+(data4)) / 4)),2))+ pow((data2 - ((((data)+(data2)+(data3)+(data4)) / 4))),2)+ pow((data3-((((data)+(data2)+(data3)+(data4)) / 4))),2)+ pow((data4) - (((data)+(data2)+(data3)+(data4))/4), 2)) / 4));
}