#include <stdio.h>
#include <string.h>

int main(void)
{
	int one, two;
	printf("첫 번째 문자열을 입력하세요.\n");
	char inputOne[1000];
	gets(inputOne);
	
	printf("두 번째 문자열을 입력하세요.\n");
	char inputTwo[1000];
	gets(inputTwo);
	printf("문자열 비교 : %d\n", strcmp(inputOne, inputTwo));
	//-1, 첫 번째 문자가 앞에옵니다.
	//1, 두 번째 문자가 앞에옵니다.
	//0, 같은 문자를 입력하였습니다. 
	 
	 
	return 0;
}
