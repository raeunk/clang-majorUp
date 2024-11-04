# include <stdio.h>
char str[101];
int main(){
	int cnt;
	scanf("%s", str);
	for(cnt = 0; str[cnt] != NULL; cnt++);
	printf("%d", cnt);
	return 0;
}