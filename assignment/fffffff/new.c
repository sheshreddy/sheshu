/*#include<stdio.h>
#include<string.h>
main()
{
/*
char*ptr;
char dst[10];
char src[10]="sheshu";
ptr=strcpy(dst,src);
printf("%p-%s\n",ptr,ptr);

char*ptr="hari%skrishna%s";
printf(ptr,ptr,ptr)/
char dst[10];
strcpy(dst,"hari");
printf("%s\n",dst);

int len;

len=strlen("bharu");
printf("%d\n",len);
}*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr;
	int i;
	ptr=(int *)malloc(5*sizeof(int));
	if(ptr==NULL)
	{
		printf("failed to allocate memory");
		exit(1);
	}
	for(i=0;i<5;i++)
	{
		printf("enter the elements:\n");
		scanf("%d",&ptr[i]);
	}
	ptr=(int *)realloc(ptr,10*sizeof(int));
	if(ptr==NULL)
	{
		printf("failed to allocate memory");
		exit(2);
	}
	for(i=5;i<10;i++)
	{
		printf("enter the element 2:\n");
		scanf("%d",&ptr[i]);

	}
	for(i=0;i<10;i++)
	{
		printf("%-10d......%-10p\n",ptr[i],&ptr[i]);
	
	}
printf("ptr:%p-",ptr);


free(ptr);
}

