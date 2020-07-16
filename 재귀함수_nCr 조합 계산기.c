#include <stdio.h>

int nCr(int n, int r)
{
	if(r == 0 || r == n)
	return 1;
	else
	return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main(void)
{
	int n, r;
	printf("nCr 조합 계산기\n");
	printf("n과 r을 차례로 입력하세요\n");
	scanf("%d %d", &n, &r);
	printf("결과 : %d", nCr(n, r));
	return 0;
}
