#include <stdio.h>

int main() {

	float n;
	int k;
	int i;
	float sonuc = 1;
	int carptik = 0;
	
	printf("n gir: ");
	scanf("%f",&n);
	
	printf("k gir: ");
	scanf("%d",&k);
	
	if (n == 0.0 && k == 0) {
		printf("Hatali girdi\n");
		return -1;
	}

	if (k < 0) {
		k*=-1;
		carptik = 1;
	}
	
	for (i=0; i<k; i++)
		sonuc*=n;
		
	if (carptik)
		sonuc=1/sonuc;	
	
	printf("n ^ k = %.2f^%d = %.2f",n,k, sonuc);
	
	return 0;
	
}
