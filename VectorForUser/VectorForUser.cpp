#include "PCH.h"

int main()
{
	// Start. Input data of Vector
	srand(time(0));
	std::cout << "\n  Vector of numbers " << std::endl;
	// Size
	int size;
	std::cout << "\n> Input size of vector: ";
	std::cin >> size;
	// Range of numbers
	int min;
	int max;

	std::cout << "==========" << std::endl;
	std::cout << "\n> Input min number: ";
	std::cin >> min;
	std::cout << "\n> Input max number: ";
	std::cin >> max;
	// Create vector, filling it random numbers and display
	std::vector<int> vector;
	for (int i = 0; i < size; i++) {
		vector.push_back(rand() % (max - min) + min); // random numbers
	}

	std::cout << "\n  Vector with random numbers: " << std::endl;
	for (int i = 0; i < size; i++) {
		std::cout << " " << vector[i]; // display result
	}
	std::cout << std::endl;
	// (Selection Sort) Sorting vector and display 
	/*int minimum;
	int buff;
	for (int i = 0; i < vector.size() - 1; i++)
	{
		minimum = i;
		for (int j = i + 1; j < vector.size(); j++) {
			if (vector[i] < vector[minimum])
				minimum = j;
			std::swap(vector[minimum], vector[i]);
		}
	}*/ // 
	sort(vector.begin(), vector.end()); // Analog quick sort

	std::cout << "\n Sorted vector:" << std::endl;
	for (int i = 0; i < vector.size(); i++)	{
		std::cout << " " << vector[i];
	}
	// Finish ->
    std::cout << "\n\n> Programm finished (0_0) " << std::endl;
}