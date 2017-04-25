#include<stdio.h>
#include<conio.h>
void f(void)
{
 	 int j=10;
 	 printf("%d\n",j);
 	 //j++;
}
int main(void)
{
 	int i;
 	for(i=0;i<10;i++)	
	{	 
		 f();
    }
getch();
return 0;
}

