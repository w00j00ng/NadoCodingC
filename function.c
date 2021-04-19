#include <stdio.h>
int main(void)
{
	// function
	// 계산기
	int num = 2;
	printf("num은 %d입니다\n", num); // 2

	// 2 + 3
	num = num + 3;
	printf("num은 %d입니다\n", num); // 5

	// 5 - 1
	num -= 1; // num = num - 1;
	printf("num은 %d입니다\n", num); // 4

	// 4 X 3은?
	num *= 3;
	printf("num은 %d입니다\n", num); // 12

	// 12 / 6은?
	num /= 6;
	printf("num은 %d입니다\n", num); // 2

	return 0;
}