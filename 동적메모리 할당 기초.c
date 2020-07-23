#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi;	// Pointer Integer
	pi = (int *)malloc(sizeof(int));	//malloc = 메모리를 할당해라.
										//int형은 4byte라서 그냥 malloc(4)도 가능. 
	if(pi == NULL)
	{
		printf("동적 메모리 할당에 실패.\n");
		exit(1);
	} 
	*pi = 100;
	printf("%d\n", *pi);
				//동적 메모리 사용 이후 무조건 해당 메모리를 반환.
	free(pi);	//시스템의 안전성을 높이고 메모리 효율성을 높이기 위해 free로 해지 
	return 0;
} 
