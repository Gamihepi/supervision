#include<stdio.h>
main()
{
	FILE *p;
	p=fopen("demo.txt","r");
	char data[100];
	if(p==NULL)
	{
		printf("Could not open file.");
	}
	else
	{
		printf("File open sucessfully.");
	}
	while(fgets(data,50,p)!=NULL)
	{
		printf("%S",data);
		fclose(p);
	}	
}
