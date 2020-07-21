#include <stdio.h>

//구조체는 변수의 값이 같아도 직접 비교가 불가능. 
struct point{
	int x, y;
};

void comparePoint (struct point p1, struct point p2){
	if((p1.x == p2.x) && (p1.y == p2.y))
	{
	printf("p1과 p2가 같습니다.");
	} //메인함수에 넣기보다 따로 함수로 관리하는 것이 체계적. 
}


int main(void)
{
	struct point p1, p2;
	
	p1.x = 30;
	p1.y = 10;
	
	p2.x = 30;
	p2.y = 10;
	
//	if(p1==p2)
//	{
//		printf("p1과 p2가 같습니다.");
//	
//	} 불가능. 
	comparePoint(p1, p2);

	return 0;
}
