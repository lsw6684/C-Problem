#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *pc = NULL;
	int i = 0;
	pc = (char *)malloc(100 * sizeof(char));
	if(pc == NULL)
	{
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}
	// pc가 가리키는 포인터를 1씩 증가시키며 알파벳 소문자를 삽입합니다.
	for(i = 0; i < 26; i++)
	{
		*(pc + i) = 'a' + i;	//아스키코드 a = 97, 98 = b... 
	} 
	*(pc + i) = 0;				//아스키코드 0 은 NULL을 의미.
	//포인터가 NULL을 마주치면 문자열의 종료로 인식.
	
	printf("%s\n", pc);		//문자열 %s 
	free(pc);
	return 0;
}
