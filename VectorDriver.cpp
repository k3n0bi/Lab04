// VectorDriver.cpp
// Ben Howe
// COSC 2030
// Lab 4
// October 15, 2018

// Basic use of std::vector, iterators, and sorting with algorithm

#include <algorithm> // Used for sorting vectors
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

  // Start of testing code
  // "Comments" are in cout statements so they are included
  //  with program output in the console.

  cout << endl << "  --== START OF TEST CODE ==--" << endl;

  // Part 1.
  // Creating an empty vector and calling add_numbers function...
  cout << endl << "========== PART 1 ============" << endl;
  cout << "Creating an empty vector and calling add_numbers function..." << endl;
  vector<short> test_vector; // Creating an empty vector
  add_numbers(test_vector); // Adding "random" numbers to vector
  print(test_vector);    // Displaying the vector

  // Creating an empty vector and calling add_numbers function twice...
  cout << endl << "Creating an empty vector and calling add_numbers function twice..." << endl;
  vector<short> test_vector_two;  // Creating an empty vector
  add_numbers(test_vector_two);   // Adding "random" numbers to vector
  add_numbers(test_vector_two);   // Adding "random" numbers to vector a second time
  print(test_vector_two);  // Displaying the vector

  // Part 2.
  // Now printing only even elements of vector...
  cout << endl<<"========== PART 2 ============" << endl;
  cout << "Now printing only even elements of vector..." << endl;
  print_even(test_vector_two);  // Printing even elements
  cout << endl;

  // Part 3. 
  // Creating a 10 element Vector and testing to see if certain numbers are present.
  cout << "========== PART 3 ============" << endl;
  vector<short> present_test(10);  // Creating a 10 element vector
  fill_vector(present_test);    // Populating the vector
  cout << "New vector: ";
  print(present_test);  // Displaing the vector
  // Now to test the is_present function...
  cout << endl << "Testing to see if 7 is part of the vector..." << endl;
  cout << "Boolean value of is_present function: " << is_present(present_test, 7) << endl;
  cout << "Testing to see if 28 is part of the vector..." << endl;
  cout << "Boolean value of is_present function: " << is_present(present_test, 28) << endl;

  // Part 4.
  // Vector sorting.
  cout << "========== PART 4 ============" << endl;
  vector<short> foo; // Creating an empty vector
  foo.push_back(86);  // Populating 5 elements with "random" numbers
  foo.push_back(7);   // in un-sorted order.
  foo.push_back(53);
  foo.push_back(0);
  foo.push_back(9);
  cout << "New vector for testing sorting." << endl;
  cout << "Before sorting..." << endl;
  print(foo);  // Displaying vector before sorting.
  cout << endl << "After sorting..." << endl;

  // Custom vector sorting function
  sort_vector(foo);  // sorting the vector using custom function 
                     // Custom function means I don't have to type the .begin() and .end()
                     // iterators whenever I want to sort something. :)
                     // Without use of a custom function, here's the sort routine
                     // std::sort(foo.begin(), foo.end());
  print(foo); // Displaying vector after sorting.
  cout << endl;
  
  // Testing the vector to make sure it sorted correctly.
  // This is built knowing that I have at least two elemenets in my vector.
  cout << "Testing sorted vector to validate sort." << endl;
  for (int i = 1; i < foo.size(); i++)
  {
    cout << "vector(" << i << ") >= vector (" << i - 1 << ")? : ";
    if (foo.at(i) >= foo.at(i - 1))
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;

    }
  }
   
  
  cout << "======================" << endl;

  cout << endl << "  --== END OF TEST CODE ==--" << endl;
  system("pause");
  return 0;
}
