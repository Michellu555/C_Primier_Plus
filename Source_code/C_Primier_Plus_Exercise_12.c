#include<stdio.h>
#include<stdlib.h>


char color = 'B';


void first(void);
void second(void);



int main()
{
	//复习题
	//1.哪些类别的变量可以成为它所在函数的局部变量？
	//静态块作用域变量，自动变量，寄存器变量


	//2.哪些类别的变量在它所在程序的运行期一直存在？
	//静态内部链接变量，静态外部链接变量，静态块作用域变量


	//3.哪些类别的变量可以被多个文件使用？哪些类别的变量仅限于在一个文件中使用？	
	//静态外部链接变量可以被多个文件使用；静态内部链接变量仅限于在一个文件中使用

	//4.块作用域变量具有什么链接属性？
	//无链接属性


	//5.extern关键字有什么用途？
	//引用式声明具有外部链接属性的变量


	//6.考虑下面两行代码，就输出的结果而言有何异同：
	//int* p1 = (int*)malloc(100 * sizeof(int));
	//int* p1 = (int*)calloc(100, sizeof(int));
	//calloc申请的动态空间已经初始化为0了，malloc的未初始化
	//calloc和malloc申请的动态空间地址不同


	//7.下面的变量对那些函数可见？程序是否有误？
	

	//8.下面的程序会打印什么？
	//extern char color;
	//printf("color in main() is %c\n", color); //B
	//first(); //R
	//printf("color in main() is %c\n", color); //B
	//second(); //G
	//printf("color in main() is %c\n", color); //G


	//9.假设文件的开始处有如下声明：
	//static int plink;
	//int value_ct(const int arr[], int value, int n);
	//a.以上声明表明了程序员的什么意图？
	//static限定为内部链接属性
	//const限定了arr数组不可更改


	//b.用const int value和const int n分别替换int value和int n, 是否对主调程序的值加强保护。
	//不是，因为函数里的value和n是主调程序里的备份，不会影响主调函数


	

	return 0;
}


void first(void)
{
	char color;
	color = 'R';
	printf("color in first() is %c\n", color);
}


void second(void)
{
	color = 'G';
	printf("color in second() is %c\n", color);
}