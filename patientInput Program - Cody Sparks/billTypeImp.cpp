#include <iostream>
#include <string>
#include "billType.h"
#include "personType.h"
#include "dateType.h"

using namespace std;


//Functions for setting up and retrieving info
billType::billType(string id, double phCharges, double rRent, double docFee)
{
	ID = id;
	pharmacyCharges = phCharges;
	roomRent = rRent;
	doctorFee = docFee;
}


void billType::setID(string str1)
{
	ID = str1;
}

string billType::getID()
{
	return ID;
}

//Functions for setting, retrieving, and updating pharmacy charges

void billType::setPharmacyCharges(double charges)
{
	pharmacyCharges = charges;
}

double billType::getPharmacyCharges()
{
	return pharmacyCharges;
}

void billType::updatePharmacyCharges(double charges)
{
	pharmacyCharges = pharmacyCharges + charges;
}

//Functions for setting up, retrieving, and updating room charges

void billType::setRoomRent(double charges)
{
	roomRent = charges;
}

double billType::getRoomRent()
{
	return roomRent;
}

void billType::updateRoomRent(double charges)
{
	roomRent = roomRent + charges;
}

//Functions for setting up, retrieving, and updating doctor fees

void billType::setDoctorFee(double charges)
{
	doctorFee = charges;
}

double billType::getDoctorFee()
{
	return doctorFee;
}

void billType::updateDoctorFee(double charges)
{
	doctorFee = doctorFee + charges;
}

double billType::billingAmount()
{
	billTotal = doctorFee + roomRent + pharmacyCharges;
	return billTotal;
}


void billType::printBill()
{
	cout << "Pharmacy Charge: $" << getPharmacyCharges(); cout << endl;
	cout << "Room Rent: $" << getRoomRent(); cout << endl;
	cout << "Doctor Fee: $" << getDoctorFee(); cout << endl;
	cout << "Bill Total : $" << billingAmount(); cout << endl;
}