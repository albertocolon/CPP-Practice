// This program test for file open errors. 
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    int number;

    // Open the file
    inputFile.open("NoneExistingFile.txt");

    // If the file successfully opened, process it. And here is the concpet, using an if statement.
    if (inputFile)
    {
        // Read the numbers from the file and
        // display them. 
        while (inputFile >> number)
        {
            cout << number << endl;
        }
        // Close the file.
        inputFile.close();
    }
    else
    {
        // Display an error message. 
        cout << "Error opening file. Unable to find file.\n";
    }
    return 0;
}