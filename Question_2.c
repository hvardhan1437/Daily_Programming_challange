#include<stdio.h>
int main(){
    int sum=0,n;
    printf("Enter the number of integers in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:-");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }

    int ind_sum;
    ind_sum=((n+1)*(n+2))/2;
    printf("Missing Number:- %d",ind_sum-sum);
    return 0;

}