#include<stdio.h>




void trystat(void); 



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






	return 0;
}




void trystat(void)
{
	int fade = 1; //块作用域，自动变量
	static int stay = 1; //块作用域，静态变量
	printf("fade = %d and stay = %d\n", fade++, stay++); //fade的值一直是1，stay的值是1，2，3
}