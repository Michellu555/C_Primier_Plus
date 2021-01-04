#include<stdio.h>
#include<limits.h>


char* itobs(int, char*);
void show_bstr(const char*);
int invert_end(int, int);



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