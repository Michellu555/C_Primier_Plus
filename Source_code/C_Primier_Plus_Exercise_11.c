#include<stdio.h>
#include<string.h>



#define M1 "How are ya, sweeetie?"


char* pr(char* str);
char* s_gets(char*, int);
int string_length(char*);
char* find_space(char*);


int main()
{
	//��ϰ��
	//1.�����ַ�������������������
	//char name[] = {'F', 'e', 's', 's'};
	//ȱ�ٿ��ַ����޷�����ַ���
	//��ȷ�������£�
	//char name[] = "Fess";


	//2.����ĳ�����ӡʲô��
	//char note[] = "See you at the snack bar.";
	//char* ptr;
	//ptr = note;
	//puts(ptr); //See you at the snack bar.
	//puts(++ptr); //ee you at the snack bar.
	//note[7] = '\0';
	//puts(note); //see yo
	//puts(++ptr); //e yo


	//3.����ĳ�����ӡʲô��
	//char food[] = "Yommy";
	//char* ptr;
	//ptr = food + strlen(food);
	//while (--ptr >= food)
	//{
	//	puts(ptr); //y\n my\n mmy\n ommy\n Yommy\n
	//}


	//4.����ĳ�����ӡʲô��
	//char goldwyn[40] = "art of it all ";
	//char samuel[40] = "I read p";
	//const char* quote = "the way through.";
	//strcat(goldwyn, quote); //art of it all the way through.
	//strcat(samuel, goldwyn); 
	//puts(samuel); //I read part of it all the way through.


	//5.�������ϵ�漰�ַ�����ѭ����ָ��͵���ָ�롣���ȣ� ���趨��������ĺ�����
	//��������ĺ������ã�
	//char* x;
	//x = pr("Ho Ho Ho!");
	//a.����ӡʲô�� Ho Ho Ho !! oH oH oH
	//b.x��ʲô���͵�ֵ��ָ��
	//c.x��ֵ��ʲô�� �ַ�����Ԫ�صĵ�ַ
	//d.���ʽ*--pc��ʲô��˼�� ��--*pc�кβ�ͬ�� *--pc = *(--pc), --*pc = --(*pc)
	//e.�������*--pc�滻--*pc�����ӡʲô�� Ho Ho Ho !
	//f.����whileѭ����������ʲô�� ��һ������ָ���Ƿ�ָ���˿��ַ����ڶ�������ָ���Ƿ�ָ�����ַ�����Ԫ��λ��
	//g.���pr()�����Ĳ����ǿ��ַ���������������һ��while��Ϊ�棬��һֱ��ӡ
	//h.������������������ʲô�� ������pr()�����������У�������ȷ���庯��



	//6.����������������
	//char sign = '$';
	//signռ���˶����ֽڵ��ڴ棿ָ������ռ��1�ֽ�
	//'$'ռ���˶����ֽڵ��ڴ棿char����ռ��1�ֽ�
	//"$"ռ���˶����ֽڵ����ݣ�stringsռ��4�ֽڵ�����


	//7.����ĳ�����ӡ��ʲô��
	//char M2[40] = "Beat the clock.";
	//char* M3 = "chat";
	//char words[80];
	//printf(M1); //How are ya,, sweetie?
	//puts(M1); //����һ�У�How are ya, sweetie?\n
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


	//8.����ĳ�����ӡ��ʲô��
	//char str1[] = "gawsie";
	//char str2[] = "bletonism";
	//char* ps;
	//int i = 0;
	//for (ps = str1; *ps != '\0'; ps++) //��ȡstr1�ַ���
	//{
	//	if (*ps == 'a' || *ps == 'e') //����ַ���a��e, �Ǿʹ�ӡ����
	//	{
	//		putchar(*ps);
	//	}
	//	else
	//	{
	//		(*ps)--; //������ǣ������ַ��滻��ǰһ���ַ�
	//		putchar(*ps);
	//	}
	//}
	//putchar('\n');
	//while (str2[i] != '\0')
	//{
	//	printf("%c", i % 3 ? str2[i] : '*'); //�ж�1�Ƿ��ܱ�3�������ܾͷ���str2[i], *le*on*sm*
	//	++i;
	//}


	//9.���¶����s_gets()��������ָ���ʾ������������ʾ������ü���һ������i�����д�ú�����
	//���������岿��


	//10.strlen()��������һ��ָ���ַ�����ָ����Ϊ�����������ظ��ַ����ĳ��ȡ����дһ�������ĺ�����
	//���������岿��

	
	//11.���¶����s_gets()������������strchr()�����������е�whileѭ�������һ��з��� ���д�ú�����
	//���������岿��


	//12.���һ������������һ��ָ���ַ�����ָ�룬����ָ����ַ�����һ���ո��ַ���ָ�룬�����δ���ҵ��ո��ַ����򷵻ؿ�ָ�롣
	//���������岿��


	//13.��д�����嵥11.21�� ʹ��ctype.hͷ�ļ��к������Ա������û�ѡ�ִ�д����Сд���ó�������ȷʶ��𰸡�
	char* st;
	puts(s_gets(st, 8));








	

	

	return 0;
}



char* pr(char* str)
{
	char* pc;
	pc = str;
	while (*pc) //��������ַ���ֱ�����ַ�
	{
		putchar(*pc++);
	}
	do //��������ַ���ֱ��pc��Ԫ��
	{
		putchar(*--pc);
	} while (pc - str);

	return(pc);
}


char* s_gets(char* st, int n)
{
	char* rev_val;
	rev_val = fgets(st, n, stdin);
	//����2ʹ��
	char* find;
	if (rev_val) //ȷ��rev_val����������
	{
		//����1
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
		//����2
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
	while (*st++) //st��ֵ��Ϊ���ַ�
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