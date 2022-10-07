#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bbl_srt(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            swap(&arr[j],&arr[j+1]);
        }
    }
}
void print_array(int arr[], int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int arr[]={9,8,7,4,6,5,3,1,2,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    bbl_srt(arr,n);
    print_array(arr,n);
}