#include <stdio.h>
#include <math.h>	//abs : 절댓값

struct point{
	int x, y;
}; 

struct rect{
	struct point p1, p2;
};

int main(void)
{
	struct rect r;
	int w, h, area, peri;	// area = 넓이, peri = 둘레
	
	printf("왼쪽 상단의 좌표를 입력 : ");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	
	printf("오른쪽 하단의 좌표를 입력 : ");
	scanf("%d %d", &r.p2.x, &r.p2.y);
	
	w = abs(r.p2.x-r.p1.x);
	h = abs(r.p2.y-r.p1.y);
	
	area = w*h;
	peri = 2*w + 2*h;
	
	printf("사각형의 넓이는 %d이고 둘레는 %d입니다.", area, peri); 
	
}
