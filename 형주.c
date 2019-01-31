#include<stdio.h>
int main() {
	
	int i, d,z;
	printf("구구단\n");
	for (z= 1; z <= 9; z++) {
		for (d = 1; d <= 9; d++) {
			for (i = 1; i <= 9; i++) {
				printf("%d*%d*%d=%d\n", d, i, z,i*d*z);
			}
		}
	}

	
	
	
	system("pause");
	return 0;
}

