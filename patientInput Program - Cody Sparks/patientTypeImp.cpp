#include <iostream>
#include <string>
#include "patientType.h"
#include "dateType.h"
#include "doctorType.h"

using namespace std;


void patientType::print() const
{

	cout << "Patient Name: " << getFirstName() << " " << getLastName() << endl;
	cout << "Patient ID: " << getID() << endl;
	cout << "Age: " << getAge() << endl;
	cout << "DOB: " << dobD << "-" << dobM << "-" << dobY << endl;
	cout << "Doctor Name: " << getDoctorFName() << " " << getDoctorLName() << endl;
	cout << "Speciality: " << getDoctorSpl() << endl;
}

void patientType::setName(string first, string last)
{
	patientFName = first;
	patientLName = last;
}



string patientType::getFirstName() const
{
	return patientFName;
}


string patientType::getLastName() const
{
	return patientLName;
}


void patientType::setID(string str1)
{
	patientID = str1;
}


string patientType::getID() const
{
	return patientID;
}


void patientType::setAge(int age)
{
	patientAge = age;
}

int patientType::getAge() const
{
	return patientAge;
}

void patientType::setBirthDate(int d, int m, int y)
{
	dobD = d;
	dobM = m;
	dobY = y;
}


int patientType::getBirthMonth() const
{
	return dobM;
}
int patientType::getBirthDay() const
{
	return dobD;
}
int patientType::getBirthYear() const
{
	return dobY;
}
int patientType::getAdmMonth() const
{
	return admMonth;
}
int patientType::getAdmDay() const
{
	return admDay;
}
int patientType::getAdmYear() const
{
	return admYear;
}
int patientType::getDisMonth() const
{
	return disMonth;
}
int patientType::getDisDay() const
{
	return disDay;
}
int patientType::getDisYear() const
{
	return disYear;
}

patientType::patientType()
{
	patientFName = "john";
	patientLName = "doe";
}

patientType::patientType(string id, string first, string last,
	int d, int m, int y, string dFirst, string dLast,
	string dSpl, int aD, int aM, int aY, int dD, int dM, int dY)
{
	patientID = id;
	patientFName = first;
	patientLName = last;
	doctorFName = dFirst;
	doctorLName = dLast;
	doctorSpl = dSpl;
	dobD = d;
	dobM = m;
	dobY = y;
	admDay = aD;
	admMonth = aM;
	admYear = aY;
	disDay = dD;
	disMonth = dM;
	disYear = dY;
}