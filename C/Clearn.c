#include <stdio.h>

char* strcpy(char* pd, char* ps);
char* strcat(char* pd, char* ps);
char* star(char* pa);
void strmp3(char* pa, char* pd, char* ps);
int strlen(char* ps);
int strcmp(char* pa, char* pb);

int main()
{
	int mode;
	int brk;
	char str2[80], str3[80], str4[80];

	printf("기본 문자열 : strawberry\n");

	while (1)
	{
		char str1[80] = "strawberry";
		printf("1 : 문자열 변환\n2 : 문자열 추가\n3 : 문자열 길이(기본 문자열 무시)\n4 : 사전에 가장 먼저 나오는 문자열(기본 문자열 무시 및 2개 입력)\n5 : 6번째부터 별모양 문자열 출력\n6 : 문자열 3개 사전식 정렬\n>> ");
		scanf("%d", &mode);

		if (mode == 1)
		{
			printf("문자열 입력 : ");
			scanf("%s", str2);
			strcpy(str1, str2);
			printf("%s", str1);
		}
		else if (mode == 2)
		{
			printf("문자열 입력 : ");
			scanf("%s", str2);
			strcat(str1, str2);
			printf("%s", str1);
		}
		else if (mode == 3)
		{
			printf("문자열 입력 : ");
			scanf("%s", str2);
			printf("문자열 길이는 : ");
			printf("%d", strlen(str2));
		}
		else if (mode == 4)
		{
			printf("문자열 입력(공백으로 구분) : ");
			scanf("%s%s", str2, str3);
			if (strcmp(str2, str3) == 1)
			{
				printf(str3);
				printf(" 가 먼저 나옵니다.");
			}
			else if (strcmp(str2, str3) == 0)
			{
				printf("같습니다.");
			}
			else if (strcmp(str2, str3) == -1)
			{
				printf(str2);
				printf(" 가 먼저 나옵니다.");
			}
		}
		else if (mode == 5)
		{
			printf("문자열 입력 : ");
			scanf("%s", str2);
			printf("%s", star(str2));
		}
		else if (mode == 6)
		{
			printf("문자열 입력 : ");
			scanf("%s%s%s", str2, str3, str4);
			strmp3(str2, str3, str4);
		}

		printf("\n종료 하시겠습니까? 0/1 : ");
		scanf("%d", &brk);

		if (brk == 1)
		{
			break;
		}
	}
	return 0;
}

char* strcpy(char* pd, char* ps)
{
	char* po = pd;

	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';

	return po;
}

char* strcat(char* pd, char* ps)
{
	char* po = pd;

	while (*pd != '\0')
	{
		pd++;
	}
	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';

	return po;
}

char* star(char* pa)
{
	char* po = pa;
	int cnt = 0;

	while (1)
	{
		cnt += 1;

		if (pa[cnt] == '\0')
		{
			break;
		}
		if (cnt >= 5)
		{
			pa[cnt] = '*';
		}
	}
	return po;
}

void strmp3(char* pa, char* pd, char* ps)
{
	if (strcmp(pa, pd) == 1)
	{
		if (strcmp(ps, pa) == 1)
		{
			printf("%s, ", pd);
			printf("%s, ", pa);
			printf("%s", ps);
		}
		else if (strcmp(pa, ps) == 1)
		{
			if (strcmp(ps, pd) == 1)
			{
				printf("%s, ", pd);
				printf("%s, ", ps);
				printf("%s", pa);
			}
			else if (strcmp(pd, ps) == 1)
			{
				printf("%s, ", ps);
				printf("%s, ", pd);
				printf("%s", pa);
			}
		}
	}
	else if (strcmp(pd, pa) == 1)
	{
		if (strcmp(ps, pd) == 1)
		{
			printf("%s, ", pa);
			printf("%s, ", pd);
			printf("%s", ps);
		}
		else if (strcmp(pd, ps) == 1)
		{
			if (strcmp(ps, pa) == 1)
			{
				printf("%s, ", pa);
				printf("%s, ", ps);
				printf("%s", pd);
			}
			else if (strcmp(pa, ps) == 1)
			{
				printf("%s, ", ps);
				printf("%s, ", pa);
				printf("%s", pd);
			}
		}
	}
}

int strlen(char* ps)
{
	int cnt = 0;

	while (*ps != '\0')
	{
		cnt++;
		ps++;
	}

	return cnt;
}

int strcmp(char* pa, char* pb)
{
	while ((*pa == *pb) && (*pa != '\0'))
	{
		pa++;
		pb++;
	}

	if (*pa > *pb) return 1;
	else if (*pa < *pb) return -1;
	else return 0;
}