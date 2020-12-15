#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
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
	/*int num;
	printf("Please eneter a integer (q to quit): ");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		called_time();
		printf("The called_time function has been called %d times.\n", call_time);
	}*/



	//5.编写一个程序，生成100个1~10范围内的随机数，并以降序排列（可以把第11章的排序算法稍加改动，便可用于整数排序，这里仅对整数排序）。
	//生成随机数 → 录入到数组中 → 降序排列
	//生成随机数：rand，srand, time函数
	//录入到数组中
	//int ar[100];
	//srand((unsigned int)time(0)); //随机种子
	//for (int i = 0; i < 100; i++)
	//{
	//	ar[i] = rand() % 10 + 1;
	//}

	////排序
	//int temp;
	//for (int m = 0; m < 99; m++)
	//{
	//	for (int n = m + 1; n < 100; n++)
	//	{
	//		if (ar[m] < ar[n])
	//		{
	//			temp = ar[m];
	//			ar[m] = ar[n];
	//			ar[n] = temp;
	//		}
	//	}
	//}
	//
	////打印数组
	//for (int j = 0; j < 100; j++)
	//{
	//	printf("%-4d", ar[j]);
	//	if ((j + 1) % 10 == 0)
	//	{
	//		putchar('\n');
	//	}
	//}
	
	

	//6.编写一个程序，生成1000个1~10范围内的随机数。不用保存或打印这些数字，仅打印每个数出现的次数。
	//用10个不同的种子值运行，生成的数字出现的次数是否相同？
	//可以使用本章自定义的函数或ANSIC的rand()和srand()函数，它们的格式相同。
	//这是一个测试特定随机数生成器随机性的方法。
	//产生1000随机数
	/*int num;
	int count[10];
	for (int m = 0; m < 10; m++)
	{
		count[m] = 0;
	}
	for (int i = 0; i < 1000; i++)
	{
		num = rand() % 10 + 1;
		count[num - 1]++;
		
	}
	for (int j = 0; j < 10; j++)
	{
		printf("Number %d has appeared %d times.\n", j + 1, count[j]);
	}*/
	
	
	//7.编写一个程序，按照程序清单12.13输出示例后面讨论的内容，修改该程序。使其输出类似：
	//Enter the number of sets; enter q to stop : 18
	//How many sides and how many dice ? 6 3
	//Here are 18 sets of 3 6-sided throws.
	//12 10 6 9 8 14 8 15 9 14 12 17 11 7 10 13 8 14
	//How many sets ? Enter q to stop : q
	//输入扔骰子的次数 → 输入骰子面数和骰子数并扔骰子并汇总单次点数 → 打印点数
	/*printf("Enter the number of set; enter q to stop: ");
	while (scanf("%d", &sets))
	{
		roll(sets);
		printf("How many sets? Enter q to stop: ");
	}*/
	

	//8.下面是程序的一部分，请提供make_array()和show_array()函数的定义，完成该程序。
	//make_array()函数接受两个参数，第1个参数是int类型数组的元素个数，第2个参数是要赋给每个元素的值。
	//该函数调用malloc()创建一个大小合适的数组，将其每个元素设置为指定的值，并返回一个指向该数组的指针。
	//show_array()函数显示数组的内容，一行显示8个数。
	/*int* pa;
	int size;
	int value;
	printf("Enter the number of elements: ");
	while (scanf("%d", &size) == 1 && size > 0)
	{
		printf("Enter the initialization value: ");
		scanf("%d", &value);
		pa = make_array(size, value);
		if (pa)
		{
			show_array(pa, size);
			free(pa);
		}
		printf("Enter the number of elements (<1 to quit): ");
	}
	printf("Done.\n");*/



	//9.编写一个符合以下描述的函数。首先，询问用户需要输入多少个单词。然后，接收用户输入的单词，并显示出来，
	//使用malloc()并回答第1个问题（即要输入多少个单词）,创建一个动态数组，该数组内含相应的指向char的指针
	//（注意，由于数组的每个元素都是指向char的指针，所以用于储存malloc()返回值的指针应该是一个指向指针的指针，且它所指向的指针指向char)。
	//在读取字符串时，该程序应该把单词读入一个临时的char数组，使用malloc()分配足够的存储空间来储存单词，
	//并把地址存入该指针数组(该数组中每个元素都是指向char的指针）。
	//然后，从临时数组中把单词拷贝到动态分配的存储空间中。因此，有一个字符指针数组，每个指针都指向一个对象，该对象的大小正好能容纳被储存的特定单词。
	//下面是该程序的一个运行示例：
	/*How many words do you wish to enter ? 5
	Enter 5 words now :
	I enjoyed doing this exerise
	Here are your words :
	I
	enjoyed
	doing
	this
	exercise*/
	int size;
	char ch[50];
	printf("How many words do you wish to enter? ");
	scanf("%d", &size);
	while (getchar() != '\n')
	{
		continue;
	}
	printf("Enter %d words now: \n", size);


	char** st;
	st = (char**)malloc(size * sizeof(char*));
	for (int i = 0; i < size; i++) //为每个单词分配空间
	{
		scanf("%50s", ch); //读入字符串
		st[i] = (char*)malloc((strlen(ch) + 1) * sizeof(char));
		strncpy(st[i], ch, strlen(ch));
		st[i][strlen(ch)] = '\0';
	}

	printf("Here are your words:\n");
	for (int m = 0; m < size; m++)
	{
		puts(st[m]);
	}
	free(st);
	












	return 0;
}


