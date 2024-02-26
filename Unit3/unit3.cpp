#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    ifstream inFile;
    ofstream outFile;

    // declare variables here
    string fName, lName, depart;
    double gSalary, bonus, taxRate;
    double distanceTraveled, travelTime;
    int numOfCOffeeCupsSold;
    double coffeeCupCost;

    inFile.open("inData.txt");
    outFile.open("outData.txt");

    outFile << fixed << showpoint << setprecision(2);

    inFile >> fName >> lName >> depart;
    inFile >> gSalary >> bonus >> taxRate;

    outFile << "Name: " << fName << " " << lName << ", " << "Department: " << depart << endl;
    outFile << "Monthly Gross Salary: $" << gSalary << ", " << "Monthly Bonus: " << bonus << "%, " << "Taxes: " << taxRate << "%" << endl;
    outFile << "Paycheck: $ " << gSalary * (1 + bonus / 100) * (1 - taxRate / 100) << endl;
    outFile << endl;

    inFile >> distanceTraveled >> travelTime;
    outFile << "Distance Traveled: " << distanceTraveled << " miles, " << "Traveling Time: " << travelTime << " hours " << endl;
    outFile << "Average Speed: " << distanceTraveled / travelTime << " miles per hour" << endl;
    outFile << endl;

    inFile >> numOfCOffeeCupsSold >> coffeeCupCost;
    outFile << "Number Of Coffee Cups Sold: " << numOfCOffeeCupsSold << ", " << "Cost: $ " << coffeeCupCost << " per cup " << endl;
    outFile << "Sales Amount = $" << numOfCOffeeCupsSold * coffeeCupCost;

    inFile.close();
    outFile.close();

    return 0;
}

