// Name: Zheng Hao Tan
// Email: tanzhao@umich.edu
// Date: April 26, 2014

#include <iostream>
#include <vector>
#include <getopt.h>
#include "/io/Helper.h"

using namespace std;

// Prototypes.

int main(int argc, char *argv[]) {

	// To speed up IO stream.
	// ios_base::sync_with_stdio(false);

	struct option longOpts[] = {

		{ "whitespace", required_argument, NULL, 'w'},
		{ "characters", required_argument, NULL, 'c'},
		{ "lines", required_argument, NULL, 'l'},
		{ "numbers", required_argument, 'n'},
		{ "help", no_argument, NULL, 'h'},
		{ 0, 0, 0, 0}
	};

	// Handle all the command line options.
	while ((opt = getopt_long(argc, argv, "w:c:l:n:h", longOpts, &index)) != -1) {
		switch(opt) {

			case 'w':
						type = argv[optind-1];
						break;

			case 'c':
						type = argv[optind-1];
						break;
			case 'l':
						numLines = argv[optind-1];
						break;
			case 'n':
						number = argv[optind-1];
						break;
			case 'h':
						printHelp();

			case '?':   cerr << "Invalid option input. ";
						cerr << "Please try again!" << endl;
						exit(1);
		}
	}

	buildOutput();

	printOutput();

	return 0;
}
