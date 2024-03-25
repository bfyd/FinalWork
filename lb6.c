
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Rus");
	int m[20], i = 0, k = 0, ch = 0, nch = 0;
	int* p;
	p = m;
	for (k = 0;k < 20;k++) {
		*p = (rand() % 100);
		printf(" %3d ", *p);
		p++;
	}
	p = m;
	for (k = 0;k < 20;k++) {
		if (*p % 2 == 0) {
			ch++;
		}
		else {
			nch++;	
		}
		p++;
	}
	printf("\nКоличество чётных:%d\n", ch);
	printf("Количество нечётных:%d\n", nch);
	getchar();
	getchar();
	getchar();
}