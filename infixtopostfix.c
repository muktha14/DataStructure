#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int top=-1;
char stack[20];
char post[40];    
int size;
int a=10,b=5,c=60,d=6,e=8;
void push(char el){
    if(top>=19){printf("\nStack overflow");}
    else
    {
        top++;
        stack[top]=el;
    }
    printf("\nStack:%s\n",stack);
}
char pop(){
    printf("\nTop:%d",top);
    if(top<-1){printf("\nStack Underflow");}
    else{
        int el=stack[top];
        top--;
        return el;
    }
    printf("\n");
     printf("\nThe final postfix expression = %s",post);
}
int precedence(char e){
    switch(e){
        case '-':
        case '+': return 0;
        case '*':
        case '/': return 1;
        case '^': return 2;
        default:return -1;
    }
}
void main(){
    char infix[30];
    int i=0,j=0;
	int discard;
	char c;
    printf("Enter an expression:");
    scanf("%s",&infix);
    push('#');
    for(i=0;i<strlen(infix);i++){
        c=infix[i];
        if(isalnum(c)){post[j++]=c;}
        else if(c=='('){push(c);}
        else if(c==')'){
            while(stack[top]!='('){
                post[j++]=pop();
                
            }discard=pop();
        }
        else{
            while(precedence(stack[top])>=precedence(c)){
                post[j++]=pop();
            }
            push(c);
            
        }
    printf("\nThe postfix expression = %s",post);    
    }
    while(top!=0){
        post[j++]=pop();
    }
    printf("\nThe final postfix expression = %s",post);
}
