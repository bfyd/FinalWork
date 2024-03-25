
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Rus");
	int m[20], i1 = 0, k1 = 0, ch1 = 0, nch1 = 0;
	int* p1;
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