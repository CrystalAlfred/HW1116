#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define SIZE 10

int main(void)
{
	int tmp;
	int a[SIZE];
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		a[i] = rand() % 100;
	}
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
		{
			if (a[j] < a[j + 1]) {
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;

			}
		}
	}
	for (int j = 0; j < SIZE; j++)printf("%4d ", a[j]);
	printf("\n");
	system("pause");


}