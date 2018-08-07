/*InsertionSort
	1. divid array to sorted and unsorted
	2. picking element from the unsorted
	3. and inserting into the sorted array
*/

#include <iostream>
using namespace std;

void insertionSort(int a[], int len){
	for(int i = 1; i<len; i++){
		int value = a[i];
		int hole = i;

		while(hole > 0 && a[hole-1]>value){
			a[hole] = a[hole-1];
			hole--;
		}

		a[hole] = value;
	}
}

int main(){
	int A[] = {7,8,9,5,3,4,6,2,1};

	for(int i=0; i < sizeof(A)/sizeof(A[0]); i++){
		printf("%d ", A[i]);
	}
	printf("\n");

	insertionSort(A, 9);
	
	for(int i=0; i < sizeof(A)/sizeof(A[0]); i++){
		printf("%d ", A[i]);
	}
	printf("\n");
}