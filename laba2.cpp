#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
	int main() {
		char laba2[256];
		printf("vvedite stroku: ");
		fgets(laba2, 255, stdin);
		int a = 0, b = 0, c = 0, i = 0, d = 0, e = 0;
		while (laba2[i] != '\0') {
			if ((laba2[i] >= 'A' && laba2[i] <= 'Z') || (laba2[i] >= 'a' && laba2[i] <= 'z')) {
				c++;
				e = c / 2;
			}
			else {
				for (a = i - c, b = i - 1; a < b; ++a, --b) {
					if (laba2[a] == laba2[b]) {
						d++;
					}
				}
				if (d == e ){
					for (a = i - c; a <= i - 1; a++)
						printf("%c", laba2[a]);
					printf(" ");
				}
				d = 0;
				c = 0;
			}
			i++;
		}
		return 0;
    }