template<typename T>
void BubbleSort(T array[], int n)
{
	for (int i = 0; i < n-1; i++)//��ѭ��Ϊ��������
	{
		for (int j = 0; j < n-i-1 ; j++)//��ѭ��Ϊÿ�˱ȽϵĴ���
		{
			if (array[j + 1] < array[j])//����Ԫ�رȽ�
			{
				T temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}