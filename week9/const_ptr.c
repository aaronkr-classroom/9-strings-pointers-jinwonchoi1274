#include <stdio.h>

int main(void) {
	int x = 10,
		y = 20;

	int* const p1 = &x;//주소는 변경 불가, 값 변경가능
	*p1 = 15;
	printf("p1 points to value: %d\n", *p1);
	//p1 = &y; 불가능

	const int* p2 = &x;
	p2 = &y;
	printf("p2 points to value: %d\n",*p2);

	const int* const p3 = &x; //주소와 값 변경 불가능
	printf("p3 point to value: %d\n", *p3);
	//*p3 = 30; 불가능
	//p3 = &y; 불가능

	return 0;
}