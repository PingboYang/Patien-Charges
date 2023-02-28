#include <iostream>
using namespace std;
#ifndef PATIENT_H
#define PATIENT_H
class Patient{
private: string firstName, middleName, lastName, address, city,state, emerContactName;
         int phoneNumber,emerContacNumber,zipCode;
public: Patient(string f,string m,string l, string a,string c, string s,int z, int p, string en, int ep );
        void setFirstName(string f);
        void setMiddleName(string m);
        void setLastName(string l);
        void setAddress(string a);
        void setCity(string c);
        void setState(string s);
        void setZipCode(int z);
        void setPhoneNumber(int n);
        void setEmergencyContactName(string en);
        void setEmergencyContactNumber(int ep);
        string getFirstName();
        string getMiddleName();
        string getLastName();
        string getAddress();
        string getCity();
        string getState();
        int getZipCode();
        int getPhoneNumber();
        string getEmergencyContactName();
        int getEmergencyContactNumber();
};









#endif