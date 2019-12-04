#include <iostream>
#include <string>
using namespace std;

int main()
{
    // employment variables
    string employeeName;
    int hoursPerMonth;
    double payRate;
    
    employeeName = "Gaius Adamson";
    hoursPerMonth = 128;
    payRate = 120.50;
    
    // residence variables
    double totalPay, rent, utilBill;
    
    totalPay = hoursPerMonth * payRate;
    rent = 2400.00;
    utilBill = 120.00;
    
    // cost vs expense calculations
    double postRent, postUtil;
    
    postRent = totalPay - rent;
    postUtil = postRent - utilBill;
    
    // scheduling variables
    int weekDays;
    double dayAllowance;
    
    weekDays = 30;
    dayAllowance = postUtil / weekDays;
    
    // report
    
    cout << "EXPENSE REPORT FOR SUBJECT \""
         << employeeName
         << "\"\n"
         << endl;
    
    cout << "Pay Rate = "
         << payRate
         << endl;
    
    cout << "Hours Worked Per Month = "
         << hoursPerMonth
         << endl;
    
    cout << "Total Pay = "
         << payRate
         << " * "
         << hoursPerMonth
         << " = "
         << totalPay
         << endl
         << endl;

    cout << "Rent = "
         << rent
         << endl;

    cout << "Utility Bill = "
         << utilBill
         << endl
         << endl;

    cout << "After Rent = "
         << totalPay
         << " - "
         << rent 
         << " = "
         << postRent
         << endl;

    cout << "After Utility = "
         << postRent
         << " - "
         << utilBill
         << " = "
         << postUtil
         << endl
         << endl;

    cout << "Daily Allowance = "
         << postUtil
         << " / "
         << weekDays
         << " = "
         << dayAllowance
         << endl;
    
    return 0;
}