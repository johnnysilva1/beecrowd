#include <stdio.h>

int main(){
	double A, B, r;
	scanf("%lf %lf", &A, &B);
	r = ((A * 3.5) + (B * 7.5)) / 11;
	printf("MEDIA = %.5lf\n", r);
	return 0;
}
