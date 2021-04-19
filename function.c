#include <stdio.h>

// 함수 선언
void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);
int apple(int total, int eaten);

int main(void)
{
	//// function
	//// 계산기
	//int num = 2;
	//// printf("num은 %d입니다\n", num); // 2
	//p(num);

	//// 2 + 3
	//num = num + 3;
	//// printf("num은 %d입니다\n", num); // 5
	//p(num);

	//// 5 - 1
	//num -= 1; // num = num - 1;
	//// printf("num은 %d입니다\n", num); // 4
	//p(num);

	//// 4 X 3은?
	//num *= 3;
	//// printf("num은 %d입니다\n", num); // 12
	//p(num);

	//// 12 / 6은?
	//num /= 6;
	//// printf("num은 %d입니다\n", num); // 2
	//p(num);

	// 함수 종류
	// 반환값이 없는 함수
	function_without_return();

	// 반환값이 있는 함수
	int ret = function_with_return();
	p(ret);

	// 파라미터(전달값)이 없는 함수
	function_without_params();

	// 파라미터(전달값)이 있는 함수
	function_with_params(31, 25, 45);

	// 파라미터(전달값)도 받고, 반환값도 보내주는 함수
	// 5개의 사과 중에서 2개를 먹었다.
	printf("사과 %d개 중에 %d개를 먹으면? %d개가 남아요\n", 5, 2, apple(5, 2));

	return 0;
}

// 함수 정의
void p(int num)
{
	printf("num은 %d입니다.\n", num);
}

void function_without_return()
{
	printf("반환값이 없는 함수입니다.\n");
}

int function_with_return()
{
	printf("반환값이 있는 함수입니다.\n");
	return 10;
}

void function_without_params()
{
	printf("전달값이 없는 함수입니다\n");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("전달값이 있는 함수이며, 전달받은 값은 %d, %d, %d입니다.\n", num1, num2, num3);
}

int apple(int total, int eaten)
{
	printf("전달값과 반환값이 있는 함수입니다.\n");
	return total - eaten;
}

/*반환형 함수이름(전달값)
{
	return 반환값;
}*/