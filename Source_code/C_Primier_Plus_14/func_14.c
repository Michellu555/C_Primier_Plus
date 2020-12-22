#include<stdio.h>
#include<ctype.h>
#include"func_14.h"







char* s_gets(char* st, int n)
{
	char* aim, *find;
	aim = fgets(st, n, stdin);
	if (aim)
	{
		find = strchr(st, '\n');
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
		}
	}
	return aim;
}





