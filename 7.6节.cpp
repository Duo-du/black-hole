#include<stdio.h>
#include<conio.h>
int main()
{
	int p,q;
	scanf("%d",&p);
	while(p>0)
	{
		printf("%d\n",p);
		scanf("%d",&q);
		while(q>0)
		{
			printf("%d",p*q);
			if(q>100)
			{printf("one");//one��two��ֻ�Ǳ�ǣ� 
			break;}//�������ѭ�� 
			scanf("%d",&q);
		}
		if(q>100)
		{printf("two");
		break;}//�������ѭ�� 
		scanf("%d",&p);
	}
	getch();
	return 0;
}