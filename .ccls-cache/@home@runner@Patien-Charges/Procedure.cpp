#include <iostream>
using namespace std;
#include "Procedure.h"


Procedure::Procedure(){
            procedureName="";
            procedureDate="";
            procedurePractitioner="";
            procedureCharge=0;
}
Procedure::Procedure(string n, string p, string x, int y){
            procedureName=n;
            procedureDate=p;
            procedurePractitioner=x;
            procedureCharge=y;
        }
string Procedure:: getProcedureName(){
            return procedureName;
        }
string Procedure:: getProcedureDate(){
            return procedureDate;
        }
string Procedure:: getProcedurePractitioner(){
            return procedurePractitioner;
        }
int Procedure:: getProcedureCharge(){
            return procedureCharge;
        }
void Procedure:: setProcedureName(string n){
            procedureName=n;
        }
void Procedure:: setProcedureDate(string p){
            procedureDate=p;
        }
void Procedure:: setProcedurePractitioner(string x){
            procedurePractitioner=x;
        }
void Procedure:: setProcedureCharge(int y){
            procedureCharge=y;
        }