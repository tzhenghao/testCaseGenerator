#ifndef HELPER_H
#define HELPER_H

#include <iostream>
#include <sstream>

using namespace std;

// REQUIRES: The help function to be enabled.
// EFFECTS: Prints out a helpful message and then exits the program.
void printHelp();

// REQUIRES: The whole engine of the program to be initialized.
// EFFECTS: Prints out the output into a given file.
void printOutput();

#endif
