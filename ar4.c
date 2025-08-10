//ROTATE AN ARRAY TO THE LEFT BY X th POSITIONS.
#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50,60};
    int arr2[100];
    int n=sizeof(arr)/4;
    int x;
    
    printf("ENTER THE INDEX:");
    
    scanf("%d",&x);
    x=x % n ;
    for(int i=0;i<n;i++){
        arr2[i]=arr[(x+i) % n];
    }
    printf("ARRAY AFTER ROTATION:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");

}

