#include <stdio.h>

int main(void)
{
	// �迭
	int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 45;
	subway_array[2] = 25;

	for (int i = 0; i < 3; i++)
	{
		printf("����ö %dȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", i + 1, subway_array[i]);
	}

	// �� ���� ���
	int arr[10] = { 1, 5, 2, 4, 6, 1, 2, 3, 4, 5 };

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
		if (i == 9)
		{
			printf("\n");
		}
	}

	// ���� �ʱ�ȭ���� ���� ���
	/*int arr1[10];

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr1[i]); // -858993460
	}*/

	// �迭�� ũ�⸦ ������ ������ �� ���� (�׻� ����� ����)
	// int size = 10;
	// int arr[size]; // ���� �߻�

	int arr2[10] = { 1 , 2 }; // ù ��° ���� �ʱ�ȭ�Ǿ��ٸ� �� ���� �����ʹ� �ڵ����� '0'���� �ʱ�ȭ��
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]); // 1 2 0 0 0 0 0 0 0 0
		if (i == 9)
		{
			printf("\n");
		}
	}

	int arr3[] = { 1, 2 }; // arr[2] = { 1, 2 };
	for (int i = 0; i < 2; i++)
	{
		printf("%d ", arr3[i]); // 1 2
		if (i == 1)
		{
			printf("\n");
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr3[i]); // 1 2 - 858993460 - 858993460 10 - 858993460 - 858993460 1 2 0
		if (i == 9)
		{
			printf("\n");
		}
	}

	float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f ", arr_f[i]); // 1.00 2.00 3.00 0.00 0.00
		if (i == 4)
		{
			printf("\n");
		}
	}

	return 0;
}