#include "func.h"

extern int num;
extern char inputString[128];

extern struct list* ptr;

void prt_start()
{
	prt_sentences(1);
}

void split_w1()
{
	printf(" 1. ����\n");
	printf(" 2. ���δ�\n");
	printf(" �Է� : ");
	scanf("%d", &num);
	printf("\n");

}

void split_c1()
{
	prt_sentences(2);
	printf(" 1. ��\n");
	printf(" 2. �ƴϿ�\n");
	printf(" �Է� : ");
	scanf("%d", &num);
	printf("\n");

}

void split_c2()
{
	prt_sentences(3);
	printf(" �Է� : ");
	getchar();
	gets(inputString);
	printf("\n");
	num = EOF;
}

void prt_motivation()
{
	int case_num;


	creat_rand();
	case_num = rand() % 4 + 1;

	switch (case_num)
	{
	case 1:
		printf(" ����̰ڱ���. �����մϴ�.\n");
		Sleep(2000);
		printf(" �׷� ��Ȳ�̶�� ���� ������� �̴ϴ�.\n\n");
		Sleep(2000);
		printf(" �׷����� �̹����� ���� �׸� �����ϼ����� ���ڽ��ϴ�.\n\n");
		Sleep(2000);
		printf(" ������ ������ ��� �ϴٺ��� ������ ������ ���� �� ������ ���̴ϴ�.\n");
		Sleep(2000);
		printf(" ���� ����ؼ� ������ ������ �������ٸ� �̷��� �غ�����.\n\n");
		Sleep(2000);
		printf(" ���� �ִ°����� ���� ������ �̵��ϼ���.\n");
		Sleep(2000);
		printf(" ��å�� �ϰų� ��ǥ�� ����� ������.\n\n");
		Sleep(2000);
		printf(" ���� ���� �츮���� �ʿ��� ���� ��ǥ�� ����� �޼������μ� �������� ��� ������ ���ư��� ���Դϴ�.\n\n");
		Sleep(2000);
		printf(" �����ͺ��� õõ�� �η������� ���� �� ���� ���� ����ֵ��� ����սô�.\n\n");
		Sleep(2000);
		break;
	case 2:
		printf(" ����� �� ������ ���ݰ� ���� ���� ���� ���� ������ �˴ϴ�.\n\n");
		Sleep(2000);
		printf(" �� � ������ ���� ��� �ϴ� �� �ƴմϴ�. �׳� ���� ���� ������� �ᰡ�鼭\n\n");
		Sleep(2000);
		printf(" � �� ������ ����� �� ������, ��� �ذ��� ������ �ذ����� �����ϸ鼭 ���� ���� ����\n");
		printf(" ����� ������ �̴ϴ�.\n\n");
		Sleep(2000);
		break;
	case 3:
		printf(" �λ��� ������ó�� �Ѿ����ٰ� �����°� �ƴմϴ�.\n\n");
		Sleep(2000);
		printf(" �ƹ��� ������� ���� �� ������ �ߵ�����, �߾��� �ǰ� ������ ���� ����� �ѵ��� �� �̴ϴ�.\n\n");
		Sleep(2000);
		break;
	case 4:
		printf(" ���ɼ��̶� �����̶�� �Ͱ� ���� ���̴�.\n\n");
		Sleep(2000);
		printf(" ������� ���� � ���� �ϱ� ���� ���� ���� �ϴ� �ൿ�� �ٷ� ����̴�.\n\n");
		Sleep(2000);
		printf(" �Ӹ������� ����� �� �ϰ� ���� ��� ������ ������ ���̴�.\n\n");
		Sleep(2000);
		printf(" �� ������ ������ ���ɼ��� �����ϰ� �ֱ� �����̴�.\n\n");
		Sleep(2000);
		printf(" �ΰ��� ����� ���� ��� ���� �� ����� �̹� ��ǥ�� �̷�� ���� �ൿ�� �ϴ� �ݸ�,\n");
		Sleep(2000);
		printf(" �ٸ� ����� ��ǥ�� �̷�� ���� ����� �Ѵٰ� �����Ѵٸ� �ൿ�� ���� �� ����� ��ǥ�� �޼��� ���ɼ��� ����.\n\n");
		Sleep(2000);
		printf(" �� ������ ���ɼ��� �ø��� ����� �ٷ� �ൿ�̱� �����̴�.\n\n");
		Sleep(2000);
		printf(" ��ǥ�� �̷�� ���� ����Ѱ��̶� �Ѵٸ� ���ɼ��� �ö�����, �����ϰ� ����ϴ� ���� ���ɼ����� �Ÿ��� �ֱ� �����̴�.\n\n");
		Sleep(2000);
		printf(" � ��ǥ�� ����� �̷���� �Ѵٸ� �������� �ൿ�� ������.\n\n");
		Sleep(2000);
		break;
	default:
		printf("Error for func.c in prt_motivation() Line : 53\n\n");
		break;
	}




}

void prt_end()
{
	if (num == 1)
	{
		printf(" ��������! � ��ȹ�� ����̳���?\n");
		printf(" ���ڿ��� �Է����ּ��� : ");
		getchar();
		gets(inputString);
		

	}
	else
	{
		printf(" �����ͺ��� �����غ���. ��ÿ� ������ �ұ��?\n");
		printf(" ���ڿ��� �Է����ּ��� : ");
		//getchar();
		gets(inputString);

	}

	printf("\n");
	printf(" �����ϼ̽��ϴ�.\n\n");
	printf(" ���� ��ȹ �� �̷�ñ� �ٶ��ϴ�.\n");
	printf(" ������ ��ȹ : %s\n\n", inputString);


	
}




int creat_rand()
{
	srand(time(NULL));

}

void prt_sentences(int gubun)
{
	creat_rand();


	char ary1[4][90] = { " �ȳ��ϼ���. ���� ����� ��Ű���?",
						" ���� �Ϸ��Դϴ�. ������ ����� ��Ű���?",
						" ���õ� ���� �Ϸ� ��������. ������ ����� ��Ű���?",
						" ���� �Ϸ� ������ ������. �ְ��� �Ϸ� ��������. ������ ����� ��Ű���?" };

	char ary2[3][50] = { " �����ϴ�. ������ ��ȹ�� ����̳���?",
						" ������ ���� ��ȹ�� �����Ű���?",
						" ���� � ���� ���� ���ϼ̳���?" };

	char ary3[3][90] = { " � �� ������ ����� �� �����Ű���?(�����ʹ� ������� �ʽ��ϴ�)",
						" ����� �����Ű���?(�����ʹ� ������� �ʽ��ϴ�.",
						" ���� ���� �ִٸ� �����ּ���.(�����ʹ� ������� �ʽ��ϴ�)" };


	switch (gubun)
	{
	case 1:
		printf("%s\n", ary1[rand() % (sizeof(ary1) / sizeof(ary1[0]))]);
		break;
	case 2:
		printf("%s\n", ary2[rand() % (sizeof(ary2) / sizeof(ary2[0]))]);
		break;
	case 3:
		printf("%s\n", ary3[rand() % (sizeof(ary3) / sizeof(ary3[0]))]);
		break;

	default:
		printf(" ERROR From func.c line 210 - ���� ���� ���� ���");
		exit(1);


	}








}

