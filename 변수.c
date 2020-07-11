#include <stdio.h>
#include <limits.h>
int main(void)
{
	int x;
	x = 5;
	printf("%d\n", x);
	printf("변수 x의 메모리 크기는 %d입니다.\n", sizeof(x));
	
	int x1 = 50;
	float y1 = 123456789.123456789;
	printf("x = %d\n", x1);
	printf("y = %.2f\n", y1);	//실수, 소수점 두 번째 자리 까지 출력. float은 4byte 
	
	double z = 123456789.123456789;
	printf("z = %.2f\n", z);	//8byte라서 float이 담지 못하는 것도 출력 
	
	int max = INT_MAX;
	printf("int형의 최댓값 x는 %d입니다. \n", max);
	printf("max + 1은 %d \n", max + 1); //오버플로우 
	
	return 0;			//종료 
}
