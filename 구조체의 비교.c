#include <stdio.h>

//����ü�� ������ ���� ���Ƶ� ���� �񱳰� �Ұ���. 
struct point{
	int x, y;
};

void comparePoint (struct point p1, struct point p2){
	if((p1.x == p2.x) && (p1.y == p2.y))
	{
	printf("p1�� p2�� �����ϴ�.");
	} //�����Լ��� �ֱ⺸�� ���� �Լ��� �����ϴ� ���� ü����. 
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
//		printf("p1�� p2�� �����ϴ�.");
//	
//	} �Ұ���. 
	comparePoint(p1, p2);

	return 0;
}
