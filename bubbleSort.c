#include <stdio.h> 

void swap(float *x, float *y) 
{ 
	float temp = *x; 
	*x = *y; 
	*y = temp; 
} 

void bubbleSort(float books[], int size) { 

    for (int i = 0; i < size - 1; i++) {	 
	    for (int j = 0; j < size - i - 1; j++) {
		    if (books[j] > books[j+1]) 
			    swap(&books[j], &books[j+1]); 
        }
    } 
}

void printbooks(float books[], int size) {  
	for (int i=0; i < size; i++) 
		printf("%f ", books[i]); 
	printf("\n"); 
} 

int main() 
{ 
	int standard = 7;
    float books[] = {1.1, 2.1, 3.1, 4.1, 5.1, 6.1, 7.1, 7.2, 6.2, 5.2, 4.2, 3.2, 2.2, 1.2, 1.3, 2.3, 3.3, 4.3, 5.3, 6.3, 7.3, 7.4, 6.4, 5.4, 4.4, 3.4, 2.4, 1.4};
    int size = sizeof(books) / sizeof(books[0]) ;

	bubbleSort(books, size); 
	printf("Sorted books: \n"); 
	printbooks(books, size); 
	return 0; 
} 
