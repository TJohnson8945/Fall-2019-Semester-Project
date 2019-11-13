#include <iostream>
#include <iomanip> 
#include <string>
using namespace std;

std::string & firstpage(std::string & n)
{
	//First page of semester project //

	//n.clear clears the variable and prepares it for the string//
	n.clear();
	n = "  __________________________________________________________________________________________________________________  \n"
		"  __________________________________________________________________________________________________________________  \n"
		" \n"
		" \n"
		" \n"
		" \n"
		" \n"
		" \n"
		"                                                Jacksonville State University                                         \n"
		"                                                            CS231                                                     \n"
		"                                                          Fall 2019                                                   \n"
		"                                                        Tyler Johnson                                                 \n"
		" \n"
		" \n"
		" \n"
		" \n"
		" \n"
		" \n"
		" \n"
		"  __________________________________________________________________________________________________________________  \n"
		"  __________________________________________________________________________________________________________________  \n"
		" \n"
		" \n"
		"                                                     JSU Schedule Simulator                                           \n"
		" \n"
		"                                                      Press Enter key . . .                                             "
		"  __________________________________________________________________________________________________________________  \n"
		"  __________________________________________________________________________________________________________________  \n";
	return n;
}

void secondpage()
{
	//Establishing variables and array utilized to form the second page //
	string stu_number;
	string lastName;
	string firstName;
	string courses[6];
	int crs_hours[6];
	int crs_number[6];
	
	cout << "Please Enter the Following information: \n";
	cout << "Student Number: ";
	cin >> stu_number;
	cout << "Student's Last Name: ";
	cin >> lastName;
	cout << "Student's First Name: ";
	cin >> firstName;

	// Allows the courses array to be populated
	for (int i = 0; i < 6; i++)
	{
		cout << "Input the courses you desire to take: ";
		cin >> courses[i];
		
	}
	for (int i = 0; i < 6; i++)
	{
		cout << "How many course hours is: " << courses[i];
		cin >> crs_hours;
	}
	for (int i = 0; i < 6; i++)
	{
		cout << "What is the course number for: " << courses[i];
		cin >> crs_number[i];	
	}
	cout << "\n";
	cout << "\n";
	
	cout << setw(10) <<"  _____________________________________________________________________________________________________________ \n";
	cout << "\n";
	cout << setw(10) <<"                                             JSU Schedule Simulator                                             \n";
	cout << "\n";
	cout << "\n";
	cout << "        Student Number: " << stu_number << setw(30) << "Student's Last Name: " << lastName << setw(30) << "Student's First Name: " << firstName << "\n";
	cout << "\n";
	cout << setw(10) << "Courses: " << "\n";
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			for (int k = 0; k < 1; k++)
			{
				cout << courses[i] << setw(5) << courses[j] << setw(5) << courses[k] << "\n";
			}
		}
	}
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
}



int main()
{
	using namespace std;
	//Displays the first page //
	string open = "";
	std::cout << "" << firstpage(open) << endl;

	if (cin.get() == '\n')
	{
		//Requires the input of the Enter key to open the second page //
		secondpage();
	}

}
