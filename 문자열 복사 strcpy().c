#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[1000], result[2];
	gets(input);
	strcpy(result, input);
	printf("입력한 문자열을 복사하였습니다.\n : %s\n", result);
	return 0;
 } 
