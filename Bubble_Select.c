#include <stdio.h>

#include <stdbool.h>


int  bubbleSort(int arr[], int n, int *totalSwaps) {
    int i, j, temp, swaps;
     bool noChange = true; 
    for (i = 0; i < n-1; i++) {
        swaps = 0;
        
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
               swaps++; 
               noChange=false; 
               
                (*totalSwaps)++;

            }
            
        } 
        if(noChange)
        return swaps; 
        
        // Print the number of swaps for the current element
    }
    
}

int selectionSort(int arr[], int n,int *totalSwaps3)
{
int i, j, min_idx, temp,swaps3;
bool noChange2 = true; 
// One by one move boundary of unsorted subarray
for (i = 0; i < n-1; i++)
{
    swaps3=0; 
// Find the minimum element in unsorted array
min_idx = i;
for (j = i+1; j < n; j++)
if (arr[j] < arr[min_idx])
min_idx = j;
// Swap the found minimum element with the first element
temp = arr[i];
arr[i] = arr[min_idx];
arr[min_idx] = temp;
swaps3++; 
(*totalSwaps3)++;
noChange2=false;
}
return swaps3; 
}



int main() {
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n= 9; 
    int totalSwaps1 = 0;
    int totalSwaps2 = 0;
    int totalSwaps3 = 0;
    int totalSwaps4 = 0;
    
    printf("Array 1 Bubble Sort:\n");
    int swaps0= bubbleSort(array1, sizeof(array1)/sizeof(array1[0]), &totalSwaps1);
    for (int i = 0; i < n; i++) {
        printf("%d:%d\n", array1[i],swaps0); 
    }
    printf("Total # of swaps: %d\n", totalSwaps1);
    
    printf("\nArray 2 Bubble Sort:\n");
   int swaps2= bubbleSort(array2, sizeof(array2)/sizeof(array2[0]), &totalSwaps2);
   for (int i = 0; i < n; i++) {
        printf("%d:%d\n", array2[i],swaps2); 
    }
    printf("Total # of swaps: %d\n\n", totalSwaps2);
    
printf("Array 1 Selection Sort:\n");
    int swaps3= selectionSort(array1, sizeof(array1)/sizeof(array1[0]),&totalSwaps3);
    for (int i = 0; i < n; i++) {
        printf("%d:%d\n", array1[i],swaps3); 
    }
    printf("Total # of swaps: %d\n\n", totalSwaps3);

printf("Array 1 Selection Sort:\n");
    int swaps4= selectionSort(array2, sizeof(array1)/sizeof(array2[0]),&totalSwaps4);
    for (int i = 0; i < n; i++) {
        printf("%d:%d\n", array2[i],swaps4); 
    }
    printf("Total # of swaps: %d\n", totalSwaps4);

    return 0;
}