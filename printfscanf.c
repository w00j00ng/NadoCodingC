#include <stdio.h>

int main(void)
{
	// ������ ������ ���� ����
	int age = 12;
	printf("%d\n", age);

	age = 13;
	printf("%d\n", age);

	// �Ǽ��� ������ ���� ����
	float f = 46.5f;
	printf("%f\n", f); // 46.500000
	printf("%.2f\n", f); // 46.50

	double d = 4.428;
	printf("%lf\n", d); // 4.428000
	printf("%.2lf\n", d); // 4.43

	// ���
	const int YEAR = 1994;
	printf("�¾ �⵵: %d\n", YEAR);
	// YEAR = 2001;

	// ����
	int add = 3 + 7; // 10
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7);
	printf("%d X %d = %d\n", 31, 79, 31 * 79);

	// scanf Ű���� �Է��� �޾Ƽ� ����
	int input;
	printf("���� �Է��ϼ���: ");
	scanf_s("%d", &input); // &" input�̶�� ������ ���ǵ� ���� ���� �Է¹ްڴ�.
	printf("�Է°�: %d\n", input);

	// ���� �� �ޱ�
	int one, two, three;
	printf("3���� ������ �Է��ϼ���: ");
	scanf_s("%d %d %d", &one, &two, &three); // ������ ���� 3�� �ްڴ�
	printf("ù��° ��: %d\n", one);
	printf("�ι�° ��: %d\n", two);
	printf("����° ��: %d\n", three);

	// ����(�� ����), ���ڿ�(�� ���� �̻��� ���� ����)
	char c = 'A';
	printf("%c\n", c);

	char str[256]; // 256�� ������ �����
	scanf_s("%s", str, sizeof(str)); // ���ڿ� �Է¹��� ���� &�� ��� �ȴ�. �ٸ� ũ�⸦ ����ؾ� �Ѵ�.
	printf("%s\n", str);

	return 0;
}