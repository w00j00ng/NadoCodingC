#include <stdio.h>

void swap(int a, int b);
void swap_addr(int *a, int *b);
void changeArray(int* ptr);

int main_pointer(void)
{
	//// 포인터

	//// [철수]: 101호 -> 메모리 공간의 주소
	//// [영희]: 201호 -> 메모리 공간의 주소
	//// [민수]: 301호 -> 메모리 공간의 주소
	//// 각 문 앞에 '암호'가 걸려 있음
	//int 철수 = 1; // 암호: 1
	//int 영희 = 2; // 암호: 2
	//int 민수 = 3; // 암호: 3

	//printf("철수네 주소: %d, 암호: %d\n", &철수, 철수); // 철수네 주소: 7337888, 암호: 1 (실행할 때마다 주소가 달라짐)
	//printf("영희 주소: %d, 암호: %d\n", &영희, 영희); // 영희네 주소: 7337876, 암호: 2
	//printf("민수네 주소: %d, 암호: %d\n", &민수, 민수); // 민수네 주소: 7337864, 암호: 3
	//

	//// 미션맨!
	//
	//// 첫 번째 미션: 아파트의 각 집에 방문하여 문에 적힌 암호 확인
	//int * 미션맨; // 포인터 변수
	//미션맨 = &철수;
	//printf("미션맨이 방문하는 곳 주소: %d, 암호: %d\n", 미션맨, *미션맨); // 미션맨이 방문하는 곳 주소: 7337888, 암호: 1

	//미션맨 = &영희;
	//printf("미션맨이 방문하는 곳 주소: %d, 암호: %d\n", 미션맨, *미션맨); // 미션맨이 방문하는 곳 주소: 7337876, 암호: 2

	//미션맨 = &민수;
	//printf("미션맨이 방문하는 곳 주소: %d, 암호: %d\n", 미션맨, *미션맨); // 미션맨이 방문하는 곳 주소: 7337864, 암호: 3

	//// 두 번째 미션: 각 암호에 3을 곱해라
	//미션맨 = &철수;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨이 암호를 바꾼 곳 주소: %d, 암호: %d\n", 미션맨, *미션맨); // 미션맨이 암호를 바꾼 곳 주소: 7337888, 암호: 3

	//미션맨 = &영희;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨이 암호를 바꾼 곳 주소: %d, 암호: %d\n", 미션맨, *미션맨); // 미션맨이 암호를 바꾼 곳 주소: 7337876, 암호: 6

	//미션맨 = &민수;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨이 암호를 바꾼 곳 주소: %d, 암호: %d\n", 미션맨, *미션맨); // 미션맨이 암호를 바꾼 곳 주소: 7337864, 암호: 9

	//// 스파이
	//// 미션맨이 바꾼 암호에서 2를 빼라!
	//int * 스파이 = 미션맨;

	//printf("\n ... 스파이가 미션 수행하는 중 ... \n\n");
	//스파이 = &철수;
	//*스파이 = *스파이 - 2; // 철수 = 철수 - 2;
	//printf("스파이가 방문하는 곳 주소: %d, 암호: %d\n", 스파이, *스파이); // 스파이가 방문하는 곳 주소: 7337888, 암호: 1

	//스파이 = &영희;
	//*스파이 = *스파이 - 2;
	//printf("스파이가 방문하는 곳 주소: %d, 암호: %d\n", 스파이, *스파이); // 스파이가 방문하는 곳 주소: 7337876, 암호: 4

	//스파이 = &민수;
	//*스파이 = *스파이 - 2;
	//printf("스파이가 방문하는 곳 주소: %d, 암호: %d\n", 스파이, *스파이); // 스파이가 방문하는 곳 주소: 7337864, 암호: 7

	//printf("\n .. 철수 영희 민수는 집에 오고서는 바뀐 암호를 보고 깜놀 ... \n");
	//printf("철수네 주소: %d, 암호: %d\n", &철수, 철수); // 철수네 주소: 7337888, 암호: 1
	//printf("영희네 주소: %d, 암호: %d\n", &영희, 영희); // 영희네 주소: 7337876, 암호: 4
	//printf("민수네 주소: %d, 암호: %d\n", &민수, 민수); // 민수네 주소: 7337864, 암호: 7

	//// 참고로.. 미션맨이 사는 곳의 주소는.. &미션맨으로 확인
	//printf("미션맨의 주소는 %d\n", &미션맨); // 미션맨의 주소는 7337852
	//printf("스파이의 주소는 %d\n", &스파이); // 스파이의 주소는 7337840

	//// 배열은 포인터와 아주 가깝다
	//int arr[3] = { 5, 10, 15 };
	//int * ptr = arr;
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("배열 arr[%d]의 값: %d\n", i, arr[i]);
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("포인터 ptr[%d]의 값: %d\n", i, ptr[i]);
	//	// arr[i]의 값과 ptr[i]의 값이 같다.
	//	// 포인터의 값은 배열의 값을 그대로 가져온다.
	//}

	//// 포인터의 값을 바꿔보자
	//ptr[0] = 100;
	//ptr[1] = 200;
	//ptr[2] = 300;
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("배열 arr[%d]의 값: %d\n", i, arr[i]);
	//	// 아래의 문장은 위 문장과 동일한 문법이다.
	//	printf("배열 arr[%d]의 값: %d\n", i, *(arr + i));
	//	// arr은 arr이 처음 시작되는 주소값을 가지고 있다
	//	// *(arr + i)는 arr[i]의 값을 가져온다.
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("포인터 ptr[%d]의 값: %d\n", i, ptr[i]);
	//	printf("포인터 ptr[%d]의 값: %d\n", i, *(ptr + 1));
	//	// 배열의 값이 100, 200, 300으로 바뀐다.
	//	// 포인터가 각각 배열 요소에 가서 값을 바꾸었다는 것을 알 수 있다.
	//}
	//// *(arr + i) == arr[i]
	//// arr == arr 배열의 첫번째 값의 주소와 동일 == &arr[0]
	//printf("arr 자체의 값: %d\n", arr); // arr 자체의 값: 5832016
	//printf("arr[0]의 주소: %d\n", &arr[0]); // arr[0]의 주소: 5832016

	//printf("arr 자체의 값이 가지는 주소의 실제 값: %d\n", *arr); // arr 자체의 값이 가지는 주소의 실제 값: 100
	//// *arr은 *(arr + 0)과 같다
	//printf("arr[0]의 실제 값: %d\n", *&arr[0]); // arr[0]의 실제 값: 100

	//// *& 는 아무것도 없는 것과 같다. &은 주소이며 *는 그 주소의 값이기 때문에
	//// *& 는 서로 상쇄된다.
	//printf("arr[0]의 실제 값: %d\n", *&*&*&*&*&*&*&*&*&*&*&*&*&arr[0]); // arr[0]의 실제 값: 100
	//printf("arr[0]의 실제 값: %d\n", arr[0]); // arr[0]의 실제 값: 100
	
	// SWAP
	//int a = 10;
	//int b = 20;
	//printf("a의 주소: %d\n", &a); // a의 주소: 15727684
	//printf("b의 주소: %d\n", &b); // b의 주소: 15727672
	//// a와 b의 값을 바꿔보자
	//printf("Swap 함수 전 => a : %d, b: %d\n", a, b); // Swap 함수 전 => a : 10, b: 20
	//swap(a, b);                                      // Swap 함수 안 => a : 20, b: 10
	//printf("Swap 함수 후 => a : %d, b: %d\n", a, b); // Swap 함수 후 => a : 10, b: 20

	//// 값에 의한 복사 (Call by Value) -> 값만 복사한다는 의미

	//// 주소값을 넘기면? 메모리 공간에 있는 주소값 자체를 넘기면... 철수네처럼
	//printf("Swap_addr 함수 전 => a : %d, b: %d\n", a, b); // Swap_addr 함수 전 => a : 10, b: 20
	//swap_addr(&a, &b);                                    // (주소값 전달)Swap 함수 안 => a : 20, b: 10 
	//printf("Swap_addr 함수 후 => a : %d, b: %d\n", a, b); // Swap_addr 함수 후 => a : 20, b: 10
	
	// 배열일 때, arr2 자체가 주소
	int arr2[3] = { 10, 20, 30 };
	changeArray(arr2);
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", arr2[i]);
		if (i == 2)
		{
			printf("\n"); // 10 20 50
		}
	}

	// 아래의 코드 실행 시 위 코드와 같은 결과가 나온다
	int arr3[3] = { 10, 20, 30 };
	changeArray(&arr3[0]);
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", arr2[i]);
		if (i == 2)
		{
			printf("\n"); // 10 20 50
		}
	}

	return 0;
}

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	printf("Swap 함수 안 => a : %d, b: %d\n", a, b); // Swap 함수 안 => a : 20, b: 10
	printf("Swap 함수 안 a의 주소: %d\n", &a);       // Swap 함수 안 a의 주소: 15727456 (새로운 공간에 만들어짐)
	printf("Swap 함수 안 b의 주소: %d\n", &b);       // Swap 함수 안 b의 주소: 15727460 (새로운 공간에 만들어짐)
}

void swap_addr(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(주소값 전달)Swap 함수 안 => a : %d, b: %d\n", *a, *b);
}

void changeArray(int * ptr)
{
	ptr[2] = 50;
}