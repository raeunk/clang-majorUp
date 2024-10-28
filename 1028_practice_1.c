#include <stdio.h>
int main(){
    int n, v;
    int a = 0;
    scanf("%d", &n);
    int str[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &str[i]);
    }
    scanf("%d", &v);
    for(int i = 0; i < n; i++){
        if(str[i] == v) a++;
    }
    printf("%d", a);
    return 0;
}