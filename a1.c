//LARGEST ELEMENT  IN AN ARRAY.
 #include<stdio.h>
int main(){
    int arr[]={23,9,-1,-45,90,10};
    int n=sizeof(arr)/4;//n=no of elements present in array.
    int mx=arr[0];

    for(int  i=0;i<n;i++){
        if(arr[i]>=mx){
            mx=arr[i];
            
        }
    }
    printf("the maximum element of the array is:%d",mx);
}



