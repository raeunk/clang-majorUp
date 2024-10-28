#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int a = 0;
    int b = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > a){
            a = arr[i];
        }
        if(arr[i] < b){
            b = arr[i];
        }
    }
    printf("%d %d", b, a);
}