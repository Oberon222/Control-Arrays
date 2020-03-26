#include <iostream>
#include <ctime>
#include "Control Arrays.h"
using namespace std;

int main() {
	const int size = 100;
	int arr[size];
	int action;
	int actionSort;

	do
	{
		cout << "1. Fill in an array with random numbers" << endl;
		cout << "2. Display the array" << endl;
		cout << "3. Find the element in the array" << endl;
		cout << "4. Sort the array" << endl;
		cout << "5. Determine the average value of the array elements" << endl;
		cout << "6. Find the number of elements that are multiples of 5" << endl;
		cout << "7. Move the array elements" << endl;
		cout << "8. Exit" << endl;
		cin >> action;
		switch (action)
		{
		case 1:
		{
			Filling(arr, size);
			break;
		}
		case 2:
		{
			ShowArray(arr, size);
			break;
		}
		case 3:
		{
			FindingElement( arr, size);
			break;
		}
		case 4:
		{
			cout << "Select an array sorting method: 1- Bubble; 2 - Sampling; 3 - Insert" << endl;
			cin >> actionSort;
			switch (actionSort)
			{
			case 1:
			{
				SortArrayBubble(arr, size);
				break;
			}
			case 2:
			{
				SortArraySelect(arr, size);
				break;
			}
			case 3:
			{
				SortArrayInsert(arr,size);
				break;
			}
			}
			break;
		}
		case 5:
		{
			Average(arr, size);
			break;
		}
		case 6:
		{
			Multiples_5(arr,size);
			break;
		}
		case 7:
		{
			MoveElements(arr, size);
			break;
		}
		}

	} while (action != 8);


	system("pause");
	return 0;
}