#include<stdio.h>
void exampleuse()
{
printf("enter the symbol for the operation you are going to perform\n");
}
int main()
{   menu:
    exampleuse();
    double x,y;
    char symbol;
    printf(">");
    scanf("%c",&symbol);
    
	if(symbol=='+')
	{
    printf("Example use : >4+2 Enter Key\nExample use : NumberSymbolNumber Enter\n");
    printf(">");
	scanf("%lf+%lf",&x,&y);
	printf("%.2lf",x+y);
	getch();
	}
	else if(symbol=='-')
	{
    printf("Example use : >4-2 Enter Key\nExample use : NumberSymbolNumber Enter\n");
    printf(">");
	scanf("%lf-%lf",&x,&y);
	printf("%.2lf",x-y);
	getch();
	}
	else if(symbol=='*')
	{
    printf("Example use : >4*2 Enter Key\nExample use : NumberSymbolNumber Enter\n");
    printf(">");
	scanf("%lf*%lf",&x,&y);
	printf("%.2lf",x*y);
	getch();
	}
	else if(symbol=='/')
	{
		printf("Example use : >4/2 Enter Key\nExample use : NumberSymbolNumber Enter\n");
    	printf(">");
		scanf("%lf/%lf",&x,&y);
		printf("%.2lf",x/y);
		getch();
	}
	else if(symbol=='%' || symbol=='&')
	{
	printf("Example use : >9&2 Enter Key\nExample use : NumberSymbolNumber Enter\n");
    printf(">");
    int x,y;
	scanf("%d&%d",&x,&y);
	printf("%d",x%y);
	getch();
	
	}
    return 0;
}
