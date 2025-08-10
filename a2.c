//SECOND LARGEST ELEMENT IN AN ARRAY.
#include<stdio.h>
int main(){
    int arr[]={23,9,-1,-45,90,10};
    int n=sizeof(arr)/4;
    int mx=arr[0];
    int mx2=arr[0];
    for(int i=0;i<n;i++){
        if (mx<arr[i]){
            mx=arr[i];
        }
        if(mx2 < arr[i] &&  mx2!=mx){
            mx2=arr[i];
        }
        printf("THE SECOND LARGEST ELEMENT OF THE ARRAY IS:%d",mx2);
        break;
        


        
    }


}

