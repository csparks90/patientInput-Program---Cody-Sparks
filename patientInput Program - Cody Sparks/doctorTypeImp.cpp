#include <iostream>
#include <string>
using namespace std;
#include "doctorType.h"

void doctorType::setDoctorSpl(string special)
{
	doctorSpl = special;
}

string doctorType::getDoctorSpl() const
{
	return doctorSpl;
}

void doctorType::setDoctorName(string first, string last)
{
	doctorFName = first;
	doctorLName = last;
}

string doctorType::getDoctorFName() const
{
	return doctorFName;
}

string doctorType::getDoctorLName() const
{
	return doctorLName;
}

doctorType::doctorType(string first, string last, string spl)
{
	doctorFName = first;
	doctorLName = last;
	doctorSpl = spl;
}
