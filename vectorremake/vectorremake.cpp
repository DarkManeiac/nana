// vectorremake.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

// random generator function:
int myrandom(int i) { return rand() % i; }

int main()
{
	vector<int> my_vector;
	my_vector.push_back(10);
	my_vector.push_back(20);

	vector<int>* create_vector_with_random_elements(int numberOfElementsInVector); {

		srand(unsigned(time(0)));

		// set some values
		for (int i = 0; i < 10; i++) create_vector_with_random_elements.push_back(i); // 0 1 2 3 4 5 6 7 8 9

																					  // using built-in random generator
		random_shuffle(create_vector_with_random_elements.begin(), create_vector_with_random_elements.end());

		// using myrandom
		random_shuffle(create_vector_with_random_elements.begin(), create_vector_with_random_elements.end(), myrandom);

		// print out content:
		cout << "myvector contains: ";
		vector<int>::iterator it;
		for (it = create_vector_with_random_elements.begin(); it != create_vector_with_random_elements.end(); ++it)
			cout << ' ' << *it;
		cout << endl;

	}

	void order_vector_elements(vector<int>* vectorToOrder); {

		// set some values:
		for (int i = 1; i < 10; ++i) vectorToOrder.push_back(i);   // 1 2 3 4 5 6 7 8 9

																   // print out content:
		cout << "myvector contains:";
		vector<int>::iterator it;
		for (it = vectorToOrder.begin(); it != vectorToOrder.end(); ++it)
			cout << ' ' << *it;
		cout << endl;

	}

	void reverse_the_order_of_elements(vector<int>* vectorToReverse); {

		// set some values
		for (int i = 1; i < 10; i++)vectorToReverse.push_back(i);

		reverse(vectorToReverse.begin(), vectorToReverse.end());

		// print our content
		cout << "My Vector contains: ";
		vector<int>::iterator it;
		for (it = vectorToReverse.begin(); it != vectorToReverse.end(); it++)
			cout << ' ' << *it;
		cout << endl;

	}

	cout << "The size of My Vector is: " << my_vector.size() << endl;

	void print_vector_elements(vector<int>& vectorToPrint); {

		create_vector_with_random_elements;
		order_vector_elements;
		reverse_the_order_of_elements;
		cout << endl;
	}

	my_vector.push_back(30);
	my_vector.push_back(40);
	int main()
		; {
		vector<int>* elements = create_vector_with_random_elements(20);
		print_vector_elements(*elements);

		cout << "The size of My Vector is; " << my_vector.size() << endl;
		order_vector_elements(elements);
		print_vector_elements(*elements);

		for (int i = 0; i < my_vector.size(); i++) {
			cout << "Vector " << i << "   " << my_vector[i] << endl;

		}
		reverse_the_order_of_elements(elements);
		print_vector_elements(*elements);

		system("pause");
		return 0;
		return 0;
	}
}