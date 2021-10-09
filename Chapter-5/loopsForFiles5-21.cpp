// This program reads data from a file created and using a for loop to add the data.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;        // File stream object.
    int numberOfDays;           // Number of days of sales.
    double sales;               // Sales ammount for the day. 

    // Get the number of days.
    cout << "For how many days do you have sales? ";
    cin >> numberOfDays;

    // Open a file named Sales.txt.
    outputFile.open("Sales.txt");

    // Get the sales for each day and write it
    // to the file. 
    for (int count = 1; count <= numberOfDays; count++)
    {
        // Get the ssales for a day.
        cout << "Enter the sales for day " << count << ": ";
        cin >> sales;

        // Write the sales to the file.
        outputFile << sales << endl;

    }

    // Close the file.
    outputFile.close();
    cout << "Data written to Sales.txt\n";
    return 0;
    
}