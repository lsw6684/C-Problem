#include <stdio.h>

int main(void)
{
	
	char input[1001];
	printf("길이가 궁금한 문자열을 입력하세요.\n"); 
	gets(input);

	int count;
	while(input[count] != '\0' )
	{
		count ++;		
	} 
	printf("입력한 문자열의 길이는 %d 입니다.\n", count);
	return 0;	
}
