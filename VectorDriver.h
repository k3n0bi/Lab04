/* File: VectorDriver.cpp
* Athr: Dimitri Zarzhitsky
* Date: October 16, 2002
*
* Desc: provides the basic framework and examples for an introduction to
*       the STL::vector, iterators, and the algorithms facilities.
*
* Edited by: Rafe Cooley
* Date: October 1, 2017 (the future)
*
*/
typedef unsigned long ulong;

#include <iostream>
#include <vector>


using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
	for (ulong i = 0; i<data.size(); i++) {
		data.at(i) = i;
	}
}

// print our vector in a fancy way
void print(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i<data.size(); i++) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
	std::vector<short>::const_iterator iter = data.begin();

	short sum = 0;
	while (iter != data.end()) {
		sum += *iter;
		iter++;
	}

	return sum;
}

// TODO: implement add_numbers
void add_numbers(vector<short> &data)
{
	// Adds 10 random numbers to the given vector.
	for (ulong i = 0; i<10; i++)
	{
		data.push_back(rand()/100);
		// integer division gives me a whole number
	}
}

// TODO: implement print_even
void print_even(const vector<short>& data)
{
	// Prints out even numbered (0,2,4,etc.) elements from the given vector.
	// Changed original print function by starting i at 2 and iterating by 2
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 2; i<data.size(); i+=2) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// TODO: implement is_present
bool is_present(const vector<short> &data, short value)
{
	// Indicates whether or not a value is present in the given vector.
	// Uses iterators.
	bool result = false;
	std::vector<short>::const_iterator iter = data.begin();
	while (result==false && iter != data.end())
	{
		// Terminates if either the value is found (result=true)
		// or the end of the vector is reached.
		if (*iter == value)
		{
			result = true;
		}
		iter++; // move to the next iterator
	}
	return result;
}

// TODO: implement std::sort function
