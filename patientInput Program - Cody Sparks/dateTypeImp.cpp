//Implementation file date

#include <iostream>
#include "dateType.h" 

using namespace std;

void dateType::setAdmDate(int month, int day, int year)
{
    admMonth = month;
    admDay = day;
    admYear = year;
}

void dateType::setDisDate(int month, int day, int year)
{
    disMonth = month;
    disDay = day;
    disYear = year;
}


int dateType::getAdmDay() const
{
    return admDay;
}

int dateType::getAdmMonth() const
{
    return admMonth;
}

int dateType::getAdmYear() const
{
    return admYear;
}

void dateType::printAdmDate() const
{
    cout << "Date admitted: " << admMonth << "-" << admDay << "-" << admYear << endl;
}

void dateType::printDisDate() const
{
    cout << "Date discharged: " << disMonth << "-" << disDay << "-" << disYear << endl;
}

//Constructor with parameters
dateType::dateType(int month, int day, int year)
{
    admMonth = month;
    admDay = day;
    admYear = year;
}
