#include "VectorDriver.h"

int main() {
	cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
	vector<short> sample_vector(5);

	cout << "new vector: ";
	print(sample_vector);
	cout << endl;

	fill_vector(sample_vector);

	cout << "filled vector: ";
	print(sample_vector);
	cout << endl;

	cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
	cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
	

	
	cout << "adding 10 random numbers to sample_vector" << endl;
	add_numbers(sample_vector);
	print(sample_vector);
	cout << endl;
	
	cout << "adding 10 more random numbers to sample_vector" << endl;
	add_numbers(sample_vector);
	print(sample_vector);
	cout << endl;

	print_even(sample_vector);
	cout << endl;

	cout<< "is 5 present?: " << is_present(sample_vector, 5);
	cout << endl;

	cout << "======================" << endl;

	vector<short> foo;
	add_numbers(foo);
	print(foo);
	cout << endl;

	cout << "sorting..." << endl;
	std::sort(foo.begin(), foo.end());
	print(foo);
	cout << endl;
	cout << "======================" << endl;


	system("pause");
	return 0;
}
