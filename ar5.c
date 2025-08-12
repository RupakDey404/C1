//REMOVING DUPLICTE ELEMENTS

#include<stdio.h>
int main(){
    int arr[100], n, i, j, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Remove duplicates using break
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                // Shift elements left
                for(k = j; k < n ; k++){
                    arr[k] = arr[k + 1];
                }
                n--; // Reduce array size
                j--; // Stay at the same index after shifting
                 // Exit inner loop after removing a duplicate
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}