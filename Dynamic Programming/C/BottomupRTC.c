#include<stdio.h>
#define m 6
int max(int a,int b)
{
	return (a>b)?a:b;
}
int RTC(int profit[],int l)
{
	int r[m],i=0;
	for(i;i<m;i++)
		r[i]=-999;
	r[0]=0;
	for(i=0;i<l;i++)
	{
		int j=0;
		int pro=-9999;
		for(j;j<=i;j++)
		{
			pro=max(pro,profit[j]+r[i-j]);
		}
		r[i+1]=pro;
	}
	return r[l];	
}
void main()
{
	int profit[]={1,6,7,8,9};
	printf("Enter the length whose price optimization is required.\n");
	int l;scanf("%d",&l);
	if(l>5)
		printf("Sorry I don't have that long rod.");
	else
	{
		int pro_opt=RTC(profit,l);
		printf("Profit obtained by selling %dm is Rs. %d",l,pro_opt);
	}	
}
