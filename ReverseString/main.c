#include <stdio.h>

void reverseString(char str[]);
int main(int argc, char *argv[])
{
  char str[500];
  
  printf("請輸入一個字串: "); 
  scanf("%s", str);
  reverseString(str);
  
  return 0;
}

void reverseString(char str[]){
	int i=0,j=0;
	while(str[i]!='\0'){
		i++;
	}
	printf("轉換後的字串: ");
	//字元顛倒取出
  for(j=i-1;j>=0;j--){
		printf("%c",str[j]);
	}
	printf("\n");
}