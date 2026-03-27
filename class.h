struct class;
typedef struct class{
int name;
void (*print_name)(struct class c);
} class;
void print_data_of_diff_types(){
int a=7;
float b=6.5f;
char c= 'A';
char* d= &c;
printf("%d\n",a);
printf("%f\n",b);
printf("%c\n",c);
printf("%p\n",d);
}
void hi(struct class a){
printf("     %d\n",a.name);
}
