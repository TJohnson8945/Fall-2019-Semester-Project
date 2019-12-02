# Fall 2019 Semester Project
This semester long project was assigned in my CS231 class, and was intended to test our abilities in utilizing a myriad of different c++ structures, functions, classes, etc..

## Getting Started
This program was created utilizing Visual Studio 2019, and runs in the command prompt.

## Explaining the Program
The program starts with the include statemtents that give access to the different libraries utilized in the project.

Then the variables used in the second and third page are initialized globally. This was mainly due to me not being confident on reference variables enough to implement.

### Running the program

#### First Page
The first page function is then written in using the string function. This allows c++ to return a string type to the main function.

#### Second Page
The second page function is then written. Within the second page function, the user must input their "Student Number" so the program can open the related file from the directory. Then the inputFile variable input by the user, gets a .txt added to the end so the program knows what file to open.

Then the file is opened, and the program parses through it and assigns the data to the variables.

Arrays are established for the courses, course hours, and the course section. As well as a for loop to allow the arrays to be populated with user input.

The program then outputs the page and the information from the input file.

Finally, the second page ends with cin.ignore(); which allows it to stay on the second page until enter is pressed.

#### Third Page
The third page starts with initializing the total variable which is used to add up the course hours. 

Followed by creating an output file that will be a carbon copy of the third page.

The third page is displayed utilizing information input from the second page, with a for loop calculating the total course hours.

Then the output file is established and created.

#### Repeat Page
This function allows the program to accept user input to determine if they are happy with their schedule, and if not, the program will restart at the beginning of the second page. The switch statement at the end accepts four different inputs in order for the program to decide what to do.

#### INT MAIN
Everything comes together in int main for the program to actually run. I was unable to get the program to run correctly with just the repeat page function, so this function also contains the same contents as the repeatPage function.


## Purpose
This semester long project was intended to test the knowledge we acquired over the semester and see if we were capable of applying that knowledge to create a basic schedule simulator. While the program is not anything special, I was proud when I was able to get it to run and display properly the first time.
