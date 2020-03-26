#include "Control Arrays.h"
#include <iostream>
#include <ctime>
using namespace std;
int range;


void Filling(int arr[], const int size)
{
	srand(time(0));
	cout << "Enter the range to fill the array: ";
	cin >> range;
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % range;
	}

}

void ShowArray(int arr[], const int size)
{
	
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void FindingElement(int arr[], const int size)
{
	int number;
	cout << "Enter the number you want to find: ";
	cin >> number;
	for ( int i = 0; i < size; i++) {
		if (arr[i] == number) 
		{
			cout << i+1<<")" << arr[i] << endl;
		}
			
	}
	
		
	
}

void SortArrayBubble(int arr[], const int size)
{
	int SortDirection;
	cout << "Select the sorting direction: 1- ascending; 2 - descending" << endl;
	cin >> SortDirection;
	if (SortDirection = 1) {
		for (int i = 0; i < size-1; i++) {
			for (int j = 0; j < size - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					int tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		}

		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	else {
		for (int i = 0; i < size - 1; i++) {
			for (int j = 0; j < size - 1; j++) {
				if (arr[j] < arr[j + 1]) {
					int tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		}

		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}

void SortArraySelect(int arr[], const int size)
{
	int SortDirection2;
	cout << "Select the sorting direction: 1- ascending; 2 - descending" << endl;
	cin >> SortDirection2;
	if (SortDirection2 == 1) {
		for (int i = 0; i < size; i++) {
			int tmp = arr[0];
			for (int j = i + 1; j < size; j++) {
				if (arr[i] > arr[j]) {
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
			}
		}
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;

	}
	else {
		for (int i = size-1; i >=0; i--){
			int tmp = arr[size-1];
			for (int j = i - 1; j >=0; j--) {
				if (arr[i] < arr[j]) {
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
			}
		}
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

}

void SortArrayInsert(int arr[], const int size)
{
	int SortDirection3;
	cout << "Select the sorting direction: 1- ascending; 2 - descending" << endl;
	cin >> SortDirection3;
	if (SortDirection3 == 1) {
		for (int i = 1; i < size; i++) {
			int tmp = arr[i];
			int indexPrev = i - 1;
			while (indexPrev >= 0 && arr[indexPrev] > tmp)
			{
				arr[indexPrev + 1] = arr[indexPrev];
				arr[indexPrev] = tmp;
				indexPrev--;

			}
		}
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	else
	{
		for (int i = size - 2; i >= 0; i--) {
			int tmp = arr[i];
			int indexPrev = i + 1;
			while (indexPrev >=0 && arr[indexPrev]>tmp)
			{
				arr[indexPrev - 1] = arr[indexPrev];
				arr[indexPrev] = tmp;
				indexPrev++;
			}
		}
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;

	}
}

void Average(int arr[], const int size)
{
	int sum=0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	cout << "Average = " << sum / size << endl;
}

void Multiples_5(int arr[], const int size)
{
	for (int i = 0; i < size; i++) {
		if (arr[i] % 5 == 0) {
			cout << i+1 << ")" << arr[i] << endl;
		}
	}
}

void MoveElements(int arr[], const int size)
{
	int number;
	int ShiftedDirection;
	cout << "Enter how many items are shifted: ";
	cin >> number;
	cout << "Select a shift direction: 1 - left; 2 - right: ";
	cin >> ShiftedDirection;
	if (ShiftedDirection == 1) {
		for (int j = 1; j <= number; j++) {
			int tmp = arr[0];
			for (int i = 0; i < size-1; i++) {
				arr[i] = arr[i + 1];

			}
			arr[size - 1] = tmp;
		}
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	else 
	{
		for (int j = 1; j <= number; j++) {
			int tmp = arr[size - 1];
			for (int i = size - 1; i >= 0; i--) {
				arr[i] = arr[i - 1];
			}
			arr[0] = tmp;
		}
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;

	}

	
}




