#include <iostream>
#include <string>
#include "patientType.h"
#include "billType.h"


using namespace std;

int main()
{
	patientType newPatient;
	billType bill;
	int one, two, three;
	double fst, sec, thd;
	string str1, str2, str3, str4;

	cout << "enter Patient's ID: "; cin >> str1; cout << endl;

	newPatient.setID(str1);
	bill.setID(str1);

	cout << "Enter patient's first name: "; cin >> str1; cout << endl;
	cout << "Enter patient's last name: "; cin >> str2; cout << endl;

	newPatient.setName(str1, str2);

	cout << "Enter patient's age: "; cin >> one; cout << endl;
	cout << "Enter Patient's Birth Date. Day: ";
	cin >> one;
	cout << " Month: ";
	cin >> two;
	cout << " Year: ";
	cin >> three;
	cout << endl;


	newPatient.setBirthDate(one, two, three);

	newPatient.setAge(one);

	cout << "Enter doctor's first name: "; cin >> str1; cout << endl;
	cout << "Enter doctor's last name: "; cin >> str2; cout << endl;
	newPatient.setDoctorName(str1, str2);

	cout << "Enter doctor's speciality: "; cin >> str1; cout << endl;
	newPatient.setDoctorSpl(str1);

	cout << "Enter pharmacy charge: $"; cin >> fst; cout << endl;
	bill.setPharmacyCharges(fst);
	cout << "Enter room rent: $"; cin >> sec; cout << endl;
	bill.setRoomRent(sec);
	cout << "Enter Doctor Fee: $"; cin >> thd; cout << endl;
	bill.setDoctorFee(thd);





	newPatient.setAdmDate(4, 20, 2022);
	newPatient.setDisDate(4, 30, 2022);
	newPatient.print();
	bill.printBill();
	newPatient.printAdmDate();
	newPatient.printDisDate();

	return 0;
}