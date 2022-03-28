#include <stdio.h>

char inStr[500];
char enStr[500];
char deStr[500];
int offset;

void encryption(char inStrF[],int offsetF);
void decryption(char enStrF[],int offsetF);
int main(int argc, char *argv[])
{
  
  printf("請輸入一個字串: "); 
  scanf("%s", inStr);
  printf("請輸入偏移量: ");
  scanf("%d", &offset);
  printf("進行加密，text：%s，key：%d\n",inStr,offset);
  encryption(inStr,offset);
  printf("加密後的字串：%s\n",enStr);
  printf("進行解密，text：%s，key：%d\n",enStr,offset);
  decryption(enStr,offset);
  printf("解密後的字串：%s\n",deStr);
  
  return 0;
}

void encryption(char inStrF[],int offsetF){
	int i=0,j=0;
  int newC=0;
  int newOffset;
  char newStr[500];
  //偏移量校正
  newOffset = offsetF;
  while(newOffset > 95 || newOffset < -95){
    if(newOffset > 95){
      newOffset -= 95;
    }else{
      newOffset += 95;
    }
  }
  //讀取字元數量
	while(inStrF[i]!='\0'){
		i++;
	}
  //字元各別轉換
	for(j=0;j<i;j++){
    //解密，加上偏移量
    newC = inStrF[j] + newOffset;
    if(newC > 126){
      newC = newC - 95;
    }
    if(newC < 32){
      newC = newC + 95;
    }
    enStr[j] = newC;
	}
}

void decryption(char enStrF[],int offsetF){
  int i=0,j=0;
  int newC=0;
  int newOffset;
  char newStr[500];
  //偏移量校正
  newOffset = offsetF;
  while(newOffset > 95 || newOffset < -95){
    if(newOffset > 95){
      newOffset -= 95;
    }else{
      newOffset += 95;
    }
  }
  //讀取字元數量
	while(enStrF[i]!='\0'){
		i++;
	}
  //字元各別轉換
	for(j=0;j<i;j++){
    //解密，減去偏移量
    newC = enStrF[j] - newOffset;
    if(newC > 126){
      newC = newC - 95;
    }
    if(newC < 32){
      newC = newC + 95;
    }
    deStr[j] = newC;
	}
}