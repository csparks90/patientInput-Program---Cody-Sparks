#ifndef H_BillType
#define H_BillType

#include <string>
#include "personType.h"
#include "dateType.h"

using namespace std;

class billType
{
public:
    void printBill();

    billType(string id = "", double phCharges = 0, double rRent = 0,
        double docFee = 0);


    void setID(string id);
    string getID();

    void setPharmacyCharges(double charges);
    double getPharmacyCharges();
    void updatePharmacyCharges(double charges);

    void setRoomRent(double charges);
    double getRoomRent();
    void updateRoomRent(double charges);

    void setDoctorFee(double charges);
    double getDoctorFee();
    void updateDoctorFee(double charges);

    double billingAmount();




private:
    string ID;
    double pharmacyCharges;
    double roomRent;
    double doctorFee;
    double billTotal;
};

#endif