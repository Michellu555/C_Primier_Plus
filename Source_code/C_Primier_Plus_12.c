#include<stdio.h>
#include<string.h>
#include<stdlib.h> //为srand()提供原型
#include<time.h> //为time()提供原型
#include "diceroll.h" //为roll_n_dice()提供原型，为roll_count变量提供声明





void trystat(void); 
void critic(void);
void report_count();
extern void accumulate(int k); //调用外部函数
extern unsigned int rand0(void); //调用外部函数
extern void srand1(unsigned int x);
extern int rand1(void);







int nuits = 0; //定义外部变量
int count = 0; //文件作用域，外部链接
int static_store = 30;
const char* pcg = "String Literal";




int main()
{
	//程序清单12.1
	//hiding.c -- 内层块和外层块定义相同的变量
	//int x = 30; //原始的x
	//printf("x in outer block: %d at %p\n", x, &x);
	//{
	//	int x = 77; //新的x，隐藏了原来的x
	//	printf("x in inner block: %d at %p\n", x, &x);
	//}
	//printf("x in outer block: %d at %p\n", x, &x); //从内层块出来，外层块起作用
	//while (x++ < 33) //此次为外层块的x
	//{
	//	int x = 100; //此处为新的内存块的x
	//	x++;
	//	printf("x in while loop: %d at %p\n", x, &x);
	//}
	//printf("x in outer block: %d at %p\n", x, &x); //外层块的x
	

	//程序清单12.2
	//forc99.c -- 新的C99块规则
	//int n = 8; //外层块
	//printf(" Initially, n = %d at %p\n", n, &n);
	//for (int n = 1; n < 3; n++) //内层块1
	//printf(" loop 1: n = %d at %p\n", n, &n);

	//printf("After loop 1, n = %d at %p\n", n, &n);
	//for (int  n = 1; n < 3; n++) //内层块2
	//{
	//	printf("loop 2 index n = %d at %p\n", n, &n);
	//	int n = 6;
	//	printf(" loop 2: n = %d at %p\n", n, &n);
	//	n++;
	//}
	//printf("After loop 2, n = %d at %p\n", n, &n);



	//程序清单12.3
	//loc_stat.c -- 使用局部静态变量，块作用域静态变量
	//int count; //块作用域，自动变量
	//for (count = 1; count <= 3; count++)
	//{
	//	printf("Here comes iteration %d:\n", count);
	//	trystat();
	//}



	//程序清单12.4
	//global.c -- 使用外部变量
	//extern int nuits; //可选的重复声明
	//printf("How many pounds to a firkin of butter?\n");
	//scanf("%d", &nuits);
	//while (nuits != 56) //使用了外部变量
	//{
	//	critic();
	//}
	//printf("You must hvae looked it up!\n");



	//程序清单12.5
	//parta.c -- 不同的存储类别
	//与partb.c一起编译
	//int value; //自动变量
	//register int i; //寄存器变量
	//printf("Enter a positive integer(0 to quit):");
	//while (scanf("%d", &value) == 1 && value > 0)
	//{
	//	++count; //使用文件作用域变量
	//	for (i = value; i >= 0; i--)
	//	{
	//		accumulate(i);
	//	}
	//	printf("Enter a positive integer(0 to quit): ");
	//}
	//report_count();




	//程序清单12.8
	//r_drive0.c -- 测试rand0()函数
	//与rand0.c -- 一起编译
	/*for (int count = 0; count < 5; count++)
	{
	printf("%d\n", rand0());
	}*/




	//程序清单12.10
	//r_drive1.c -- 测试rand1()和srand1()
	//与s_and_r.c一起编译
	//int countt;
	//unsigned seed;
	//printf("Please enter your choice for seed.\n");
	//while (scanf("%u", &seed) == 1)
	//{
	//	srand1(seed); //用获取到的值重置种子
	//	for (countt = 0; countt < 5; countt++)
	//	{
	//		printf("%d\n", rand1()); //打印随机数
	//	}
	//printf("Please enter next seed(q to quit):\n");
	//}
	//printf("Done\n");




	//程序清单12.13
	//manydice.c -- 多次仍骰子的模拟程序
	//与diceroll.c一起编译
	//以时间做种 → 提示并输入每个骰子的面数 → 提示并输入骰子数 → 处理错误输入 → 计算总点数 → 打印总点数
	//int dice, roll, sides, status;
	//srand((unsigned int)time(0)); //以时间做种
	//puts("Enter the number of sides per die, 0 to quit.");
	//while (scanf("%d", &sides) == 1 && sides > 0) //面数
	//{
	//	puts("How many dies?");
	//	if ((status = scanf("%d", &dice)) != 1) //输入错误时
	//	{
	//		if (status == EOF)
	//		{
	//			break;
	//		}
	//		else
	//		{
	//			puts("You should have entered an integer.");
	//			puts("Les's begin again.");
	//			while (getchar() != '\n')
	//			{
	//				continue;
	//			}
	//			puts("Now, how many sides? Enter 0 to quit.");
	//			continue; //重新开始输入
	//		}
	//	}
	//	roll = roll_n_dice(dice, sides); //计算总点数
	//	printf("You have rolled a %d using %d %d-sides dice.\n", roll, dice, sides);
	//	puts("How many sides? Put 0 to quit.");
	//}
	//printf("The rollem() function was called %d times.\n", roll_count);
	//printf("GOOD FORTUNE TO YOU.!\n");


	
	

	//程序清单12.14
	//dyn_arr.c -- 动态分配数组
	//提示输入最大数量 → 判断是否正确输入上限 → malloc申请空间 → 判断指针是否正确指向 → 提升录入数值 → 录入数值 → 循环打印 → 6个字符就换一行 → 最后一行换行 → 结束释放内存
	//double* ptd;
	//int max, number;
	//int i = 0;
	//puts("what is the maximum number of type double entries?");
	//if (scanf("%d", &max) != 1)
	//{
	//	puts("Number not correctly entered -- bye.");
	//	exit(EXIT_FAILURE);
	//}
	//ptd = (double*)malloc(max * sizeof(double));
	//if (ptd == NULL)
	//{
	//	puts("Memory allocation failed. Goodbye.");
	//	exit(EXIT_FAILURE);
	//}
	//puts("Please enter the value:(q to quit)");
	//while (i < max && scanf("%lf", &ptd[i]) == 1) //将i<max放前面就先进行判断
	//{
	//	i++;
	//}
	//printf("Here are your %d entries:\n", i);
	//for (i = 0; i < max; i++)
	//{
	//	printf("%7.2f ", ptd[i]);
	//	if (i % 7 == 6)
	//	{
	//		putchar('\n');
	//	}
	//}
	//if (i % 7 != 0) //如果有位数
	//{
	//	putchar('\n');
	//}
	//puts("Done!");
	//free(ptd);


	
	//程序清单12.15
	//where.c -- 数据被储存在何处
	int auto_store = 40;
	char auto_string[] = "Auto char Array";
	int* pi;
	char* pcl;
	pi = (int*)malloc(sizeof(int));
	*pi = 35;
	pcl = (char*)malloc(strlen("Dynamic String") + 1);
	strcpy(pcl, "Dynamic String");
	printf("static_store: %d at %p\n", static_store, &static_store);
	printf(" aotu_sotre: %d at %p\n", auto_store, &auto_store);
	printf("   *pi: %d at %p\n", *pi, pi);
	printf("   %s at %p\n", pcg, pcg);
	printf("   %s at %p\n", auto_string, auto_string);
	printf("   %s at %p\n", pcl, pcl);
	printf("   %s at %p\n", "Quoted String", "Quoted String");
	free(pi);
	free(pcl);
	
	
	
	
	
	
	

	








	return 0;
}




void trystat(void)
{
	int fade = 1; //块作用域，自动变量
	static int stay = 1; //块作用域，静态变量
	printf("fade = %d and stay = %d\n", fade++, stay++); //fade的值一直是1，stay的值是1，2，3
}



void critic(void)
{
	//删除了可选的重复声明
	printf("No luck, my fried. Try again.\n");
	scanf("%d", &nuits);
}


void report_count()
{
	printf("Loop executed %d times\n", count);
}




