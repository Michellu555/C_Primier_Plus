#include<stdio.h>
#include "func_12_test.h"







int main()
{
	//1.不使用全局变量，重写程序清单12.4。
	/*int units;
	printf("How many pounds to a firkin of butter?\n");
	scanf_s("%d", &units);
	while (units != 56)
	{
		units = critic();
	}
	printf("You must have looked it up!\n");*/



	//2.在美国，通常以英里/加仑来计算油耗；在欧洲，以升/100公里来计算。
	//下面是程序的一部分，提示用户选择计算模式（美制或公制）, 然后接收数据并计算油耗。
	//如果用户输入了不正确的模式，程序向用户给出提示消息并使用上一次输入的正确模式。
	//请提供pe12-2a.h头文件和pe12-2a.c源文件。
	//源代码文件应定义3个具有文件作用域、内部链接的变量。一个表示模式、一个表示距离、一个表示消耗的燃料。
	//get_info()函数根据用户输入的模式提示用户输入相应数据，并将其储存到文件作用域变量中。
	//show_info()函数根据设置的模式计算并显示油耗。可以假设用户输入的都是数值数据。
	//pe12-2b.c
	/*int mode;
	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf_s("%d", &mode);
	while (mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("Enter 0 for metric mode, 1 for US mode");
		printf("(-1 to quit): ");
		scanf_s("%d", &mode);
	}
	printf("Done.\n");*/



	//4.在一个循环中编写并测试一个函数，该函数返回它被调用的次数
	int num;
	printf("Please eneter a integer (q to quit): ");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		called_time();
		printf("The called_time function has been called %d times.\n", call_time);
	}
	

















	return 0;
}


