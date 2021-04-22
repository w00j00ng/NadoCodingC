#include <stdio.h>

int main(void)
{
	// 다차원 배열 Multidimensional Array
	//int i; // 하나의 메모리 차지
	
	//int arr[5]; // 5개 메모리 차지
	// [0][1][2][3][4]
	
	//int arr2[2][5]; // 5개짜리가 2개
	// [0][0], [0][1], [0][2], [0][3], [0][4] -> ex) arr2[0][0]
	
	// [1][0], [1][1], [1][2], [1][3], [1][4] -> ex) arr2[1][4]
	
	//int arr3[4][2]; // 2개짜리가 4개
	// [0][0], [0][1] -> ex) arr3[0][1] 
	
	// [1][0], [1][1]
	
	// [2][0], [2][1]
	
	// [3][0], [3][1]
	
	//int arr4[3][2][4]; // (4개짜리가 2개)가 3개
	// [0][0][0], [0][0][1], [0][0][2], [0][0][3]
	// [0][1][0], [0][1][1], [0][1][2], [0][1][3]
	
	// [1][0][0], [1][0][1], [1][0][2], [1][0][3]
	// [1][1][0], [1][1][1], [1][1][2], [1][1][3]
	
	// [2][0][0], [2][0][1], [2][0][2], [2][0][3]
	// [2][1][0], [2][1][1], [2][1][2], [2][1][3]
	
//	int arr[5] = { 0, 1, 2, 3, 4 };
//	int arr2[2][5] = { 
//		{ 0, 1, 2, 3, 4 }, 
//		{ 10, 11, 12, 13, 14 } 
//	};
	int arr3[4][2] = { 
		{0, 1}, 
		{10, 11}, 
		{20, 21}, 
		{30, 31} 
	};
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("2차원배열 (%d, %d)의 값: %d\n", i, j, arr3[i][j]);
		}
		printf("\n");
	}
	
	int arr4[3][3][3] = { 
		{ 
			{ 0, 1, 2 }, 
			{ 10, 11, 12 }, 
			{ 20, 21, 22 } 
		}, 
		{ 
			{ 100, 101, 102 }, 
			{ 110, 111, 112 }, 
			{ 120, 121, 122 } 
		}, 
		{ 
			{ 200, 201, 202 }, 
			{ 210, 211, 212 }, 
			{ 220, 221, 222 } 
		}
	};
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				printf("3차원배열 (%d, %d, %d)의 값: %d\n", i, j, k, arr4[i][j][k]);	
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}

