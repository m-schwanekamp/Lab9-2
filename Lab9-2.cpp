//Lab9-2
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
bool isSortedIncreasing(int values[], int size);
bool isSortedDecreasing(int values[], int size);
bool hasAdjacentDuplicates(int values[], int size);
bool hasDuplicates(int values[], int size);

int main() {
	int values[6], i;

	for (i = 0; i < 6; i++) {
		cout << "Enter integer #" << i << " ";
		cin >> values[i];
	}

	if (isSortedIncreasing(values, 6) == true) {
		cout << "The data are increasing.\n";
	}
	else cout << "The data are not increasing.\n";

	if (isSortedDecreasing(values, 6) == true) {
		cout << "The data are decreasing.\n";
	}
	else cout << "The data are not decreasing.\n";

	if (hasAdjacentDuplicates(values, 6) == true) {
		cout << "The data has adjacent duplicates.\n";
	}
	else cout << "The data does not have adjacent duplicates.\n";

	if (hasDuplicates(values, 6) == true) {
		cout << "The data has duplicates.\n";
	}
	else cout << "The data does not have duplicates.\n";
}

bool isSortedIncreasing(int values[], int size) {
	bool result = false;
	if (values[0] <= values[1] && values[1] <= values[2] && values[2] <= values[3]
		&& values[3] <= values[4] && values[4] <= values[5]) {
		return true;
	}
	else return false;
}

bool isSortedDecreasing(int values[], int size) {
	bool result = false;
	if (values[0] >= values[1] && values[1] >= values[2] && values[2] >= values[3]
		&& values[3] >= values[4] && values[4] >= values[5]) {
		return true;
	}
	else return false;
}

bool hasAdjacentDuplicates(int values[], int size) {
	bool result = false;
	if (values[0] == values[1] || values[1] == values[2] || values[2] == values[3]
		|| values[3] == values[4] || values[4] == values[5]) {
		return true;
	}
	else return false;
}

bool hasDuplicates(int values[], int size) {
	bool result = false;
	if (values[0] == values[1] || values[0] == values[2] || values[0] == values[3]
		|| values[0] == values[4] || values[0] == values[5]) {
		return true;
	}
	if (values[1] == values[0] || values[1] == values[2] || values[1] == values[3]
		|| values[1] == values[4] || values[1] == values[5]) {
		return true;
	}
	if (values[2] == values[1] || values[2] == values[0] || values[2] == values[3]
		|| values[2] == values[4] || values[2] == values[5]) {
		return true;
	}
	if (values[3] == values[1] || values[3] == values[2] || values[3] == values[0]
		|| values[3] == values[4] || values[3] == values[5]) {
		return true;
	}
	if (values[4] == values[1] || values[4] == values[2] || values[4] == values[3]
		|| values[4] == values[0] || values[4] == values[5]) {
		return true;
	}
	if (values[5] == values[1] || values[5] == values[2] || values[5] == values[3]
		|| values[5] == values[4] || values[5] == values[0]) {
		return true;
	}
	else return false;
}