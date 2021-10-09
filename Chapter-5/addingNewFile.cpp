// This program is only to create a file with some numbers.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream newFile;
    int ammountOfItems;
    int item; 

    // Getting the ammount of items to write on the file.
    cout << "Enter the amount of integers to add in the dile: ";
    cin >> ammountOfItems;

    // Opening the file.
    newFile.open("ListofNumbers.txt");

    // Entering a number for each item to the file.
    for (int i = 1; i <= ammountOfItems; i++)
    {
        cout << "Enter the item " << i << ": ";
        cin >> item;

        //Writing the data to the file. 
        newFile << item << endl;
    }

    // Closing the file.
    newFile.close();
    cout << "The items were wrriten to the file.\n";
    return 0;
}