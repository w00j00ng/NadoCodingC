#include <stdio.h>

int main_array(void)
{
	//// �迭
	//int subway_array[3];
	//subway_array[0] = 30;
	//subway_array[1] = 45;
	//subway_array[2] = 25;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("����ö %dȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", i + 1, subway_array[i]);
	//}

	//// �� ���� ���
	//int arr[10] = { 1, 5, 2, 4, 6, 1, 2, 3, 4, 5 };

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", arr[i]);
	//	if (i == 9)
	//	{
	//		printf("\n");
	//	}
	//}

	//// ���� �ʱ�ȭ���� ���� ���
	///*int arr1[10];

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr1[i]); // -858993460
	//}*/

	//// �迭�� ũ�⸦ ������ ������ �� ���� (�׻� ����� ����)
	//// int size = 10;
	//// int arr[size]; // ���� �߻�

	//int arr2[10] = { 1 , 2 }; // ù ��° ���� �ʱ�ȭ�Ǿ��ٸ� �� ���� �����ʹ� �ڵ����� '0'���� �ʱ�ȭ��
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", arr2[i]); // 1 2 0 0 0 0 0 0 0 0
	//	if (i == 9)
	//	{
	//		printf("\n");
	//	}
	//}

	//int arr3[] = { 1, 2 }; // arr[2] = { 1, 2 };
	//for (int i = 0; i < 2; i++)
	//{
	//	printf("%d ", arr3[i]); // 1 2
	//	if (i == 1)
	//	{
	//		printf("\n");
	//	}
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", arr3[i]); // 1 2 - 858993460 - 858993460 10 - 858993460 - 858993460 1 2 0
	//	if (i == 9)
	//	{
	//		printf("\n");
	//	}
	//}

	//float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%.2f ", arr_f[i]); // 1.00 2.00 3.00 0.00 0.00
	//	if (i == 4)
	//	{
	//		printf("\n");
	//	}
	//}
	
	// ���� vs ���ڿ�
	char c = 'A';
	printf("%c\n", c); // A

	// ���ڿ� ������ '��'�� �ǹ��ϴ� NULL ���� '\0'�� ���ԵǾ�� ��
	char str[6] = "coding"; // [c][o][d][i][n][g]
	printf("%s\n", str); // coding������������?����E?D��

	char str1[7] = "coding"; // [c][o][d][i][n][g][\0]
	printf("%s\n", str1); // coding

	char str2[7] = "coding\0"; // [c][o][d][i][n][g][\0]
	printf("%s\n", str2); // coding

	char str3[] = "coding";
	printf("%s\n", str3); // coding
	printf("%d\n", sizeof(str3)); // 7
	printf("%d\n", str3[6]); // 0
	printf("%c\n", str3[6]); // ' '

	for (int i = 0; i < sizeof(str3); i++)
	{
		if (i == sizeof(str3) - 1)
		{
			printf("\n"); // c o d i n g
			break;
		}
		printf("%c ", str3[i]);
	}

	for (int i = 0; i < sizeof(str3); i++)
	{
		if (i == sizeof(str3) - 1)
		{
			printf("%d\n", str3[i]); // c o d i n g 0
			break;
		}
		printf("%c ", str3[i]);
	}

	// ����� 1���� : 1byte
	// �ѱ��� 1���� : 2byte
	// char ũ�� : 1byte
	char kor[] = "�����ڵ�";
	printf("%s\n", kor); // �����ڵ�
	printf("%d\n", sizeof(kor)); // 9

	char kor1 = '��';
	printf("%c\n", kor1); // ?

	char c_array[7] = { 'c', 'o', 'd', 'i', 'n', 'g' };
	printf("%s\n", c_array); // coding

	char c_array1[7] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0' };
	printf("%s\n", c_array1); // coding

	char c_array2[10] = { 'c', 'o', 'd', 'i', 'n', 'g' };
	printf("%s\n", c_array2); // coding

	for (int i = 0; i < sizeof(c_array2); i++)
	{
		printf("%c\n", c_array2[i]); // ���� ������ ' '�� ä����
	}

	for (int i = 0; i < sizeof(c_array2); i++)
	{
		// ASCII �ڵ� �� ���
		printf("%d ", c_array2[i]); // 99 111 100 105 110 103 0 0 0 0
		if (i == sizeof(c_array2) - 1)
		{
			printf("\n");
		}
	}

	// ���ڿ� �Է¹ޱ�: ������ ���� ���� ����
	/*char name[256];
	printf("�̸��� ������? ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);*/

	// ����: ASCII �ڵ�� ANSI(�̱�ǥ����ȸ)���� ������ ǥ�� �ڵ� ü���̴�.
	// �� 7 bit, �� 128�� �ڵ� (0 ~ 127)
	// ����: �ƽ�Ű�ڵ� ������
	// 0: 48, A: 65, a: 97

	printf("%c\n", 'a'); // a
	printf("%d\n", 'a'); // 97

	printf("%c\n", 'A'); // A
	printf("%d\n", 'A'); // 65

	printf("%c\n", '0'); // 0
	printf("%d\n", '0'); // 48

	printf("%c\n", ' '); // ' '
	printf("%d\n", ' '); // 32

	printf("%c\n", '\0'); // ' '
	printf("%d\n", '\0'); // 0

	printf("========================\n");
	for (int i = 0; i < 128; i++)
	{
		printf("�ƽ�Ű�ڵ� ���� %d: %c\n", i, i);
	}

	return 0;
}