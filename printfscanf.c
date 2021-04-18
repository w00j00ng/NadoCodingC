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

	// scanf 키보드 입력을 받아서 저장
	int input;
	printf("값을 입력하세요: ");
	scanf_s("%d", &input); // &" input이라고 변수가 정의된 곳에 값을 입력받겠다.
	printf("입력값: %d\n", input);

	// 여러 값 받기
	int one, two, three;
	printf("3개의 정수를 입력하세요: ");
	scanf_s("%d %d %d", &one, &two, &three); // 정수형 값을 3개 받겠다
	printf("첫번째 값: %d\n", one);
	printf("두번째 값: %d\n", two);
	printf("세번째 값: %d\n", three);

	// 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
	char c = 'A';
	printf("%c\n", c);

	char str[256]; // 256개 공간을 만든다
	scanf_s("%s", str, sizeof(str)); // 문자열 입력받을 때는 &가 없어도 된다. 다만 크기를 명시해야 한다.
	printf("%s\n", str);

	return 0;
}