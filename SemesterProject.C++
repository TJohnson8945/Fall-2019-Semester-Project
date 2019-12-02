#include <iostream>
#include <iomanip> 
#include <string>
#include <fstream>
using namespace std;

//Establish Variables utilized in second and third page
string courses[6];
int crs_hours[6];
string crs_section[6];
string stu_number;
string lastName;
string firstName;
string major1;
string major2;
string major3;
string major4;
string major5;




string & firstpage(string & n)
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
	ifstream stuInfo;
	string inputFile;

	//request user input for file name
	cout << "Enter your student number: ";
	cin >> inputFile;
	inputFile += ".txt";

	//open file
	stuInfo.open(inputFile.c_str());

	stuInfo >> firstName >> lastName >> stu_number >> major1 >> major2 >> major3 >> major4 >> major5;

	// Allows the arrays to be populated with keyboard input
	for (int i = 0; i < 6; i++)
	{
		cout << "What is the course you want to take: ";
		cin >> courses[i];
	}
	for (int i = 0; i < 6; i++)
	{
		cout << "How many course hours is " << courses[i] << ": ";
		cin >> crs_hours[i];
	}
	for (int i = 0; i < 6; i++)
	{
		cout << "What is the section of " << courses[i] << " you would like to take: ";
		cin >> crs_section[i];
	}

	cout << "\n";
	cout << "\n";
	cout << "\n";
	
	cout << setw(10) <<"  ______________________________________ Course Enrollment Simulation _____________________________________________ \n";
	cout << "\n";
	cout << setw(10) <<"                                             JSU Schedule Simulator                                             \n";
	cout << "\n";
	cout << "\n";
	cout << "        Student Number: " << stu_number << setw(30) << "Student's Last Name: " << lastName << setw(30) << "Student's First Name: " << firstName << "\n";
	cout << "\n";
	cout << setw(10) << "Courses: " << setw(20) << "Course Hours: " << setw(20) << "Course Section: " << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << setw(15) << courses[i] << setw(15) << crs_hours[i] << setw(25) << crs_section[i] << "\n";
	}
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << setw(10) << "      Press Enter to continue. . . . \n";
	cout << "\n";
	cout << "\n";
	cout << setw(10) << "  _________________________________________________________________________________________________________________ \n";
	cout << setw(10) << "  _________________________________________________________________________________________________________________ \n";
	cin.ignore();

}

void thirdpage()
{
	int total = 0;
	ofstream Schedule;
	Schedule.open("2019 Schedule.txt");
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << setw(10) << "  ________________________________________ Course Enrollment Simulation ___________________________________________ \n";
	cout << "\n";
	cout << "                                          Jacksonville State University                                               \n";
	cout << "                                                Fall Semester 2019                                                    \n";
	cout << "                                                  Class Schedule                                                      \n";
	cout << "\n";
	cout << "        Advisor: Dr. Robert Elliott Sr PhD";
	cout << "\n";
	cout << "\n";
	cout << "        Student Number: " << stu_number << setw(30) << "Student Name: " << firstName << " " << lastName << setw(30) << "\n" << "\n" <<
		    "        Major: " << major1 << " " << major2 << " " << major3 << " " << major4 << " " << major5;
	cout << "\n";
	cout << "\n";
	cout << "        CRS 1: " << courses[0] << " " << crs_section[0] << setw(45) << "CRS 2: " << courses[1] << " " << crs_section[1] << "\n";
	cout << "\n";
	cout << "        CRS 3: " << courses[2] << " " << crs_section[2] << setw(45) << "CRS 4: " << courses[3] << " " << crs_section[3] << "\n";
	cout << "\n";
	cout << "        CRS 5: " << courses[4] << " " << crs_section[4] << setw(45) << "CRS 6: " << courses[5] << " " << crs_section[5] << "\n";
	cout << "\n";
	cout << "\n";
	for (int i = 0; i < 6; i++)
	{
		total += crs_hours[i];
	}
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "                                               Total Hours: " << total;
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << setw(10) << "  ________________________________________ Course Enrollment Simulation ___________________________________________ \n";

	//Creates an output file with the schedule printed on it
	Schedule
		<< setw(10) << "  ________________________________________ Course Enrollment Simulation ___________________________________________ \n"
		"\n"
		"                                          Jacksonville State University                                               \n"
		"                                                Fall Semester 2019                                                    \n"
		"                                                  Class Schedule                                                      \n"
		"\n"
		"        Advisor: Dr. Robert Elliott Sr PhD"
		"\n"
		"\n"
		"        Student Number: " << stu_number << setw(30) << "Student Name: " << firstName << " " << lastName << setw(30) << "\n" << "\n" <<
		"        Major: " << major1 << " " << major2 << " " << major3 << " " << major4 << " " << major5
		<< "\n"
		"\n"
		"        CRS 1: " << courses[0] << " " << crs_section[0] << setw(45) << "CRS 2: " << courses[1] << " " << crs_section[1] << "\n"
		"\n"
		"        CRS 3: " << courses[2] << " " << crs_section[2] << setw(45) << "CRS 4: " << courses[3] << " " << crs_section[3] << "\n"
		"\n"
		"        CRS 5: " << courses[4] << " " << crs_section[4] << setw(45) << "CRS 6: " << courses[5] << " " << crs_section[5] << "\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"                                               Total Hours: " << total;
		"\n"
		"\n"
		"\n"
		"\n";
}

//repeatPage restarts the program starting with the inputs for the second page
void repeatPage()
{
	bool openPage = false;
	char acceptance;

	if (cin.get() == '\n')
	{
		//Requires the input of the Enter key to open the second page //
		do
		{
			secondpage();
			if (cin.get() == '\n')
			{
				//Requires the input of the Enter key to open the third page //

				openPage = false;
			}
		} while (openPage);
		{
			thirdpage();
		}
	}
	
	cout << "Are you happy with your schedule? Y/N: ";
	cin >> acceptance;
	switch (acceptance)
	{
	case 'Y': break;
	case 'N': repeatPage();
			  break;
	case 'y': break;
	case 'n': repeatPage();
			  break;
	default:  cout << "Invalid input";
	}
	
	
}

int main()
{
	bool openPage = false;
	char acceptance;

	//Displays the first page //
	string open = "";
	cout << "" << firstpage(open) << endl;

	void repeatPage();
	{
		if (cin.get() == '\n')
		{
			//Requires the input of the Enter key to open the second page //
			do
			{
				secondpage();

				if (cin.get() == '\n')
				{
					//Requires the input of the Enter key to open the third page //

					openPage = false;
				}
			} while (openPage);
			{
				thirdpage();
			}
		}
	}

	cout << "\n";
	cout << "Are you happy with your schedule? Y/N: ";
	cin >> acceptance;
	switch (acceptance)
	{
		case 'Y': break;
		case 'N': repeatPage();
				  break;
		case 'y': break;
		case 'n': repeatPage();
				  break;
		default:  cout << "Invalid input";
	}
}
