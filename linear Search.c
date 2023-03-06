#include<stdio.h>
#include<conio.h>

void sq_search(int a[], int n,int item)
{
	int flag=1;
	int i;
	for(i=0;i<n-1;i++)
	{
		if(a[i]==item)
		{
			printf("succesfully searched\n");
			flag=0;
		}
	}
	if(flag==1)
	{
		printf(" Search Unsuccess\n");
	}
}
main()
{

	int a[]={12,14,2,78,56,17,22};
	sq_search(a,7,5);
	
}


