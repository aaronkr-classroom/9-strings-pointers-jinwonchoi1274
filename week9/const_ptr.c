#include <stdio.h>

int main(void) {
	int x = 10,
		y = 20;

	int* const p1 = &x;//�ּҴ� ���� �Ұ�, �� ���氡��
	*p1 = 15;
	printf("p1 points to value: %d\n", *p1);
	//p1 = &y; �Ұ���

	const int* p2 = &x;
	p2 = &y;
	printf("p2 points to value: %d\n",*p2);

	const int* const p3 = &x; //�ּҿ� �� ���� �Ұ���
	printf("p3 point to value: %d\n", *p3);
	//*p3 = 30; �Ұ���
	//p3 = &y; �Ұ���

	return 0;
}