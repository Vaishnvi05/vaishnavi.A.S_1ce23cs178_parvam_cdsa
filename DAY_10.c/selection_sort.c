#include<stdio.h>
int main(){
    int arr[5]={2,8,9,5,7};
    int n=5;

    for(int i=0;i<n;i++){
        int minIndex=i;

    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minIndex]){
            minIndex=j;
        }
    }
      int temp=arr[minIndex];
      arr[minIndex]=arr[i];
      arr[i]=temp;
    }
    printf("Sorted array:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}