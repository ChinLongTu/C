#include <stdio.h>

void reverse(char str[]);
int main(int argc, char *argv[])
{

  char str[500];
  
  printf("請輸入一個字串: "); 
  scanf("%s", str);
  reverse(str);
  
  return 0;
}

void reverse(char str[]){
	int i=0,j=0;
	while(str[i]!='\0'){
		i++;
	}
	printf("轉換後的字串: ");
	for(j=i-1;j>=0;j--){
		printf("%c",str[j]);
	}
	printf("\n");
}