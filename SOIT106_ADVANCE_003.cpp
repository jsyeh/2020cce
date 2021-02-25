#include <stdio.h>
int a[10000];
int main()
{
	int N=0;
	for(int i=0; i<10000; i++){
		scanf("%d", &a[i] );
		if(a[i]==0) break;
		
		N++;
	}
	
	for(int i=N-1; i>=0; i--){
		printf("%d ", a[i]);
	}
	printf("\n");
}