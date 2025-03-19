#include <stdio.h>
#include <string.h>

int main(){

	int aCA[100000], aCB[100000], nCartasA, nCartasB, x, i, aEMb = 0, bEMa = 0;

while(scanf("%d %d", &nCartasA, &nCartasB) && (nCartasA || nCartasB)){
	memset(aCA, 0, sizeof(aCA));
	memset(aCB, 0, sizeof(aCB));
	
	for(i = 0; i < nCartasA; i++){
		scanf("%d", &x);
		aCA[x]++;
	}

	for(i = 0; i < nCartasB; i++){
		scanf("%d", &x);
		aCB[x]++;
	}
	
	for(i = 0; i < 100000; i++){
		if(aCA[i] != 0 && aCB[i] == 0)
			aEMb++;

		if(aCB[i] != 0 && aCA[i] == 0)
			bEMa++;
	}

	aEMb > bEMa ? printf("%d\n", bEMa) : printf("%d\n", aEMb);
	aEMb = 0;
	bEMa = 0;
	
}

	return 0;

}
