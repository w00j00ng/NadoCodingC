#include <stdio.h>

int main(void)
{
	//// ++ ������
	//int a = 10;
	//printf("a�� %d\n", a++); // 10 ������ ���� �� ���Ѵ�
	//printf("a�� %d\n", ++a); // 12 ������ �ϰ� ���� ������ ������
	//printf("a�� %d\n", a);   // 12

	//int num1 = 1;
	//printf("Hello World \%d\n", num1++);
	//printf("Hello World \%d\n", num1++);
	//printf("Hello World \%d\n", num1++);
	//printf("Hello World \%d\n", num1++);
	//printf("Hello World \%d\n", num1++);
	//printf("Hello World \%d\n", num1++);
	//printf("Hello World \%d\n", num1++);
	//printf("Hello World \%d\n", num1++);
	//printf("Hello World \%d\n", num1++);
	//printf("Hello World \%d\n", num1++);

	//// �ݺ���
	//// for, while, do while

	//// for (����; ����; ����) { }
	//for (int i = 1; i <= 10; i++)
	//{
	//	printf("Hello World%d\n", i);
	//}
	//
	//// while (����) { }
	//int num2 = 1;
	//while (num2 <= 10)
	//{
	//	printf("Hello World %d\n", num2++);
	//}

	//// do { } while (����);
	//int num3 = 1;
	//do {
	//	printf("Hello World %d\n", num3++);
	//} while (num3 <= 10);
	//

	//// 2�� �ݺ���
	//for (int i = 1; i <= 3; i++)
	//{
	//	printf("ù ��° �ݺ���: %d\n", i);
	//	for (int j = 1; j <= 5; j++)
	//	{
	//		printf("  �� ���� �ݺ���: %d\n", j);
	//	}
	//}

	//// ������
	//for (int i = 1; i < 10; i++)
	//{
	//	printf("%d�� ���\n", i);
	//	for (int j = 1; j < 10; j++)
	//	{
	//		printf("  %d X %d = %d\n", i, j, i * j);
	//	}
	//}

	//// �� ž �׸���
	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < i + 1; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = i; j <= 5; j++)
	//	{
	//		printf(" ");
	//	}
	//	for (int j = 0; j < i + 1; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	// �Ƕ�̵带 �׾ƶ� - ������Ʈ
	int floor;
	printf("�� ������ �װڴ���? ");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = i; j < floor - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}