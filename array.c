#include <stdio.h>

int main_array(void)
{
	//// 배열
	//int subway_array[3];
	//subway_array[0] = 30;
	//subway_array[1] = 45;
	//subway_array[2] = 25;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("지하철 %d호차에 %d명이 타고 있습니다.\n", i + 1, subway_array[i]);
	//}

	//// 값 설정 방법
	//int arr[10] = { 1, 5, 2, 4, 6, 1, 2, 3, 4, 5 };

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", arr[i]);
	//	if (i == 9)
	//	{
	//		printf("\n");
	//	}
	//}

	//// 값을 초기화하지 않을 경우
	///*int arr1[10];

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr1[i]); // -858993460
	//}*/

	//// 배열의 크기를 변수로 지정할 수 없다 (항상 상수로 선언)
	//// int size = 10;
	//// int arr[size]; // 오류 발생

	//int arr2[10] = { 1 , 2 }; // 첫 번째 값이 초기화되었다면 그 다음 값부터는 자동으로 '0'으로 초기화됨
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
	
	// 문자 vs 문자열
	char c = 'A';
	printf("%c\n", c); // A

	// 문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0'이 포함되어야 함
	char str[6] = "coding"; // [c][o][d][i][n][g]
	printf("%s\n", str); // coding儆儆儆儆儆儆?儆儆E?D逅

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

	// 영어는 1글자 : 1byte
	// 한글은 1글자 : 2byte
	// char 크기 : 1byte
	char kor[] = "나도코딩";
	printf("%s\n", kor); // 나도코딩
	printf("%d\n", sizeof(kor)); // 9

	char kor1 = '나';
	printf("%c\n", kor1); // ?

	char c_array[7] = { 'c', 'o', 'd', 'i', 'n', 'g' };
	printf("%s\n", c_array); // coding

	char c_array1[7] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0' };
	printf("%s\n", c_array1); // coding

	char c_array2[10] = { 'c', 'o', 'd', 'i', 'n', 'g' };
	printf("%s\n", c_array2); // coding

	for (int i = 0; i < sizeof(c_array2); i++)
	{
		printf("%c\n", c_array2[i]); // 남는 공간이 ' '로 채워짐
	}

	for (int i = 0; i < sizeof(c_array2); i++)
	{
		// ASCII 코드 값 출력
		printf("%d ", c_array2[i]); // 99 111 100 105 110 103 0 0 0 0
		if (i == sizeof(c_array2) - 1)
		{
			printf("\n");
		}
	}

	// 문자열 입력받기: 경찰서 조서 쓰기 예제
	/*char name[256];
	printf("이름이 뭐예요? ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);*/

	// 참고: ASCII 코드란 ANSI(미국표준협회)에서 제시한 표준 코드 체계이다.
	// 총 7 bit, 총 128개 코드 (0 ~ 127)
	// 문자: 아스키코드 정수값
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
		printf("아스키코드 정수 %d: %c\n", i, i);
	}

	return 0;
}