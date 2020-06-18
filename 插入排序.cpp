思路：
/**
* 插入排序
* 1、确定插入排序的数，从第二个开始选择
* 2、选择插入排序的数，保存为num
* 3、计算num前一个数的索引
* 4、进行检查，如果num小于前面的数，则将前一个数往后移，若比前一个数大，则结束此次循环
* 5、结束时的位置保存num
template<typename T>
void InsertionSort(T array[], int n)
{
	for (int i = 1; i < n; i++)
	{
		T e = arr[i];
		int j = 1;
		for (int j = i; j>0&&arrar[j]>array[j-1]; j--)
		{
			array[j] = array[j-1];
			
		}
		array[j] = e;
	}
}
