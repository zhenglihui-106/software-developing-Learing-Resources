template<typename T>
void InsertionSort(T array[], int n)
{
	for (int i = 1; i < n; i++)
	{
		T e = arr[i];
		int j = 1;
		for (int j = i; j>0; j--)
		{
			if (array[j-1] > e)
			{
				array[j] = array[j-1];
			}
			array[j] = e;
		}
	}
}