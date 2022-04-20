#ifndef H_doctorType
#define H_doctorType

using namespace std;

#include <string>


class doctorType
{
public:
    void setDoctorSpl(string special);
    string getDoctorSpl() const;
    void setDoctorName(string first, string last);
    string getDoctorFName() const;
    string getDoctorLName() const;

    doctorType(string first = " ", string last = " ", string spl = " ");




    string doctorFName, doctorLName, doctorSpl;

};


#endif