#include <stdio.h>
#include <string.h>
#include "class.h"
#include "mathparser.h"
int iiint(char a[]){
int i = 0;
int len = (int) strlen(a);
for(int j=0;a[j]!='\0';j++){
i *=10;
i+= (int) (a[j]-48);

}
return i;
}
void add(char a[], char b[]){
printf("#####+++++++##### %d\n",(iiint(a)+iiint(b)));
}

int main()
{
add("447","563");
printf("%c\n",50);
  MathParser mp = init_parser();
 printf("JJSR %d\n",mp.parse("2+3"));
   printf("Hello");
    return 0;
}
