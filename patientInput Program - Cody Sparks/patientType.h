#ifndef H_patientType
#define H_patientType

using namespace std;

#include <string>
#include "dateType.h"
#include "personType.h"
#include "doctorType.h"

class patientType : public personType, public dateType, public doctorType
{
public:
    void print() const;
    void setID(string ID);
    string getID() const;
    void setAge(int Age);
    int getAge() const;
    void setName(string str1, string str2);
    string getFirstName() const;
    string getLastName() const;
    void setBirthDate(int d, int m, int y);

    int getBirthMonth() const;
    int getBirthDay() const;
    int getBirthYear() const;
    int getAdmMonth() const;
    int getAdmDay() const;
    int getAdmYear() const;
    int getDisMonth() const;
    int getDisDay() const;
    int getDisYear() const;





    patientType();

    patientType(string id, string first, string last,
        int d, int m, int y, string dFirst, string dLast,
        string dSpl, int aD, int aM, int aY, int dD, int dM, int dY);


private:
    string patientID;
    string patientFName;
    string patientLName;
    int patientAge = 0;
    int dobM, dobD, dobY;
};

#endif
