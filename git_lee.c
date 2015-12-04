#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum(int a, int b);

int main(){

	int a, b;

	scanf("%d %d", &a, &b);


	printf("%d\n", sum(a, b));
	printf("%d\t", sum(a, b));


	return 0;
}

int sum(int a, int b){
	int sum = 0;
	while (a <= b){
		sum += a;
		a++;
	}
	return sum;
}