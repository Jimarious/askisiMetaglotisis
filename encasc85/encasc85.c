#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void){
  //i=metraei ta bytes pu exoun symplhrothei mexri tora. Tha ton xthsimopoihso kai os counter.
  //j=kathorizei se poia dynamh tha ypsothei to 256.
  //c=o xarakthras ton opoio eisagei o xrhsths.
  //m=to ypoloipo gia na vrethun ta pshfeia sto 85diko systhma.
  //l=metraei tis metavlhtes tu pinaka p.
  //N=o arithmos ton 0 pu xreazomaste ga na symplhrothei h tetrada.
  //m=mh proshmasmenos akeraios gai thn kodkopoihsh.
  bool flag=0,flag2=0;
  int i=0,j=3,l=0,N=0;
  unsigned int a=0;
  char c=0,p[5];
  printf("<~");
  while(i<4){
    if(flag==0){
      c=getchar();
      flag=c==10;//ta ubuntu mu anti gia EOF evazan ton arthmo 10 sto telos tu arxeiu, mu phre poly ora na to katalavo, de gnorizo giati...
    }
    if(flag){
      c=0;
      N++;
    }
    a+=c*pow(256,j);
    i++;
    j--;
  }
  if(!a){//ama dhladh exei eisaxthei mia terada apo mdenika bytes.
    putchar('z');
  }
  while(a!=0){
    p[l]=(a%85)+33;
    a/=85;
    l++;
  }
  for(l--; l>=N; l--){
    putchar(p[l]);
  }
  if(flag){
    printf("~>\n");
    exit(0);//afto edo to exo gia argotera pu tha to valo se megalytero loop.
  }
  printf("~>\n");
  return 0;
}
