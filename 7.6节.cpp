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
			{printf("one");//one、two，只是标记， 
			break;}//跳出里层循环 
			scanf("%d",&q);
		}
		if(q>100)
		{printf("two");
		break;}//跳出外层循环 
		scanf("%d",&p);
	}
	getch();
	return 0;
}