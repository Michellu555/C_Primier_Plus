#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>



int main(int argc, char** argv)
{
	//��ϰ��
	//1.����ĳ�����ʲô���⣿
	//int* fp; //fpӦ������Ϊ�ļ���
	//int k;
	//fp = fopen("gelatin"); //ȱ�ٴ�ģʽ����
	//for ( k = 0; k < 30; k++)
	//{
	//	fputs(fp, "Nanette ests gelatin."); //����λ�÷���
	//}
	//fclose("gelatin"); //����Ӧ��Ϊһ���ļ���


	//2.����ĳ��������������(�����������л���������)
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
	//		putchar(ch); //��ӡ�����ַ�
	//	}
	//}
	//fclose(fp);


	//3.�����������������䣺
	//FILE* fp1, * fp2;
	//char ch;
	//fp1 = fopen("terky", "r");
	//fp2 = fopen("jerky", "w");
	////���⣬����ɹ����������ļ�����ȫ���溯��������ȱ�ٵĲ�����
	//ch = getc(fp1);
	//fprintf(stdout, "%c\n", ch);
	//putc(ch, fp2);
	//fclose(fp1);
	//fclose(fp2);


	//4.��дһ�����򣬲������κ������в��������һ�������в�����
	//�����һ���������������Ϊ�ļ��������û�в�����ʹ�ñ�׼���루stdin)��Ϊ���롣
	//����������ȫ�Ǹ��������ó���Ҫ����ͱ����������ֵ�����ƽ��ֵ��
	////�����ļ��� �� �Զ�ģʽ���ļ� �� ��ȡ�ļ��е�ֵ �� sum��ͣ�count����������ƽ����
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


	//5.��дһ�����򣬽������������в�������1���������ַ�����2���������ļ�����
	//Ҫ��ó���ֻ��ӡ�ļ��а��������ַ�����Щ�С�ע�� C�������'\n'ֻ���ļ��е��С�
	//���������ж�������256���ַ�������ܻ��뵽��fgets()��
	//��ʼ���ļ��� �� ��ʼ������Ϊ256���ַ��� �� ֻ��ģʽ���ļ� �� fgets¼��ÿһ�е��ַ� �� �ж��Ƿ����Ŀ���ַ��������������fputs�������Ļ
	//FILE* fp;
	//char st[256];
	//if ((fp = fopen(argv[2], "r")) == NULL) //��������argv[0]
	//{
	//	fputs("Can't open the %s file.", argv[1]);
	//	exit(EXIT_FAILURE);
	//}
	//while ((fgets(st, 256, fp)) != NULL) //�����ļ���β����NULL
	//{
	//	if (strchr(st, argv[1][0]) != NULL) //strchr���ز��ҵ��ĵ�һ���ַ����ĵ�ַ���Ҳ������ؿ�ָ��
	//	{
	//		fputs(st, stdout);
	//	}
	//}
	//fclose(fp);


	//6.�������ļ����ı��ļ��к����𣿶����������ı����к�����
	//�������ļ����ı��ļ��������ǣ��������ļ���ʽ��ϵͳ�������Բ�ͬ��
	//�����������ı���������������ڶ�д��ʱ����ִ�е�ת��������������ת�������ı�������Ҫת�����з��������ַ�����


	//7.a.�ֱ���fprintf()��fwrite()����8238201�к�����
	//fprintf�ǰ�����ַ��ֽ�ɵ����ַ���ÿ���ַ�ת����ASCII��֮���ٱ���
	//fwrite�ǰ��������ֱ�Ӱ�int�ͽ��д洢
	//b.�ֱ���putc()��fwrite()�����ַ�S�к�����
	//û����


	//8.��������������ʲô��
	//printf("Hello,%s\n", name); //name����%s��ӡ����
	//fprintf(stdout, "Hello,%sin", name); //��ӡ����׼�����
	//fprintf(stderr, "Hello,%s\n", name); //��ӡ����׼������

	
	//9."a+"��"r+"��"w+"ģʽ�򿪵��ļ����ǿɶ�д�ġ�����ģʽ���ʺ����������ļ������е����ݣ�
	//r+���ʺ����������ļ�����������































	return 0;
}