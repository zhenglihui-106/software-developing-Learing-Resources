template<typename T>
void __merge(T array[], int l, int r, int mid)
{
	T *aux = new T[r - l + 1];
	for (int i = l; i <= r; i++)
		aux[i - 1] = array[i];

	int i = l, j = mid + 1;
	for (int k = l; k <= r; k++)
	{
		if (i > mid)
		{
			array[k] = aux[j - l]; j++;
		}
		else if (j > r)
		{
			array[k] = aux[i - l]; i++;
		}
		else if (aux[i-l]<aux[j-l])
		{
			array[k] = aux[i - l]; i++;
		}
		else
		{
			array[k] = aux[j - l]; j++;			
		}
	}

	delete aux;
}

template<typename T>
void __mergeSort(T array, int l, int r)
{
	if (l >= r)
		return;

	int mid = (l + r) / 2;
	__mergeSort(array, l, mid);
	__mergeSort(array, mid + 1, r);
	__merge(array, l, r, mid);
}

template<typename T>
void mergeSort(T arr[], int n)
{
	__mergeSort(arr, 0, n - 1);
}