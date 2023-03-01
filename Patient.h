#include <iostream>
using namespace std;
#ifndef PATIENT_H
#define PATIENT_H
#include "Procedure.h"
class Patient{
private: string firstName, middleName, lastName, address, city,state, emerContactName;
         int phoneNumber,emerContacNumber,zipCode;
         Procedure aProcedure;
public: Patient(string f,string m,string l, string a,string c, string s,int z, int p, string en, int ep, Procedure pr);
        Patient(string f,string m,string l, string a,string c, string s,int z, int p, string en, int ep, Procedure pr, string n, string date, string x, int y );
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
        void setProcedure(Procedure pr);
        void setProcedure2(string n, string date, string x, int y );
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
        Procedure getProcedure();
};









#endif