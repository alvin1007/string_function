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

	printf("�⺻ ���ڿ� : strawberry\n");

	while (1)
	{
		char str1[80] = "strawberry";
		printf("1 : ���ڿ� ��ȯ\n2 : ���ڿ� �߰�\n3 : ���ڿ� ����(�⺻ ���ڿ� ����)\n4 : ������ ���� ���� ������ ���ڿ�(�⺻ ���ڿ� ���� �� 2�� �Է�)\n5 : 6��°���� ����� ���ڿ� ���\n6 : ���ڿ� 3�� ������ ����\n>> ");
		scanf("%d", &mode);

		if (mode == 1)
		{
			printf("���ڿ� �Է� : ");
			scanf("%s", str2);
			strcpy(str1, str2);
			printf("%s", str1);
		}
		else if (mode == 2)
		{
			printf("���ڿ� �Է� : ");
			scanf("%s", str2);
			strcat(str1, str2);
			printf("%s", str1);
		}
		else if (mode == 3)
		{
			printf("���ڿ� �Է� : ");
			scanf("%s", str2);
			printf("���ڿ� ���̴� : ");
			printf("%d", strlen(str2));
		}
		else if (mode == 4)
		{
			printf("���ڿ� �Է�(�������� ����) : ");
			scanf("%s%s", str2, str3);
			if (strcmp(str2, str3) == 1)
			{
				printf(str3);
				printf(" �� ���� ���ɴϴ�.");
			}
			else if (strcmp(str2, str3) == 0)
			{
				printf("�����ϴ�.");
			}
			else if (strcmp(str2, str3) == -1)
			{
				printf(str2);
				printf(" �� ���� ���ɴϴ�.");
			}
		}
		else if (mode == 5)
		{
			printf("���ڿ� �Է� : ");
			scanf("%s", str2);
			printf("%s", star(str2));
		}
		else if (mode == 6)
		{
			printf("���ڿ� �Է� : ");
			scanf("%s%s%s", str2, str3, str4);
			strmp3(str2, str3, str4);
		}

		printf("\n���� �Ͻðڽ��ϱ�? 0/1 : ");
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