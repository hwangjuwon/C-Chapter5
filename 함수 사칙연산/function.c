#include <stdio.h>
#include "function.h"





void p(const char* msg, int n) {
	printf("%s 출력: %d\n", msg, n);

}

int showMenu(int n) {
	int input;
	printf("숫자 %d 입력: ", n); scanf_s("%d", &input);
	return input;


}
