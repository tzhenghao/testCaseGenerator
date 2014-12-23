// Name: Zheng Hao Tan
// Email: tanzhao@umich.edu
// Date: April 26, 2014

// This file implements program options such as whitespaces in between the
// numbers and words or special characters in between them.

#ifndef PROGRAMOPTIONS_H
#define PROGRAMOPTIONS_H

#include <iostream>
using namespace std;

class programOptions {

	public:

		// REQUIRES: The type of the whitespace.
		// EFFECTS: Returns the whitespace to the user.
		const char * insertWhiteSpace(const char * type);


		// REQUIRES: The special character.
		// EFFECTS: Returns the special character.
		char insertSpecialChar(const char character);

		// REQUIRES:

	private:

};

