#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
	int choice;
	int a,b,c;
	while(1)
	{
	
		printf("1. Addition\n");
		printf("2.Odd-Even\n");
		printf("3.First n natural number\n");
		printf("4.Exit\n");
		
		printf("Enter your Choice\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter Two Numbers\n");
				scanf("%d %d",&a,&b);
				printf("Addition is %d",a+b);
			    break;
			case 2:
				printf("Enter number\n");
				scanf("%d",&a);
				if(a%2==0)
			    	printf("Even Number\n");
				else
				    printf("Odd Number\n");
				break;
			case 3:
				printf("Enter number\n");
				scanf("%d",&a);
				for(b=1;b<=a;b++)
				    printf("%d",b);
				break;
				
			case 4: exit(0);	
				
			default:
				printf("Invalid Choice");
				break;
				
	   
				
					
				
				
        }
        getch();
	  		
			
				
				
				
	}
}
