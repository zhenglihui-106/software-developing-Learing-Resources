#include<iostream>
using namespace std;

//ģʽ���㺯��
void calNum()
{
	int m, n, l, i = 0;
	double a = 0.8, b = 0.6, d = 0.5;
	for (m = 1; m < 13; m++)
	{
		for (n = 1; n < 10; n++)
		{
			for (l = 0; l < 9; l++)
			{
				if (1.5*sqrt(m*m / a / a + n * n / b / b + l * l / d / d) < 24.5)
				{
					i++;
					cout << "m= " << m << " n= " << n << " l= " << l << endl;
				}
			}
		}
	}
	cout << "ģʽ��Ϊ��" << i << endl;
	
}

int main()
{
	calNum();

	system("pause");
	return 0;
}