#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	srand(time(0));
 
	const int arrNum = 25655;
	int arr[arrNum];
	long double sum = 0;

	for (int x = 0; x < arrNum; x++) {
		arr[x] = 1 + (rand() % arrNum);
		cout << arr[x] << endl;
	}
	cout << endl;

	for (int x = 0; x < arrNum; x++) {
		sum += arr[x];
	}
	cout << "Sum: " << sum << endl << endl;

	double average = sum / arrNum;
	cout << "Average: " << average << endl;
	return 0;
}
