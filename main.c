#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
void bubbleSort(int  *const a);
int main(int argc, char *argv[]) {
	int a[5]={1,6,9,8,4},i;
	bubbleSort(a);
	for(i=0;i<5;i++){
		printf ("%d ",a[i]);
	}
	

	
	return 0;
}

