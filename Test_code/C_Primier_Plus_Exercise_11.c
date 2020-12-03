#include<stdio.h>
#include<string.h>



#define M1 "How are ya, sweeetie?"


char* pr(char* str);
char* s_gets(char*, int);
int string_length(char*);
char* find_space(char*);


int main()
{
	//复习题
	//1.下面字符串的声明有声明问题
	//char name[] = {'F', 'e', 's', 's'};
	//缺少空字符，无法组成字符串
	//正确声明如下：
	//char name[] = "Fess";


	//2.下面的程序会打印什么？
	//char note[] = "See you at the snack bar.";
	//char* ptr;
	//ptr = note;
	//puts(ptr); //See you at the snack bar.
	//puts(++ptr); //ee you at the snack bar.
	//note[7] = '\0';
	//puts(note); //see yo
	//puts(++ptr); //e yo


	//3.下面的程序会打印什么？
	//char food[] = "Yommy";
	//char* ptr;
	//ptr = food + strlen(food);
	//while (--ptr >= food)
	//{
	//	puts(ptr); //y\n my\n mmy\n ommy\n Yommy\n
	//}


	//4.下面的程序会打印什么？
	//char goldwyn[40] = "art of it all ";
	//char samuel[40] = "I read p";
	//const char* quote = "the way through.";
	//strcat(goldwyn, quote); //art of it all the way through.
	//strcat(samuel, goldwyn); 
	//puts(samuel); //I read part of it all the way through.


	//5.下面的联系涉及字符串，循环，指针和递增指针。首先， 假设定义了下面的函数：
	//考虑下面的函数调用：
	//char* x;
	//x = pr("Ho Ho Ho!");
	//a.将打印什么？ Ho Ho Ho !! oH oH oH
	//b.x是什么类型的值？指针
	//c.x的值是什么？ 字符串首元素的地址
	//d.表达式*--pc是什么意思？ 与--*pc有何不同？ *--pc = *(--pc), --*pc = --(*pc)
	//e.如果用用*--pc替换--*pc，会打印什么？ Ho Ho Ho !
	//f.两个while循环用来测试什么？ 第一个测试指针是否指到了空字符，第二个测试指针是否指到了字符串首元素位置
	//g.如果pr()函数的参数是空字符串，会怎样？第一个while恒为真，会一直打印
	//h.必须在主调函数中做什么， 才能让pr()函数正常运行？必须正确定义函数



	//6.假设有如下声明：
	//char sign = '$';
	//sign占用了多少字节的内存？指针类型占用1字节
	//'$'占用了多少字节的内存？char类型占用1字节
	//"$"占用了多少字节的内容？strings占用4字节的内容


	//7.下面的程序会打印出什么？
	//char M2[40] = "Beat the clock.";
	//char* M3 = "chat";
	//char words[80];
	//printf(M1); //How are ya,, sweetie?
	//puts(M1); //接上一行，How are ya, sweetie?\n
	//puts(M2); //Beat the clock.\n
	//puts(M2 + 1); //eat the clock.\n
	//strcpy(words, M2);
	//strcat(words, "Win a toy.");
	//puts(words); //Beat the clock. Win a toy.\n
	//words[4] = '\0';
	//puts(words); //Beat\n
	//while (*M3)
	//{
	//	puts(M3++); //chot\n hot\n ot\n t\n
	//}
	//puts(--M3); //t\n
	//puts(--M3); //ot\n
	//M3 = M1;
	//puts(M3); //How are ya, sweetie?\n


	//8.下面的程序会打印出什么？
	//char str1[] = "gawsie";
	//char str2[] = "bletonism";
	//char* ps;
	//int i = 0;
	//for (ps = str1; *ps != '\0'; ps++) //读取str1字符串
	//{
	//	if (*ps == 'a' || *ps == 'e') //如果字符是a或e, 那就打印出来
	//	{
	//		putchar(*ps);
	//	}
	//	else
	//	{
	//		(*ps)--; //如果不是，将该字符替换成前一个字符
	//		putchar(*ps);
	//	}
	//}
	//putchar('\n');
	//while (str2[i] != '\0')
	//{
	//	printf("%c", i % 3 ? str2[i] : '*'); //判断1是否能被3整除，能就返回str2[i], *le*on*sm*
	//	++i;
	//}


	//9.本章定义的s_gets()函数，用指针表示法代替可数组表示法便可用减少一个变量i。请改写该函数。
	//见函数定义部分


	//10.strlen()函数接受一个指向字符串的指针作为参数，并返回该字符串的长度。请编写一个这样的函数。
	//见函数定义部分

	
	//11.本章定义的s_gets()函数，可用用strchr()函数代替其中的while循环来查找换行符。 请改写该函数。
	//见函数定义部分


	//12.设计一个函数，接受一个指向字符串的指针，返回指向该字符串第一个空格字符的指针，或如果未查找到空格字符，则返回空指针。
	//见函数定义部分


	//13.重写程序清单11.21， 使用ctype.h头文件中函数，以便无论用户选手大写还是小写，该程序都能正确识别答案。
	char* st;
	puts(s_gets(st, 8));








	

	

	return 0;
}



char* pr(char* str)
{
	char* pc;
	pc = str;
	while (*pc) //正向输出字符，直至空字符
	{
		putchar(*pc++);
	}
	do //反向输出字符，直至pc首元素
	{
		putchar(*--pc);
	} while (pc - str);

	return(pc);
}


char* s_gets(char* st, int n)
{
	char* rev_val;
	rev_val = fgets(st, n, stdin);
	//方案2使用
	char* find;
	if (rev_val) //确保rev_val读到了数据
	{
		//方案1
		while (*rev_val != '\0' && *rev_val != '\n')
		{
			rev_val++;
		}
		if (*rev_val == '\n')
		{
			*rev_val = '\0';
		}
		else
		{
			while ((getchar()) != '\n')
			{
				continue;
			}
		}
		//方案2
		/*find = strchr(rev_val, '\n');
		if (find)
		{
			*find = '\0';
		}
		else
		{
			while (getchar() != '\n')
			{
				continue;
			}
		}*/
	}
	return rev_val;
}


int string_length(char* st)
{
	int count = 0;
	while (*st++) //st的值不为空字符
	{
		count++;
	}

	return count;
}


char* find_space(char* st)
{
	char* find;
	find = strchr(st, ' ');
	return find;
}