#include <stdio.h>

void displacement(char str[],int offset);
int main(int argc, char *argv[])
{

  char str[500];
  int offset;
  
  printf("請輸入一個字串: "); 
  scanf("%s", str);
  // printf("\n");
  printf("請輸入偏移量: ");
  scanf("%d", &offset);
  displacement(str,offset);

  // printf("\n");
  // printf("字串: %s\n",str);
  // printf("偏移量: %d",offset);
  
  
  return 0;
}

void displacement(char str[],int offset){
	int i=0,j=0;
  int newC=0;
	while(str[i]!='\0'){
		i++;
	}
	printf("轉換後的字串: ");
	for(j=0;j<i;j++){
  //   printf("org = %d\n",str[j]);
  //   str[j] = str[j] + offset;
  //   if(str[j]>126){
  //     str[j] = str[j] % 95;
  //   }
		// printf("new = %d\n",str[j]);
    printf("org = %d\n",str[j]);
    offset = offset % 95;
    newC = str[j] + offset;
    printf("newC = %d\n",newC);
    if(newC > 126){
      newC = newC % 95;
    }
    printf("newCmod95 = %d\n",newC);
    if(newC < 32){
      newC = newC + 95;
    }
    printf("newCadd95 = %d\n",newC);
    printf("new = %c\n",newC);
	}
	printf("\n");
}