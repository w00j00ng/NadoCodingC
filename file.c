#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

# define MAX 10000
int main(void)
{
	// 파일 입출력
	// 파일에 어떤 데이터를 저장,
	// 파일에 저장된 데이터를 불러오기
	
	// fputs, fgets 한 쌍
	char line[MAX]; // char line[10000]
	FILE * file = fopen("c:\\projects\\nadoc\\test1.txt", "wb"); // r 읽기 전용, w 쓰기 전용, a 덧붙임, b 바이너리, t 텍스트
	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}
	
	fputs("fputs 를 이용해서 글을 적어볼게요\n", file);
	fputs("잘 적히는지 확인해주세요\n", file);
	
	// 파일을 열고 나서 닫지 않은 상태에서 어떤 프로그램에 문제가 생기면?
	// 데이터 손실 발생 가능! 그래서 항상 파일은 닫아주는 습관을 들여주세요
	fclose(file); // 파일 저장하고 닫음
	
	
	// fprinf, fscanf 한 쌍
	
	
	
	return 0;
}
