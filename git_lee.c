#include <stdio.h>

int main(){

	int a, b;

	scanf("%d %d", &a, &b);

	printf("%d", sum(a, b));

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