#include <iostream>
#include <string>
using namespace std;

int main() {
    string employeeName;
    double hourlyRate, hoursWorked, regularPay, overtimePay, grossPay, netPay;

    cout << "Enter employee name: ";
    getline(cin, employeeName);

    cout << "Enter hour rate: ";
    cin >> hourlyRate;

    cout << "Enter number of hours worked: ";
    cin >> hoursWorked;

    if (hoursWorked <= 40) {
        regularPay = hourlyRate * hoursWorked;
        overtimePay = 0;
    } else {
        regularPay = hourlyRate * 40;
        overtimePay = (hoursWorked - 40) * (hourlyRate * 1.5);
    }

    grossPay = regularPay + overtimePay;
    double totalDeductions = 0.10 * grossPay + 50.0;
    netPay = grossPay - totalDeductions + 100.0;

    cout << "Overtime Pay: $" << overtimePay << endl;
    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Total Deductions: $" << totalDeductions << endl;
    cout << "Net Pay: $" << netPay << endl;

    return 0;
}