/*
 Author: Sighfy
 Project: PC5_15
 Description: Payroll Report
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int     employNum;
    double  grossPay,
            fedWTH,
            stateWTH,
            FICA,
            WTH,
            netPay,
            totGrossPay = 0,
            totStateTax = 0,
            totFedTax   = 0,
            totFICA     = 0,
            totNetPay   = 0;


    cout << "Enter the following information:\n\n";
    cout << "Employee Number (0 to quit): ";
    cin  >> employNum;

    while (employNum < 0)
    {
        cout << "Employee number may not be less than zero.\n";
        cout << "Re-enter employee Number (0 to quit): ";
        cin >> employNum;
    }
    
    while (employNum != 0)
    {
        cout << "Gross pay: ";
        cin  >> grossPay;
            
        while (grossPay < 0)
        {
            cout << "Gross pay may not be less than zero.\n";
            cout << "Re-enter Gross pay: ";
            cin  >> grossPay;
        }

        cout << "Federal Withholding: ";
        cin  >> fedWTH;

        while (fedWTH < 0)
        {
            cout << "Federal witholding may not be less than zero.\n";
            cout << "Re-enter Federal Withholding: ";
            cin  >> fedWTH;
        }
            
        cout << "State Withholding: ";
        cin  >> stateWTH;

        while (stateWTH < 0)
        {
            cout << "State witholding may not be less than zero.\n";
            cout << "Re-enter State Withholding: ";
            cin  >> stateWTH;
        }
                
        cout << "FICA Withholding: ";
        cin  >> FICA;
                
        while (FICA < 0)
        {
            cout << "FICA witholding may not be less than zero.\n";
            cout << "Re-enter FICA Withholding: ";
            cin  >> FICA;
        }
    
        WTH = (fedWTH + stateWTH + FICA);

        if (WTH > grossPay)
        {
            cout << "\nERROR: Withholdings cannot exceed gross pay.\n"
            << "\nPlease re-enter the data for this employee.\n"
            << endl;
        }
        else
        {
            totGrossPay += grossPay;
            totFedTax += fedWTH;
            totStateTax += stateWTH;
            totFICA += FICA;

            netPay = grossPay - WTH;

            totNetPay += netPay;
        }
        cout << "\n\nProcessing the next employee: \n";
        cout << "Employee Number (0 to quit): ";
        cin  >> employNum;
        
        while (employNum < 0)
        {
            cout << "Employee number may not be less than zero.\n";
            cout << "Re-enter employee Number (0 to quit): ";
            cin >> employNum;
        }
        
    }
    
    cout << right << fixed << showpoint << setprecision(2);
    cout << "\n\nTotal Gross Pay:    $" << setw(8) << totGrossPay << endl;
    cout << "Total Federal Tax:  $" << setw(8) << totFedTax << endl;
    cout << "Total State Tax:    $" << setw(8) << totStateTax << endl;
    cout << "Total FICA:         $" << setw(8) << totFICA << endl;
    cout << "Total Net Pay:      $" << setw(8) << totNetPay << endl << endl;

    return 0;
}
