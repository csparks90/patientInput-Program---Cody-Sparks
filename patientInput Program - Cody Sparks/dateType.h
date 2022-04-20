#ifndef dateType_H
#define dateType_H

class dateType
{
public:
    void setAdmDate(int month, int day, int year);
    //Function to set the date.
    //The member variables dMonth, dDay, and dYear are set  
    //according to the parameters.
    //Postcondition: dMonth = month; dDay = day;
    //               dYear = year

    void setDisDate(int month, int day, int year);


    int getAdmDay() const;
    //Function to return the day.
    //Postcondition: The value of dDay is returned.

    int getAdmMonth() const;
    //Function to return the month.  
    //Postcondition: The value of dMonth is returned.

    int getAdmYear() const;
    //Function to return the year.     
    //Postcondition: The value of dYear is returned.

    void printAdmDate() const;
    //Function to output the date in the form mm-dd-yyyy.

    void printDisDate() const;

    dateType(int month = 1, int day = 1, int year = 1900);
    //Constructor to set the date
    //The member variables dMonth, dDay, and dYear are set 
    //according to the parameters.
    //Postcondition: dMonth = month; dDay = day; dYear = year;
    //               If no values are specified, the default 
    //               values are used to initialize the member
    //               variables.


    int admMonth; //variable to store the month
    int admDay;   //variable to store the day
    int admYear;  //variable to store the year
    int disMonth;
    int disDay;
    int disYear;
};

#endif