#include <stdio.h>

int main(void) {
	short birthday;
	short* ptr; //포인터 변수 선언
	ptr = &birthday; //birthday 변수의 주소를 ptr주소에 대입함

	int intvar = 42;
	float floatVar = 3.14;
	char charVar = 'A';
	double doubleVar = 9.81;

	int* intPtr = &intvar;
	float* floatPtr = &floatVar;
	char* charPtr = &charVar;
	double* doublePtr = &doubleVar;

	// %p 형식은 메모리 주소를 16진주 형식으로 출력함
	printf("birthday 변수의 주소는 %p 입니다.\n", ptr);

	printf("intVar 변수값:%d, 주고: %p\n", *intPtr, intPtr);
	printf("floatVar 변수값:%.2f 주고: %p\n", *floatPtr, floatPtr);
	printf("charVar 변수값:%c, 주고: %p\n", *charPtr, charPtr);
	printf("doubleVar 변수값:%.2f, 주고: %p\n", *doublePtr, doublePtr);



	return 0;
}