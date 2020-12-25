#include<stdio.h>

struct house
{
	float sqft;
	int rooms;
	int stories;
	char address[40];
};

int main()
{
	//复习题
	//1.下面的结构模板有什么问题：
	//struct test
	//{
	//	char itable;
	//	int num[20];
	//	char* togs;
	//};


	//2.下面是程序的一部分，输出的是什么？？
	//struct house fruzt = { 1560.0, 6, 1, "22 Spiffo Road" };
	//struct house* sign;
	//sign = &fruzt;
	//printf("%d %d\n", fruzt.rooms, sign->stories); //6，1
	//printf("%s\n", fruzt.address); // 22 Spiffo Road
	//printf("%c %c\n", sign->address[3], fruzt.address[4]); //S p


	//3.设计一个结构模板储存一个月份名，该月份名的3个字母缩写，该月的天数即月份号
	struct month
	{
		char month_name[10];
		char month_name_abbr[4];
		int month_days;
		int month_number;
	};
	struct month months[12] =
	{
		{"January", "jan", 31, 1},
		{"February", "feb", 28, 2},
		{"March", "mar", 31, 3},
		{"April", "arp", 30, 4},
		{"May","may", 31, 5},
		{"June", "jun", 30, 6},
		{"July", "jul", 31, 7},
		{"August", "aug", 31, 8},
		{"September", "sep", 30, 9},
		{"October", "oct", 31, 10},
		{"November", "nov", 30, 11},
		{"Devember", "dec", 31, 12}
	};


	return 0;
}
