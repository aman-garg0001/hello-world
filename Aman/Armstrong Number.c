#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b=0,c,d=0,e;
	scanf("%d",&a);
	e=a;
	while(a!=0)
	{
		c=a%10;
		b=c*c*c;
		d=d+b;
		a=a/10;
	}
	printf("%d\n",d);
    if(e==d)
    printf("Armstrong Number");
	getch();
	return 0;
}
