#include <stdio.h>

int main(void)
{
	// 정수형 변수에 대한 예제
	int age = 12;
	printf("%d\n", age);

	age = 13;
	printf("%d\n", age);

	// 실수형 변수에 대한 예제
	float f = 46.5f;
	printf("%f\n", f); // 46.500000
	printf("%.2f\n", f); // 46.50

	double d = 4.428;
	printf("%lf\n", d); // 4.428000
	printf("%.2lf\n", d); // 4.43

	// 상수
	const int YEAR = 1994;
	printf("태어난 년도: %d\n", YEAR);
	// YEAR = 2001;

	// 연산
	int add = 3 + 7; // 10
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7);
	printf("%d X %d = %d\n", 31, 79, 31 * 79);
	return 0;
}