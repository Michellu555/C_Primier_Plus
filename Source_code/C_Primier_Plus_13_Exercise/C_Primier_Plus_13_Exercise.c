#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>



int main(int argc, char** argv)
{
	//复习题
	//1.下面的程序有什么问题？
	//int* fp; //fp应该声明为文件流
	//int k;
	//fp = fopen("gelatin"); //缺少打开模式参数
	//for ( k = 0; k < 30; k++)
	//{
	//	fputs(fp, "Nanette ests gelatin."); //参数位置反了
	//}
	//fclose("gelatin"); //参数应该为一个文件流


	//2.下面的程序完成声明任务？(假设在命令行环境中运行)
	//int ch;
	//FILE* fp;
	//if (argc < 2)
	//{
	//	exit(EXIT_FAILURE);
	//}
	//if ((fp = fopen(argv[1], "r")) == NULL)
	//{
	//	exit(EXIT_FAILURE);
	//}
	//while ((ch = getc(fp)) != EOF)
	//{
	//	if (isdigit(ch))
	//	{
	//		putchar(ch); //打印数字字符
	//	}
	//}
	//fclose(fp);


	//3.假设程序中有下列语句：
	//FILE* fp1, * fp2;
	//char ch;
	//fp1 = fopen("terky", "r");
	//fp2 = fopen("jerky", "w");
	////另外，假设成功打开了两个文件。补全下面函数调用中缺少的参数：
	//ch = getc(fp1);
	//fprintf(stdout, "%c\n", ch);
	//putc(ch, fp2);
	//fclose(fp1);
	//fclose(fp2);


	//4.编写一个程序，不接受任何命令行参数或接受一个命令行参数。
	//如果有一个参数，将其解释为文件名；如果没有参数，使用标准输入（stdin)作为输入。
	//假设输入完全是浮点数。该程序要计算和报告输入数字的算术平均值。
	////输入文件名 → 以读模式打开文件 → 获取文件中的值 → sum求和，count计数，计算平均数
	//FILE* fp;
	//float sum = 0, num = 0;
	//int count = 0;
	//char name[20];
	//printf("Please enter the file name which you want to open.\n");
	//fscanf(stdin, "%s", name);
	//if ((fp = fopen(name, "r")) == NULL)
	//{
	//	printf("Can't open the %s file.", name);
	//	exit(EXIT_FAILURE);
	//}
	//while (fscanf(fp, "%f", &num) == 1)
	//{
	//	sum += num;
	//	count++;
	//}
	//printf("The average of these float value is %.2f", sum / (float)count);
	//fclose(fp);


	//5.编写一个程序，接受两个命令行参数。第1个参数是字符，第2个参数是文件名。
	//要求该程序只打印文件中包含给定字符的那些行。注意 C程序根据'\n'只别文件中的行。
	//假设所有行都不超过256个字符，你可能会想到用fgets()。
	//初始化文件流 → 初始化长度为256的字符串 → 只读模式打开文件 → fgets录入每一行的字符 → 判断是否包含目标字符，如果包含就用fputs输出到屏幕
	//FILE* fp;
	//char st[256];
	//if ((fp = fopen(argv[2], "r")) == NULL) //程序名是argv[0]
	//{
	//	fputs("Can't open the %s file.", argv[1]);
	//	exit(EXIT_FAILURE);
	//}
	//while ((fgets(st, 256, fp)) != NULL) //读到文件结尾返回NULL
	//{
	//	if (strchr(st, argv[1][0]) != NULL) //strchr返回查找到的第一个字符串的地址，找不到返回空指针
	//	{
	//		fputs(st, stdout);
	//	}
	//}
	//fclose(fp);


	//6.二进制文件和文本文件有何区别？二进制流和文本流有何区别？
	//二进制文件与文本文件的区别是，这两种文件格式对系统的依赖性不同。
	//二进制流和文本流的区别包括是在读写流时程序执行的转换（二进制流不转换，而文本流可能要转换换行符和其他字符）。


	//7.a.分别用fprintf()和fwrite()储存8238201有何区别？
	//fprintf是把这个字符分解成单个字符，每个字符转换成ASCII码之后再保存
	//fwrite是把这个整数直接按int型进行存储
	//b.分别用putc()和fwrite()储存字符S有何区别？
	//没区别


	//8.下面语句的区别是什么？
	//printf("Hello,%s\n", name); //name代替%s打印出来
	//fprintf(stdout, "Hello,%sin", name); //打印到标准输出流
	//fprintf(stderr, "Hello,%s\n", name); //打印到标准错误流

	
	//9."a+"、"r+"和"w+"模式打开的文件都是可读写的。哪种模式更适合用来更改文件中已有的内容？
	//r+更适合用来更改文件中已有内容































	return 0;
}