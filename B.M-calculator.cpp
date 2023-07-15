#include <stdio.h>
#include <stdlib.h>
#include <windows.h>




main()
{
	system ("mode con:cols=50 lines=4");
	SetConsoleTitle("재물 획득의 비약 계산기");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);

	int a, b, c, d, e;
	int result;			
	int k,l;
	
	printf("단위 : 만 메소\n");
	printf("\n판매가를 입력하시오.\n");
	scanf("%d",&a);
	
	printf("단위 : 만 메소\n");
	printf("\n'씨앗오일' 가격을 입력하시오.\n");
	scanf("%d",&b);
	
	printf("단위 : 만 메소\n");
	printf("\n'최상급아이템결정'의 가격을 입력하시오.\n");
	scanf("%d",&c);
	
	printf("단위 : 만 메소\n");
	printf("\n'현자의돌'의 가격을 입력하시오.\n");
	scanf("%d",&d);

	k=(800+b*10+c*3+d*1)/3;
	result=a-(a*0.05)-k;

	if(0<result)
	{
		printf("\n계산결과 %d만 메소만큼 이득입니다.\n",result);
	}
	
	else
	{
		printf("\n계산결과 %d만 메소만큼 손해입니다.\n\n",result);
	}

	system("PAUSE>null");
}

//음수 양수에 따라서 손익 띄우기
//지니고 있는 아이템 갯수 확인해서 계산