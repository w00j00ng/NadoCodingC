#include <stdio.h>

struct GameInfo {
	char * name;
	int year;
	int price;
	char * company;
};

int main(void)
{
	// [게임 출시]
	// 이름: 나도 게임
	// 발매년도: 2017년
	// 가격: 50원
	// 제작사: 나도 회사
	
	char * name = "나도게임";
	int year = 2017;
	int price = 50;
	char * company = "나도회사";
	
	// [또다른 게임 출시]
	// 이름: 너도게임
	// 발매년도: 2017년
	// 가격: 100원
	// 제작사: 너도회사
	
	char * name2 = "너도게임";
	int year2 = 2017;
	int price2 = 100;
	char * company2 = "너도회사";
	
	return 0;
}
