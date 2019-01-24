//Starfleet application
//Jeffrey C. Slocum

#include <iostream>
using namespace std;

int main ()
{

	string name;
	int age;
	float gpa;
	int sat;
	string race;

	int ageDiff;
	float gpaDiff;
	int satDiff;


	cout << endl << "**\\\\--STARFLEET ACADEMY APPLICATION PROCESS--//**" << endl << endl << endl;

	cout << "What is your first name? ";
	cin  >> name;
	cout << "What is your age? ";
	cin >> age;
	cout << "What is your gpa? ";
	cin >> gpa;
	cout << "What is your sat score? ";
	cin >> sat;
	cout << "What is your race? ";
	cin >> race;
	cout << endl;


	//test to make sure they're not romulan
	if (race == "Romulan" || race == "romulan")
	{
		cout << "Sorry, Starfleet does not accepct Romulans.";
	}

	//age test, and inform them why they are not accepted if too young
	//tell them how long until they can reapply
	else if ((race != "vulcan" && race != "Vulcan") && (age < 17 && sat < 1500))
	{
		ageDiff = 17 - age;

		//nested if statement for grammar purposes
		if (ageDiff == 1)
		{
		cout << "You do not meet the minimum age requirement. Try again in " << ageDiff << " year." << endl;
		}
		else
		{
			cout << "You do not meet the minimum age requirement. Try again in " << ageDiff << " years." << endl;
		}
	}

	//do the same thing but for vulcans with the modified age difference in requirements
	else if ((race == "vulcan" || race == "Vulcan") && (age < 16 && sat < 1500))
	{
		ageDiff = 16 - age;

		//nested if statement for grammar purposes
		if (ageDiff == 1)
		{
		cout << "You do not meet the minimum age requirement. Try again in " << ageDiff << " year." << endl;
		}
		else
		{
			cout << "You do not meet the minimum age requirement. Try again in " << ageDiff << " years." << endl;
		}
	}
	
	//GPA tester with sat verifier
	else if (gpa < 2.0 && sat <1100)
	{
		gpaDiff = 2.0 - gpa;
		cout << "You need better grades. Bring that GPA up " << gpaDiff << " and then we'll talk" << endl;
	}

	//SAT score tester
	else if (sat < 800 && gpa < 3.5)
	{
		satDiff = 800 - sat;
		cout << "You need a better SAT score. Bring that score up " << satDiff << " and then we'll talk" << endl;
	}


	//special condiontional statement for vulcans
	else if (((race == "vulcan") || (race == "Vulcan")) && 
			( (age >= 16 && gpa >= 3.5) || (age >= 16 && sat >= 1100) || 
			(sat >= 1500 && gpa >= 2.0) || (age >= 16 && gpa >= 2.0 && sat >= 800) ) )
	{
			cout << "Welcome to Starfleet " << name << "!" << endl;
	}

	//conditional statement for everyone that is not a vulcan
	else if ( (age >= 16 && gpa >= 3.5) || (age >= 16 && sat >= 1100) || 
			(sat >= 1500 && gpa >= 2.0) || (age >= 16 && gpa >= 2.0 && sat >= 800) )
	{
		cout << "Welcome to Starfleet " << name << "!" << endl;
	}

	//if you meet none of the requirements
	else
	{
		cout << "You do not fit Starfleet standards." << endl << endl;
	}

	cout << endl;
	cout << endl;
	cout << "Applicant Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "GPA: " << gpa << endl;
	cout << "SAT Score: " << sat << endl;
	cout << "Race: " << race << endl << endl;
	cout << "**\\\\--APPLICATION PROCESS COMPLETED--//**" << endl;
	cout << "-----------------------------------------" << endl << endl;

}