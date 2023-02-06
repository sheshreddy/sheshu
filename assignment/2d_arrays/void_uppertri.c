#include<stdio.h>
#define R 3
#define C 3

void read(int r,int c,int (*ptr)[c]);
void diagonal(int r,int c,int(*ptr)[c]);

void main()
{
	void*vptr;
	vptr=diagonal;
	int r,c;
	int ptr[R][C];
	read(R,C,ptr);
	if(R==C)
	//	diagonal(R,C,ptr);
	((void (*)(int,int,int(*)[]))vptr)(R,C,ptr);
}

void read(int r,int c,int(*ptr)[c])
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&ptr[i][j]);
		}
	}
}





void diagonal(int r,int c,int(*ptr)[c])
{
	int i,j;
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			if(i>j)
			{
				ptr[i][j]=0;
			}
		}
	}

	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%d  ",ptr[i][j]);
		}
		printf("\n");
	}
}

