#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int a;
	printf("Introduceti o cifra: ");
	scanf("%d", &a);
	if (a == 2 || a == 4 || a == 9) {
		printf("Numarul citit se afla in multimea {2,4,9}");
	}
	else
		printf("Numarul citit nu se afla in multimea {2,4,9}");
}
