#include <stdio.h>

void Swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}
void Swap2(int *pa, int *pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main(void) {
	int start = 96,
		end = 5;

	printf("Swap 1:\n");
	printf("before: start = %d, end = %d\n", start, end);
	if (start > end) Swap1(start, end); //값 전송(사본)
	printf("after: srart = %d,end = %d\n", start, end);

	printf("\nSwap 2:\n");
	printf("before: start = %d, end = %d\n", start, end);
	if (start > end) Swap2(&start, &end); //주소 전송(실제 값)
	printf("after: srart = %d,end = %d\n", start, end);
	return 0;
}