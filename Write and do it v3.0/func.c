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
	printf(" 1. 좋다\n");
	printf(" 2. 별로다\n");
	printf(" 입력 : ");
	scanf("%d", &num);
	printf("\n");

}

void split_c1()
{
	prt_sentences(2);
	printf(" 1. 네\n");
	printf(" 2. 아니요\n");
	printf(" 입력 : ");
	scanf("%d", &num);
	printf("\n");

}

void split_c2()
{
	prt_sentences(3);
	printf(" 입력 : ");
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
		printf(" 힘드셨겠군요. 이해합니다.\n");
		Sleep(2000);
		printf(" 그런 상황이라면 많이 힘들었을 겁니다.\n\n");
		Sleep(2000);
		printf(" 그렇지만 이번일은 이제 그만 생각하셨으면 좋겠습니다.\n\n");
		Sleep(2000);
		printf(" 안좋은 생각을 계속 하다보면 꼬리에 꼬리가 물려 더 안좋아 질겁니다.\n");
		Sleep(2000);
		printf(" 만약 계속해서 안좋은 생각이 떠오른다면 이렇게 해보세요.\n\n");
		Sleep(2000);
		printf(" 지금 있는곳보다 넓은 곳으로 이동하세요.\n");
		Sleep(2000);
		printf(" 산책을 하거나 목표를 만들어 보세요.\n\n");
		Sleep(2000);
		printf(" 지금 당장 우리에게 필요한 것은 목표를 세우고 달성함으로서 에너지를 얻고 앞으로 나아가는 것입니다.\n\n");
		Sleep(2000);
		printf(" 작은것부터 천천히 두려워하지 말고 더 나은 삶을 살수있도록 노력합시다.\n\n");
		Sleep(2000);
		break;
	case 2:
		printf(" 기분이 안 좋을땐 지금과 같이 글을 쓰는 것이 도움이 됩니다.\n\n");
		Sleep(2000);
		printf(" 꼭 어떤 형식의 글을 써야 하는 건 아닙니다. 그냥 쓰고 싶은 내용들을 써가면서\n\n");
		Sleep(2000);
		printf(" 어떤 것 때문에 기분이 안 좋은지, 어떻게 해결할 건지에 해결방안을 생각하면서 글을 쓰다 보면\n");
		printf(" 기분이 나아질 겁니다.\n\n");
		Sleep(2000);
		break;
	case 3:
		printf(" 인생은 마라톤처럼 넘어졌다고 끝나는게 아닙니다.\n\n");
		Sleep(2000);
		printf(" 아무리 힘들더라도 지금 이 순간을 견뎌내면, 추억이 되고 발전한 나의 모습에 뿌듯해 할 겁니다.\n\n");
		Sleep(2000);
		break;
	case 4:
		printf(" 가능성이란 만약이라는 것과 같은 뜻이다.\n\n");
		Sleep(2000);
		printf(" 사람들은 보통 어떤 일을 하기 전에 가장 먼저 하는 행동은 바로 계산이다.\n\n");
		Sleep(2000);
		printf(" 머리속으로 계산을 다 하고 나서 드는 생각은 좌절일 것이다.\n\n");
		Sleep(2000);
		printf(" 그 이유는 지금의 가능성을 생각하고 있기 때문이다.\n\n");
		Sleep(2000);
		printf(" 두가지 사람의 예를 들어 보면 한 사람은 이미 목표를 이루기 위해 행동을 하는 반면,\n");
		Sleep(2000);
		printf(" 다른 사람은 목표를 이루기 위해 계산을 한다고 가정한다면 행동을 먼저 한 사람이 목표를 달성할 가능성이 높다.\n\n");
		Sleep(2000);
		printf(" 그 이유는 가능성을 올리는 방법이 바로 행동이기 때문이다.\n\n");
		Sleep(2000);
		printf(" 목표를 이루기 위해 사소한것이라도 한다면 가능성이 올라가지만, 생각하고 계산하는 것은 가능성과는 거리가 멀기 때문이다.\n\n");
		Sleep(2000);
		printf(" 어떤 목표를 세우고 이루려고 한다면 생각보다 행동이 먼저다.\n\n");
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
		printf(" 멋지군요! 어떤 계획을 세우셨나요?\n");
		printf(" 문자열을 입력해주세요 : ");
		getchar();
		gets(inputString);
		

	}
	else
	{
		printf(" 작은것부터 시작해보죠. 몇시에 무엇을 할까요?\n");
		printf(" 문자열을 입력해주세요 : ");
		//getchar();
		gets(inputString);

	}

	printf("\n");
	printf(" 수고하셨습니다.\n\n");
	printf(" 멋진 계획 꼭 이루시길 바랍니다.\n");
	printf(" 오늘의 계획 : %s\n\n", inputString);


	
}




int creat_rand()
{
	srand(time(NULL));

}

void prt_sentences(int gubun)
{
	creat_rand();


	char ary1[4][90] = { " 안녕하세요. 오늘 기분은 어떠신가요?",
						" 좋은 하루입니다. 오늘의 기분은 어떠신가요?",
						" 오늘도 좋은 하루 보내세요. 오늘의 기분은 어떠신가요?",
						" 좋은 하루 보내지 마세요. 최고의 하루 보내세요. 오늘의 기분은 어떠신가요?" };

	char ary2[3][50] = { " 좋습니다. 오늘의 계획은 세우셨나요?",
						" 오늘의 멋진 계획이 있으신가요?",
						" 오늘 어떤 일을 할지 정하셨나요?" };

	char ary3[3][90] = { " 어떤 일 때문에 기분이 안 좋으신가요?(데이터는 저장되지 않습니다)",
						" 고민이 있으신가요?(데이터는 저장되지 않습니다.",
						" 힘든 일이 있다면 적어주세요.(데이터는 저장되지 않습니다)" };


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
		printf(" ERROR From func.c line 210 - 랜덤 숫자 범위 벗어남");
		exit(1);


	}








}

