#include <stdio.h>
#include <limits.h>	//int���� �ִ� �ּ� �� ����. 
#define NUMBER 5


int main(void)
{
	int i, j, max, min = INT_MAX, index, index2;
	int array[NUMBER];	
	back:
	for(i=0; i<NUMBER; i++)
	{
	 
		printf("5���� ���� �Է��ϼ��� : ");		
		scanf("%d", &array[i]);
	
		if(max < array[i])
		{
			max = array[i];
			index = i;
		}
		if(min > array[i])
		{
			min = array[i];
			index2 = i;
		} 
	}
	
	printf("���� ū ���� %d��° �ִ� %d �Դϴ�.\n", index + 1, max); 
	printf("���� ���� ���� %d��° �ִ� %d �Դϴ�.\n", index2 + 1, min); 


} 
