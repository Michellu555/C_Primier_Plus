#include<stdio.h>
#include "func_12_test.h"



int call_time;



int critic(void)
{
	int num;
	printf("No luck, my friend. Try again.\n");
	scanf_s("%d", &num);
	return num;
}

//源代码文件应定义3个具有文件作用域、内部链接的变量。一个表示模式、一个表示距离、一个表示消耗的燃料。
//get_info()函数根据用户输入的模式提示用户输入相应数据，并将其储存到文件作用域变量中。
//show_info()函数根据设置的模式计算并显示油耗。可以假设用户输入的都是数值数据。
static int mode_t = 1;
static float distance, fuel_consume;

void set_mode(int num) 
{
	if (num <= 1)
	{
		mode_t = num;
	}
	else
	{
		while (getchar() != '\n')
		{
			continue;
		}
		if (mode_t)
		{
			printf("Invalid mode specified. Mode %d(US) used.\n", mode_t);
		}
		else
		{
			printf("Invalid mode specified. Mode %d(metric) used.\n", mode_t);
		}
	}
}

void get_info(void)
{
	if (mode_t)
	{
		printf("Enter distance traveled in miles: ");
		scanf_s("%f", &distance);
		printf("Enter fuelconsumed in gallons: ");
		scanf_s("%f", &fuel_consume);
	}
	else
	{
		printf("Enter distance traveled in kilometers: ");
		scanf_s("%f", &distance);
		printf("Enter fuelconsumed in litters: ");
		scanf_s("%f", &fuel_consume);
	}
}

void show_info(void)
{
	if (mode_t)
	{
		printf("Fule consumption is %.1f miles per gallon.\n", distance / fuel_consume);
	}
	else
	{
		printf("Fule consumption is %.2f liters per 100 km.\n", (fuel_consume / distance) * 100.0);
	}
}


int called_time(void)
{
	call_time++;
	return called_time;
}


