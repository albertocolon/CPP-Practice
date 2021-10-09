// This program writes user input type string to a file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream outputFile;
    string name1, name2, name3, name4;

    // Open an output file.
    outputFile.open("LovedOnes.txt");

    // Get the names from the user. 
    cout << "Enter the names of your loved ones.\n";
    cout << "Loved one # 1: ";
    cin >> name1;
    cout << "Loved one # 2: ";
    cin >> name2;
    cout << "Loved one # 3: ";
    cin >> name3;
    cout << "Loved one # 4: ";
    cin >> name4;

    // Write the names to the file. 
    outputFile << name1 << endl;
    outputFile << name2 << endl;
    outputFile << name3 << endl;
    outputFile << name4 << endl;
    cout << "The names of your loved ones was saved to a file.\n";

    // Close the file.
    outputFile.close();
    return 0;
}