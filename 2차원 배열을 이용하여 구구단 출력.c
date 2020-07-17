#include <stdio.h>

int main(void)
{
	int i, j;
	int ggd[10][10];
	for(i=0; i<9; i++)
	{
		printf("\n %d´Ü \n",i);
		for(j=0; j<9; j++)
		{
			ggd[i][j] = i * j;
			printf("%d X %d = %d\n", i, j, ggd[i][j]);
		}
	}
}
