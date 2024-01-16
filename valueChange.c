#include <stdio.h>

int main(void)
{
	int a , b , tmp;
	tmp = a; // a가 소실되기전에 다른 변수에 저장
	a = b;
	b = tmp; 
	// scanf("%d%d", &a, &b);
	printf("a:%d, b:%d\n", a, b);
	return 0;

}
