// This program writes data to a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream outputFile;
  outputFile.open("demofile.txt");

  cout << "Now writing data to a file.\n";

  // Writing data to a file. Whitout the end lines it would have writen the text side by side like AlbertoLyar etc..
  outputFile << "Alberto\n";
  outputFile << "Lyar\n";
  outputFile << "Isabella\n";
  outputFile << "Enrique\n";
  outputFile << "Adrian\n";

  // Close the File
  outputFile.close();

  cout << "Done.\n";
  return 0;

}