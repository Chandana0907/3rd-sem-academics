#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define max_size 100
typedef struct{
    char items[max_size];
    int top;
}stack;
void initilizestack(stack *s);
void push(stack *s,char c);
char pop(stack *s);
bool ispalindrome(char *str);
int main(){
    char str[max_size];
    printf("Enter a stirng:");
    fgets(str,max_size,stdin);
    str[strcspn(str,"\n")]='\0';
    if(ispalindrome(str)){
        printf("The string is a palindorome.\n");
    }else{
        printf("The string is not a palindorme\n");
    }
    return 0;
}
void initializestack(stack *s){
    s->top=-1;
}
void push(stack *s,char c){
    if(s->top==max_size-1){
        printf("stack overflow\n");
        exit(1);
    }
    s->items[++(s->top)]=c;
}
char pop(stack *s){
    if(s->top==-1){
        printf("stack underflow\n");
        exit(1);
    }
    return s->items[(s->top)--];
}
bool ispalindrome(char *str){
    stack stack;
    initializestack(&stack);
    int len=strlen(str);
    int i;
    for(i=0;i<len;i++){
        push(&stack,str[i]);
    }
    for(i=0;i<len;i++){
        if(pop(&stack)!=str[i]){
            return false;
        }}
        return true;
}
