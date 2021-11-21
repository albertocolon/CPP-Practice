/* This program should create two MoveiData Variables, store values in their members, 
and pass each one, in turn, to a function that displays the informaction about the movie 
in a clearly formatted manner. 
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct MovieData
{
    string title;
    string director;
    int yearReleased;
    double runningTime;

};

void showData()     // Just testing the remote conection with Jump desktop. 