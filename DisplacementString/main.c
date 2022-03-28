#include <stdio.h>

void displacementStr(char str[],int offset);
int main(int argc, char *argv[])
{
  char str[500];
  int offset;
  
  printf("請輸入一個字串: "); 
  scanf("%s", str);
  printf("請輸入偏移量: ");
  scanf("%d", &offset);
  displacementStr(str,offset);
  
  
  return 0;
}

void displacementStr(char str[],int offset){
	int i=0,j=0;
  int newC=0;
  //偏移量校正
  while(offset > 95 || offset < -95){
    if(offset > 95){
      offset -= 95;
    }else{
      offset += 95;
    }
  }
  //讀取字元數量
	while(str[i]!='\0'){
		i++;
	}
	printf("轉換後的字串: ");
  //字元各別轉換
	for(j=0;j<i;j++){
    newC = str[j] + offset;
    if(newC > 126){
      newC = newC - 95;
    }
    if(newC < 32){
      newC = newC + 95;
    }
    printf("%c",newC);
	}
	printf("\n");
}