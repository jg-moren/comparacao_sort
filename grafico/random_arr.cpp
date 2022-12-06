#import"sort.h"

#include<time.h>
void randomArr(int arr[], int size){
    srand(time(NULL));
	for (int i=0;i<size;i++)arr[i]=rand()%size;
}
void reverseArr(int arr[], int size){
	for (int i=0;i<size;i++)arr[i]=size-i;
}
void notRepeatArr(int arr[], int size){
	
    srand(time(NULL));
	for (int i=0;i<size;i++)arr[i]=i;
	for (int i=0;i<size;i++){	
		int r = rand()%size;
	    int aux = arr[r];
	    arr[r] = arr[i];
	    arr[i] = aux;
	}
}
void quaseArr(int arr[], int size){
	for (int i=0;i<size;i++)arr[i]=i;
	for (int i=0;i<10;i++){
		int r1 = rand()%size;
		int r2 = rand()%size;
	    int aux = arr[r1];
	    arr[r1] = arr[r2];
	    arr[r2] = aux;
	}
}
