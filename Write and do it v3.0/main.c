#include "func.h"

int num;
char inputString[128] = { 0 };

struct list
{
	char goal[50];
};



void main()
{

	int i, index = 0, number, n;

	struct list* ptr = NULL;
	struct list A[3] = {
			{"�������"},
			{"�������"},
			{"�������"} };

	n = sizeof(A) / sizeof(A[0]);

	




	prt_start();
	

	while (1)
	{
		split_w1();

		switch (num)
		{
		case 1:
			split_c1();
			break;

		case 2:
			split_c2();
			break;

		default:
			printf("�˼��մϴ� �ٽ� �������ּ���!\n\n");
			continue;
		}

		break;
	}

	
	if (num == EOF)
		prt_motivation();

	prt_end();

	ptr = &A[index];
	strcpy(ptr->goal, inputString);

	while (1)
	{


		display_st(A, n);

		printf("1. ����, 2. ����, 3. ���� : ");
		scanf("%d", &num);

		switch (num)
		{
		case 1:
			printf(" ������ �ε����� �Է����ּ��� : ");
			scanf("%d", &index);

			ptr = &A[index];
			printf(" ��ǥ�� �Է����ּ��� : ");

			getchar();
			gets(ptr->goal);
			break;

		case 2:
			printf(" ������ �ε����� �Է����ּ��� : ");
			scanf("%d", &index);

			ptr = &A[index];
			strcpy(ptr->goal, "�������");

			break;

		case 3:
			printf("\n ���α׷��� �����մϴ�.\n");
			exit(1);
		default:
			printf(" �ٽ� �������ּ���. 2���� �� �޼����� ���� �˴ϴ�.\n");
			Sleep(2000);
			system("cls");
			continue;
		}


	}


}

display_st(struct list* pt, int n)
{
	int i;

	printf("\n	������ ��ǥ\n\n");

	for (i = 0; i < n; i++)
	{
		printf(" %d. %s\n", i, (pt + i)->goal);
	}
	printf("\n");



}