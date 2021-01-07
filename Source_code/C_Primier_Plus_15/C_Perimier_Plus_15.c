#include<stdio.h>
#include<limits.h>
#include<stdbool.h>


#define SOLID 0
#define DOTTED 1
#define DASHED 2
#define BLUE 4
#define GREEN 2
#define RED 1
#define BLACK 0
#define YELLOW (RED|GREEN)
#define MAGENTA (RED|BLUE)
#define CYAN (GREEN|BLUE)
#define WHITE (RED|GREEN|BLUE)
#define OPAQUE 0x1
#define FILL_BLUE 0x8
#define FILL_GREEN 0x4
#define FILL_RED 0x2
#define FILL_MASK 0xE
#define BORDER 0x100
#define BORDER_BLUE 0x800
#define BORDER_GREEN 0x400
#define BORDER_RED 0x400
#define BORDER_MASK 0xE00
#define B_SOLID 0
#define B_DOTTED 0x1000
#define B_DASHED 0x2000
#define STYLE_MASK 0x3000
const char* color[8] = { "black", "red", "green", "yellow", "blue", "magenta", "cyan", "white" };

struct box_props
{
	bool opaque : 1;
	unsigned int fill_color : 3;
	unsigned int : 4;
	bool show_border : 1;
	unsigned int border_color : 3;
	unsigned int border_style : 2;
	unsigned int : 2;
};

union Views
{
	struct box_props st_view;
	unsigned short us_view;
};

char* itobs(int, char*);
void show_bstr(const char*);
int invert_end(int, int);
void show_settings(const struct box_props* pb);
void show_settings1(unsigned short);




int main()
{
	//程序清单15.1
	//binbit.c -- 使用位操作显示二进制
	//char bin_str[CHAR_BIT * sizeof(int) + 1]; 
	//int number;
	//puts("Enter integers and see them in binary.(q to quit)");
	//puts("Non-numeric input terminates program.");
	//while (scanf("%d", &number) == 1)
	//{
	//	itobs(number, bin_str);
	//	printf("%d is ", number);
	//	show_bstr(bin_str);
	//	putchar('\n');
	//}
	//puts("Bye!");


	//程序清单15.3
	//invert4.c -- 使用位操作显示二进制
	//char bin_str[CHAR_BIT * sizeof(int) + 1];
	//int number;
	//puts("Enter integers and see them in binary.(q to quit)");
	//puts("Non-numeric input terminates program.");
	//while (scanf("%d", &number) == 1)
	//{
	//	itobs(number, bin_str);
	//	printf("%d is ", number);
	//	putchar('\n');
	//	show_bstr(bin_str);
	//	putchar('\n');
	//	number = invert_end(number, 4);
	//	printf("Inverting the last 4 bits gives\n");
	//	show_bstr(itobs(number, bin_str));
	//}
	//puts("Bye!");


	//程序清单15.3
	//fields.c -- 定义并使用字段
	//struct box_props box = { true, YELLOW, true, GREEN, DASHED };
	//printf("Original box settings:\n");
	//show_settings(&box);
	//box.opaque = false;
	//box.fill_color = WHITE;
	//box.border_color = MAGENTA;
	//box.border_style = SOLID;
	//printf("\nModiflied box settings:\n");
	//show_settings(&box);


	//程序清单15.4
	//dualview.c -- 位字段和按位运算符
	union Views box = { {true, YELLOW, true, GREEN, DASHED} };
	char bin_str[8 * sizeof(unsigned int) + 1];
	printf("Original box settings:\n");
	show_settings(&box.st_view);
	printf("\nBox settings using unsigned int view:\n");
	









	


	return 0;
}


char* itobs(int n, char* str)
{
	const static int size = CHAR_BIT * sizeof(int);
	for (int i = size - 1; i >= 0; i--, n >>= 1)
	{
		str[i] = (1 & n) + '0';
	}
	str[size] = '\0';
	return str;
}

void show_bstr(const char* str)
{
	int i = 0;
	while (str[i])
	{
		putchar(str[i]);
		if (++i % 4 == 0 && str[i])
		{
			putchar(' ');
		}
	}
}

int invert_end(int num, int bits)
{
	int mask = 0;
	int bitval = 1;
	while (bits-- > 0)
	{
		mask |= bitval;
		bitval <<= 1;
	}
	return num ^ mask; //异或
}

void show_settings(const struct box_props* pb)
{
	printf("Box is %s.\n", pb->opaque == true ? "opaque" : "transparent");
	printf("Border %s.\n", pb->show_border == true ? "shown" : "not shown");
	printf("The border color is %s.\n", color[pb->border_color]);
	printf("The border style is");
	switch (pb->border_style)
	{
	case SOLID: printf("solid.\n");
		break;
	case DOTTED: printf("dotted.\n");
		break;
	case DASHED: printf("dashed.\n");
		break;
	default: printf("unknow type.\n");
		break;
	}
}

void show_settings1(unsigned short us)
{
	printf("box is %s.\n", (us & OPAQUE) == OPAQUE ? "opaque" : "transparent");
	printf("The fill color is %s.\n", color[(us >> 1) & 07]);
	printf("Border %s.\n", (us & BORDER) == BORDER ? "shown" : "not shown");
	printf("The border style is ");
	switch (us & STYLE_MASK)
	{
	case B_SOLID: printf("solid.\n");
		break;
	case B_DOTTED: printf("dotted.\n");
		break;
	case B_DASHED: printf("dashed.\n");
		break;
	default: printf("unknown type.\n");
		break;
	}
	printf("The border color is %s.\n", color[(us >> 9) & 07]);
}