#include "Source1.h"


extern int method1(int a, int b) {
	return a * b;
}

extern int method2(int num) {
	if (num < 2)
		return 1;
	else
		return num * method2(num - 1);
}
