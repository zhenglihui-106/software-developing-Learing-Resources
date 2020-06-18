、、、
#include <iostream>
#include <string>
using namespace std;

template<typename T>
void selectionSort(T array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int min_index = i;
		for (int j = i+1; j < n; j++)
		{
			
			if (array[j] < array[min_index])
				min_index = j;
		}
		swap(array[i], array[min_index]);
	}
}
