选择排序为每一趟选出最小的值：比如在一个长度为N的无序数组中，第一趟遍历N个数据，
找出其中最小的数值与第一个元素交换，
第二趟遍历剩下的N-1个数据，
找出其中最小的数值与第二个元素交换。。。。
第N-1遍历剩下的2个数据，找出其中最小的数值与第N-1元素交换，至此选择排序完成
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
