#include <iostream>
using namespace std;
#include "Patient.h"
Patient::Patient(string f,string m,string l, string a,string c, string s,int z, int p, string en, int ep ){
  firstName=f;
  middleName=m;
  lastName=l;
  address=a;
  city=c;
  state=s;
  zipCode=z;
  phoneNumber=p;
  emerContactName=en;
  emerContacNumber=ep;
}
void Patient:: setFirstName(string f){
  firstName=f;
};
void Patient:: setMiddleName(string m){
  middleName=m;
};
void Patient:: setLastName(string l){
  lastName=l;
};
void Patient:: setAddress(string a){
  address=a;
};
void Patient:: setCity(string c){
  city=c;
};
void Patient:: setState(string s){
  state=s;
};
void Patient:: setZipCode(int z){
  zipCode=z;
};
void Patient:: setPhoneNumber(int n){
  phoneNumber=p;
};
void Patient:: setEmergencyContactName(string en){
  emerContactName=en;
};
void Patient:: setEmergencyContactNumber(int ep){
  emerContacNumber=ep;
};
string Patient:: getFirstName(){
  return firstName;
};
string Patient:: getMiddleName(){
  return middleName;
          
        }
string Patient:: getLastName(){
  return lastName;
          
        }
string Patient:: getAddress(){
  return address;
          
        }
string Patient:: getCity(){
  return city;
          
        }
string Patient:: getState(){
  return state;
          
        }
int Patient:: getZipCode(){
  return zipCode;
          
        }
int Patient:: getPhoneNumber(){
  return phoneNumber;
          
        }
string Patient:: getEmergencyContactName(){
  return emerContactName;
          
        }
int Patient:: getEmergencyContactNumber(){
  return emerContacNumber;
          
        }


