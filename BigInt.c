// program for adding two big integers
#include <stdio.h>

char a[100], b[100], sum[100];
//void addition(char a*, char b*, int n);

void addition(char *a, char *b, int n) {
	int carry = 0;
	for(int i=0; i<101; i++) {
		sum[i] = '0';
	}
	for(int i = n-1; (i > 0) || a[i]!=0; i--) 
	{
		int u = (a[i] - '0') + (b[i] - '0') + carry;

		sum[i] = (u%10)+'0';

		carry = u/10;
	}
}
int main() {
	int n;
	scanf("%100s", a);
	scanf("%100s", b);
	scanf("%d", &n);
	
	addition(a, b, n);
	for(int i=0;i<n;i++) 
	{
		printf("%c", sum[i]);
	}
	printf("\n");

	return 0;
}