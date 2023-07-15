#include <stdio.h>

main()
{
	int a, b, c, d, e;
	int result;			
	int k,l;
	
	printf("단위 : 만 메소\n");
	printf("\n판매가를 입력하시오.\n");
	scanf("%d",&a);
	
	printf("\n'씨앗오일' 가격을 입력하시오.\n");
	scanf("%d",&b);
	
	printf("\n'최상급아이템결정'의 가격을 입력하시오.\n");
	scanf("%d",&c);
	
	printf("\n'현자의돌'의 가격을 입력하시오.\n");
	scanf("%d",&d);

	k=(800+b*10+c*3+d*1)/3;
	result=a-(a*0.05)-k;
	printf("\n계산결과 %d만 =메소 입니다.",result);
	
}

//음수 양수에 따라서 손익 띄우기
//지니고 있는 아이템 갯수 확인해서 계산
 
