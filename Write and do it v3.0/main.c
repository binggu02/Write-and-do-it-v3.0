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
			{"비어있음"},
			{"비어있음"},
			{"비어있음"} };

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
			printf("죄송합니다 다시 선택해주세요!\n\n");
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

		printf("1. 변경, 2. 삭제, 3. 종료 : ");
		scanf("%d", &num);

		switch (num)
		{
		case 1:
			printf(" 변경할 인덱스를 입력해주세요 : ");
			scanf("%d", &index);

			ptr = &A[index];
			printf(" 목표를 입력해주세요 : ");

			getchar();
			gets(ptr->goal);
			break;

		case 2:
			printf(" 삭제할 인덱스를 입력해주세요 : ");
			scanf("%d", &index);

			ptr = &A[index];
			strcpy(ptr->goal, "비어있음");

			break;

		case 3:
			printf("\n 프로그램을 종료합니다.\n");
			exit(1);
		default:
			printf(" 다시 선택해주세요. 2초후 이 메세지는 삭제 됩니다.\n");
			Sleep(2000);
			system("cls");
			continue;
		}


	}


}

display_st(struct list* pt, int n)
{
	int i;

	printf("\n	오늘의 목표\n\n");

	for (i = 0; i < n; i++)
	{
		printf(" %d. %s\n", i, (pt + i)->goal);
	}
	printf("\n");



}