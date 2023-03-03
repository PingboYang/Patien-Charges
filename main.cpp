#include <iostream>
using namespace std;
#include "Patient.h"
#include "Procedure.h"

int main() {
  int totalCharge;
  Procedure procedure1("Physical Exam", "02/28/2023", "Dr.Irvine", 250);
  Procedure procedure2("X-ray","02/28/2023","Dr.Jamison", 500 );
  Procedure procedure3("Blood test", "02/28/2023","Dr.Smith", 200);
  Patient patient1("Jack","Lee","Brade","122 East 82nd","New York","NY",10028,666555333,"Rel Liu",222345678,procedure1);
  Patient patient2("Jack","Lee","Brade","122 East 82nd","New York","NY",10028,666555333,"Rel Liu",222345678,procedure2);
  Patient patient3("Jack","Lee","Brade","122 East 82nd","New York","NY",10028,666555333,"Rel Liu",222345678,procedure3);
  totalCharge=patient1.getProcedure().getProcedureCharge()+patient2.getProcedure().getProcedureCharge()+patient3.getProcedure().getProcedureCharge();
  cout<<"\nProcedure1 name: "<<procedure1.getProcedureName()<<"\nProcedure1 date: "<<procedure1.getProcedureDate()<<"\nProcedure1 Pracitioner: "<<procedure1.getProcedurePractitioner()<<"\nProcedure1 Charge: "<<procedure1.getProcedureCharge();
  cout<<"\n------------------------------------------------------";
  cout<<"\npatent1\nName: "<<patient1.getFirstName()<<" "<<patient1.getMiddleName()<<" "<<patient1.getLastName();
  cout<<"\nAddress: "<<patient1.getAddress()<<" "<<patient1.getCity()<<" "<<patient1.getState()<<" "<<patient1.getZipCode();
  cout<<"\nPhone Number: "<<patient1.getPhoneNumber();
  cout<<"\nEmergency Contact: "<<patient1.getEmergencyContactName()<<"  Phone NUmber: "<<patient1.getEmergencyContactNumber();
  cout<<endl;
  cout<<"\nCharge detail: "<<"\nProcedure Name: "<<patient1.getProcedure().getProcedureName()<<"\nProcedure Date: "<<patient1.getProcedure().getProcedureDate()<<"\nProcedure Practitioner: "<<patient1.getProcedure().getProcedurePractitioner()<<"\nProcedure Practitioner: "<<patient1.getProcedure().getProcedureCharge();
  cout<<endl;
  cout<<"\nCharge detail: "<<"\nProcedure Name: "<<patient2.getProcedure().getProcedureName()<<"\nProcedure Date: "<<patient2.getProcedure().getProcedureDate()<<"\nProcedure Practitioner: "<<patient2.getProcedure().getProcedurePractitioner()<<"\nProcedure Practitioner: "<<patient2.getProcedure().getProcedureCharge();
  cout<<endl;
  cout<<"\nCharge detail: "<<"\nProcedure Name: "<<patient3.getProcedure().getProcedureName()<<"\nProcedure Date: "<<patient3.getProcedure().getProcedureDate()<<"\nProcedure Practitioner: "<<patient3.getProcedure().getProcedurePractitioner()<<"\nProcedure Practitioner: "<<patient3.getProcedure().getProcedureCharge();
  cout<<"\n\nThe total charge is: "<<totalCharge;
  
}
