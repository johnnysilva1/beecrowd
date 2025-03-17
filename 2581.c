#include <stdio.h>

int main(){
	int n;
	char s[100];
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%100s", s);
	}

	for(int i = 0; i < n; i++){
		printf("I am Toorg!\n");
	}
	return 0;
}
