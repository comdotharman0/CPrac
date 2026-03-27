#ifndef MATH_PARSER_H
#define MATH_PARSER_H
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

union MathParser;
typedef union MathParser{
int (*parse)(char expr[]);
} MathParser;

char operations(int expr){
switch (expr){
case (int) '+':
    return (char) expr;
    break;
case (int) '-':
    return (char) expr;
    break;
case (int) '*':
    return (char) expr;
    break;
case (int) '/':
    return (char) expr;
    break;
default:
    return 'N';
}
}
int parse(char expr[]){

int len= (int) strlen(expr);
char operators[]="+-*/";
for(int i=0; i<len;i++){
//printf("## %d %c \n",expr[i],expr[i]);
printf("##### %c\n",operations(expr[i]));
}
return 9;
}
MathParser init_parser(){
MathParser mp={parse};
return mp;

}

#endif
