#include <iostream>
using namespace std;
#ifndef PROCEDURE_H
#define PROCEDURE_H
class Procedure{
private: string procedureName;
         string procedureDate;
         string procedurePractitioner;
         int procedureCharge;
public: 
        Procedure();
        Procedure(string n, string p, string x, int y);
        string getProcedureName();
        string getProcedureDate();
        string getProcedurePractitioner();
        int getProcedureCharge();
        void setProcedureName(string n);
        void setProcedureDate(string p);
        void setProcedurePractitioner(string x);
        void setProcedureCharge(int y);
};





#endif