#include <stdio.h>
int main(){
    int n, x;
    scanf("%d %d", &n, &x);
    int str[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &str[i]);
        if(str[i] < x) printf("%d ", str[i]);
    }
    return 0;
}