#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[50];
	int idx = 0;
	printf("문자열 입력 : ");
	scanf_s("%s", str, 50);		//배열 &생략가능
	printf("입력된 문자열 : %s\n", str);
	
	printf("문자 단위로 출력 : ");
	while (str[idx] !='\0')
	{
		printf("%c", str[idx]);
		idx++;
			 printf("\n");

	 } 
	 system("pause");

	 return 0;
}
