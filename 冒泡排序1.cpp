template<typename T>
void BubbleSort(T array[], int n)
{
	for (int i = 0; i < n-1; i++)//外循环为排序趟数
	{
		for (int j = 0; j < n-i-1 ; j++)//内循环为每趟比较的次数
		{
			if (array[j + 1] < array[j])//相邻元素比较
			{
				T temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}