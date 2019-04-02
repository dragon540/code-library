#include <stdio.h>
#include <stdlib.h>

int binarysearch(int arr[], int n, int target);

int cmpfunc(const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}
int main() {

	int arr[100] = {0};
	int n;

	scanf("%d",&n);

	for(int i = 0; i < n; i++) {
		scanf("%d",&arr[i]);
	}
	// sort in increasing order
	qsort(arr, 10, sizeof(int), cmpfunc);

	printf("%d",binarysearch(arr, 10, 74));
	return 0;
}
int binarysearch(int arr[], int n, int target) {
	if(arr[n/2] = target) 
	{
		return (n/2);
	}
	else if(arr[n/2] < target)
	{
		binarysearch(arr, (n/2)+1, target);
	}
	else
	{
		binarysearch(arr, (n/2)-1, target);
	}
}