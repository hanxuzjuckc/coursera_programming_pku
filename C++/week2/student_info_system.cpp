#include <iostream>
#include <cstring>
using namespace std;

class Student
{
private:
	char stdName[100];     // Student name. Assume Student name cannot exceed 100 characters
	int stdAge;            // Student age
	char stdID[30];        // Student ID. Assume Student ID cannot exceed 30 characters
	int stdGrade[4];       // Student Grades from 1st to 4th year.
public:
	// Constructor
	Student(char _stdName[], int _stdAge, char _stdID[], int _stdGrade[])
	{
		strcpy(stdName, _stdName);
		stdAge = _stdAge;
		strcpy(stdID, _stdID);
		for (int i = 0; i < 4; i++) 
		{
			stdGrade[i] = _stdGrade[i];
		}
	}
	// Calculate and return Average Grade
	int calAverage()
	{
		return (stdGrade[0] + stdGrade[1] + stdGrade[2] + stdGrade[3])/4;
	}

	// return stdName
	char* getName()
	{
		return stdName;
	}

	// return stdAge
	int getAge()
	{
		return stdAge;
	}

	// return stdID
	char* getID()
	{
		return stdID;
	}
};

int main()
{
	char Name[100];
	int Age;
	char ID[30];
	int Grade[4];

	char mark;          // represent ',' during cin

	cin.getline(Name, 100, ',');
	cin >> Age >> mark;
	cin.getline(ID, 30, ',');
	cin >> Grade[0] >> mark >> Grade[1] >> mark >> Grade[2] >> mark >> Grade[3];

	Student std(Name, Age, ID, Grade);
	cout << std.getName() << ',' << std.getAge() << ',' << std.getID() << ',' << std.calAverage() << endl;
	return 0;
}