//******************************************************************************
// G.T. BALLESTEROS
// 05-12-22
//
// GRADE CALCULATOR
//******************************************************************************

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

int main()
{
	//Declaring variables
	std::string studentsName;
	std::string subjectName;
	int totalSubjects;
	int counter;
	int unitperSubj, totalUnits;
	double gradeperSubj, totalgradeperSubj, totalaverageGrade;
	char listerChoice;

	std::cout << std::fixed << std::showpoint << std::setprecision(2);

	//Header of the Calculator and the inputs
	std::cout << "---------------------------GRADE CALCULATOR---------------------------" << '\n';
	std::cout << "Student\'s Name: ";
	std::getline(std::cin, studentsName);
	std::cout << "----------------------------------------------------------------------" << '\n';
	std::cout << "Enter the number of Subjects: ";
	std::cin >> totalSubjects;
	std::cout << "----------------------------------------------------------------------" << '\n';
	std::cout << "FORMAT: Subjectname Units(int) Grade(double)" << '\n';
	std::cout << std::endl;

	totalUnits = 0;
	totalgradeperSubj = 0;
	counter = 0;

	//Loop statement
	while (counter < totalSubjects)
	{
		std::cout << "Enter the subject name, units and grade:" << '\n';
		std::cout << ">> ";
		std::cin >> subjectName >> unitperSubj >> gradeperSubj;
		totalUnits = totalUnits + unitperSubj;
		totalgradeperSubj = totalgradeperSubj + gradeperSubj;

		counter++;
	} //End of the loop statement

	//Pause program
	std::cout << std::endl;
	system("pause");

	std::cout << "----------------------------------------------------------------------" << '\n';
	std::cout << "Total number of units: " << totalUnits << '\n';

	//Formula to get the Average
	totalaverageGrade = totalgradeperSubj / counter;

	std::cout << "Average Grade: " << totalaverageGrade << '\n';
	std::cout << "----------------------------------------------------------------------" << '\n';
	std::cout << "Do you want to know your lister? (y/n): ";
	std::cin >> listerChoice;

	//Switch statement for the lister
	switch (listerChoice)
	{
	case 'Y':
	case 'y':
		if (totalaverageGrade >= 97 && totalaverageGrade <= 100) 
			std::cout << "Congratulations " << studentsName << "!, you are in the Chairman\'s Lister." << '\n';
		else if (totalaverageGrade >= 94 && totalaverageGrade <= 96.99) 
			std::cout << "Congratulations " << studentsName << "!, you are in the President\'s Lister." << '\n';
		else if (totalaverageGrade >= 91 && totalaverageGrade <= 93.99)
			std::cout << "Congratulations " << studentsName << "!, you are in the Dean\'s Lister." << '\n';
		else
			std::cout << "Sorry " << studentsName << ", below the requirement.";
		std::cout << std::endl;
		std::cout << "----------------------------------------------------------------------" << '\n';
		break;

	case 'N':
	case 'n':
		std::cout << "Okay, Goodluck " << studentsName << "!";
		std::cout << std::endl;
		std::cout << "----------------------------------------------------------------------" << '\n';
		break;
	} //End of the switch statement

	return 0;
}




