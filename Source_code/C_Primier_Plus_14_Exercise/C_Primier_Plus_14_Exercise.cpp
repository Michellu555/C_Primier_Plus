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
	//��ϰ��
	//1.����Ľṹģ����ʲô���⣺
	//struct test
	//{
	//	char itable;
	//	int num[20];
	//	char* togs;
	//};


	//2.�����ǳ����һ���֣��������ʲô����
	//struct house fruzt = { 1560.0, 6, 1, "22 Spiffo Road" };
	//struct house* sign;
	//sign = &fruzt;
	//printf("%d %d\n", fruzt.rooms, sign->stories); //6��1
	//printf("%s\n", fruzt.address); // 22 Spiffo Road
	//printf("%c %c\n", sign->address[3], fruzt.address[4]); //S p


	//3.���һ���ṹģ�崢��һ���·��������·�����3����ĸ��д�����µ��������·ݺ�
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
