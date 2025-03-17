#include <stdio.h>

int main(){
	double a, b, c, res;
	scanf("%lf %lf %lf ", &a, &b, &c);
	res = (2.0 * a + 3.0 * b + 5.0 * c)/10;
	printf("MEDIA = %.1lf\n", res);
	return 0;
}
