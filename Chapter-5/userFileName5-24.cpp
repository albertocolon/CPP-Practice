// This program lets the user enter a fiename. 
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    string filename;
    int number;

    // Get the file name with the filename variable, from the user. 
    cout << "Enter the file name: ";
    cin >> filename;

    // Open the file
    inputFile.open(filename);

    // If the file successfully opened, process it.
    if (inputFile)
    {
        // Read the number from the file and
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
        cout << "Error opening file. File not found.\n";
    }
    return 0;
}