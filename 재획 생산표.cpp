#include <stdio.h>

main()
{
	int a, b, c, d, e;
	int result;			
	int k,l;
	
	printf("���� : �� �޼�\n");
	printf("\n�ǸŰ��� �Է��Ͻÿ�.\n");
	scanf("%d",&a);
	
	printf("\n'���ѿ���' ������ �Է��Ͻÿ�.\n");
	scanf("%d",&b);
	
	printf("\n'�ֻ�޾����۰���'�� ������ �Է��Ͻÿ�.\n");
	scanf("%d",&c);
	
	printf("\n'�����ǵ�'�� ������ �Է��Ͻÿ�.\n");
	scanf("%d",&d);

	k=(800+b*10+c*3+d*1)/3;
	result=a-(a*0.05)-k;
	printf("\n����� %d�� =�޼� �Դϴ�.",result);
	
}

//���� ����� ���� ���� ����
//���ϰ� �ִ� ������ ���� Ȯ���ؼ� ���
 
