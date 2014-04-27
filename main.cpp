// Zheng Hao Tan
// Date: April 26, 2014

#include <iostream>
#include <vector>
#include <getopt.h>

using namespace std;


// Prototypes.
void printHelp();
void printOutput();

int main(int argc, char *argv[]) {
	
	// To speed up IO stream.
	// ios_base::sync_with_stdio(false);
	
	struct option longOpts[] = {

		{ "whitespace", required_argument, NULL, 'w'},
		{ "genCharacters", required_argument, NULL, 'c'},
		{ "getLines", required_argument, NULL, 'l'},
		{ "genNumbers", required_argument, 'n'},
		{ "help", no_argument, NULL, 'h'},
		{ 0, 0, 0, 0}
	};

	// Handle all the options.
	while ((opt = getopt_long(argc, argv, "w:h", longOpts, &index)) != -1)
	{
		switch(opt) {

			case 'w':	
						type = argv[optind-1]; 
						break;



			case 'c':
						type = argv[optind-1]; 
						break;

			case 'h':
						printHelp();


			case '?':   cerr << "Invalid option input. ";
						cerr << "Please try again!" << endl;
						exit(1);
		}
	}	
	

	return 0;
}

// REQUIRES: The help function to be enabled.
// EFFECTS: Prints out a helpful message and then exits the program.
void printHelp() {
	
	cout << "Welcome to testCaseGenerator!\n";
	cout << "The goal of this project is meant to be fun and easy to work with.\n";


	exit(0);
}

// REQUIRES: The whole engine of the program to be initialized.
// EFFECTS: Prints out the output into a given file.
void printOutput() {



}
