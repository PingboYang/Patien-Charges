#include <iostream>
using namespace std;
#include "Patient.h"
#include "Procedure.h"

int main() {
  Procedure procedure1("Physical Exam", "02/28/2023", "Dr.Irvine", 250);
  Procedure procedure2("X-ray","02/28/2023","Dr.Jamison", 500 );
  Procedure procedure3("Blood test", "02/28/2023","Dr.Smith", 200);
  cout<<"\nProcedure1 name: "<<procedure1.getProcedureName()<<"\nProcedure1 date: "<<procedure1.getProcedureDate()<<"\nProcedure1 Pracitioner: "<<procedure1.getProcedurePractitioner()<<"\nProcedure1 Charge: "<<procedure1.getProcedureCharge();
}