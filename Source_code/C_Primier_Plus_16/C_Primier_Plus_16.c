#include<stdio.h>


#define TWO 2
#define OW "Consistency is the last refuge of the nuimagina\
tive.-Oscar Wilde"
#define FOUR TWO * TWO
#define PX printf("X is %d.\n", x);
#define FMT "X is %d.\n"
#define SQUARE(X) X*X
#define PR(X) printf("The reault is %d.\n",X)


int main()
{
	//程序清单16.1
	//preproc.c -- 简单的预处理示例
	//int x = TWO;
	//PX;
	//x = FOUR;
	//printf(FMT, x);
	//printf("%s\n", OW);
	//printf("TWO:OW\n");


	//程序清单16.2
	//mac_arg.c -- 带参数的宏
	int x = 5;
	int z;
	printf("x = %d\n", x);
	z = SQUARE(x); //z = x * x
	printf("Evaluation SQUARE(x):");
	PR(z);
	//z = SQUARE(2); // z = 2 * 2
	//printf("Evaluation SQUARE(2):");
	//PR(z);
	printf("Evaluation SQUARE(x+2):");
	PR(SQUARE(x + 2)); //(x + 2)* (x + 2) → （5 + 2） * （5 + 2）
	printf("Evaluation 100/SQUARE(2):");
	PR(100 / SQUARE(2));
	printf("x is %d.\n", x);
	printf("Evaluation SUQARE(++x):");
	PR(SQUARE(++x));
	printf("After incrementiong, x is %x.\n", x);























	return 0;
}