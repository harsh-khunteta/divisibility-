#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a[4],n,i,r[4],j=0;
	//printf("enter the elements in array:\n");
	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0; i<5; i++)
    {
    	r[i]=a[i]%10;
	}
	for(i=4; i>=0; i--)
	{
		j=r[4-i]*pow(10,i);
	}
	if(j%10==0)
	printf("yes");
	else
	printf("no");
	getch();
}
