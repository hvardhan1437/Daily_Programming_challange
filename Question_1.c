#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array (only 0s, 1s, and 2s):\n");

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        
        if(arr[i] != 0 && arr[i] != 1 && arr[i] != 2){
            printf("Error: Array can only contain 0, 1, or 2.\n");
            return 1;
        }
    }
    
    int l = 0, mid = 0, high = n - 1, temp;

    while(mid <= high){
        if(arr[mid] == 0){
           
            temp = arr[l];
            arr[l] = arr[mid];
            arr[mid] = temp;
            l++;
            mid++;
        }
        else if(arr[mid] == 1){
            
            mid++;
        }
        else if(arr[mid] == 2){
            
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;  
        }
    }

    printf("Sorted array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}
