#include <stdio.h>

// 함수 선언
void p(int num);

int main(void)
{
	// function
	// 계산기
	int num = 2;
	// printf("num은 %d입니다\n", num); // 2
	p(num);

	// 2 + 3
	num = num + 3;
	// printf("num은 %d입니다\n", num); // 5
	p(num);

	// 5 - 1
	num -= 1; // num = num - 1;
	// printf("num은 %d입니다\n", num); // 4
	p(num);

	// 4 X 3은?
	num *= 3;
	// printf("num은 %d입니다\n", num); // 12
	p(num);

	// 12 / 6은?
	num /= 6;
	// printf("num은 %d입니다\n", num); // 2
	p(num);

	return 0;
}

// 함수 정의
void p(int num)
{
	printf("num은 %d입니다.\n", num);
}

/*반환형 함수이름(전달값)
{
	return 반환값;
}*/