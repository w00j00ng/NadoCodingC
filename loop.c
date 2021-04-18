#include <stdio.h>

int main(void)
{
	//// ++ 연산자
	//int a = 10;
	//printf("a는 %d\n", a++); // 10 문장이 끝난 뒤 더한다
	//printf("a는 %d\n", ++a); // 12 연산을 하고 나서 문장을 끝낸다
	//printf("a는 %d\n", a);   // 12

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

	//// 반복문
	//// for, while, do while

	//// for (선언; 조건; 증감) { }
	//for (int i = 1; i <= 10; i++)
	//{
	//	printf("Hello World%d\n", i);
	//}
	//
	//// while (조건) { }
	//int num2 = 1;
	//while (num2 <= 10)
	//{
	//	printf("Hello World %d\n", num2++);
	//}

	//// do { } while (조건);
	//int num3 = 1;
	//do {
	//	printf("Hello World %d\n", num3++);
	//} while (num3 <= 10);
	//

	//// 2중 반복문
	//for (int i = 1; i <= 3; i++)
	//{
	//	printf("첫 번째 반복문: %d\n", i);
	//	for (int j = 1; j <= 5; j++)
	//	{
	//		printf("  두 번재 반복문: %d\n", j);
	//	}
	//}

	//// 구구단
	//for (int i = 1; i < 10; i++)
	//{
	//	printf("%d단 계산\n", i);
	//	for (int j = 1; j < 10; j++)
	//	{
	//		printf("  %d X %d = %d\n", i, j, i * j);
	//	}
	//}

	//// 별 탑 그리기
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

	// 피라미드를 쌓아라 - 프로젝트
	int floor;
	printf("몇 층으로 쌓겠느냐? ");
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