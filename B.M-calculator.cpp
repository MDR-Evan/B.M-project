#include <stdio.h>
#include <stdlib.h>
#include <windows.h>




main()
{
	system ("mode con:cols=50 lines=4");
	SetConsoleTitle("�繰 ȹ���� ��� ����");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);

	int a, b, c, d, e;
	int result;			
	int k,l;
	
	printf("���� : �� �޼�\n");
	printf("\n�ǸŰ��� �Է��Ͻÿ�.\n");
	scanf("%d",&a);
	
	printf("���� : �� �޼�\n");
	printf("\n'���ѿ���' ������ �Է��Ͻÿ�.\n");
	scanf("%d",&b);
	
	printf("���� : �� �޼�\n");
	printf("\n'�ֻ�޾����۰���'�� ������ �Է��Ͻÿ�.\n");
	scanf("%d",&c);
	
	printf("���� : �� �޼�\n");
	printf("\n'�����ǵ�'�� ������ �Է��Ͻÿ�.\n");
	scanf("%d",&d);

	k=(800+b*10+c*3+d*1)/3;
	result=a-(a*0.05)-k;

	if(0<result)
	{
		printf("\n����� %d�� �޼Ҹ�ŭ �̵��Դϴ�.\n",result);
	}
	
	else
	{
		printf("\n����� %d�� �޼Ҹ�ŭ �����Դϴ�.\n\n",result);
	}

	system("PAUSE>null");
}

//���� ����� ���� ���� ����
//���ϰ� �ִ� ������ ���� Ȯ���ؼ� ���