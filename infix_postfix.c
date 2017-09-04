//Author - Satyam Ramawat
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 20
int top=-1;
char stk[MAX];
void main()
{
void push(char);
char pop();
int priority(char);
char peak();
char value;
int i,j=0;
char infix[20],postfix[20],symbol;
system("cls");
printf("Enter a valid infix expression\n");
gets(infix);
push('(');
for(i=0;infix[i]!='\0';i++)
{
symbol=infix[i];
switch(symbol)
{
case'(':push(symbol);
	break;
case')':value=pop();
	while(value!='(')
	{
	postfix[j++]=value;
	value=pop();
	}
	break;
case'^':
case'+':
case'-':
case'*':
case'/':while(priority(peak())>=priority(symbol))
	{
	postfix[j++]=pop();
	}
	push(symbol);
	break;
default:postfix[j++]=symbol;
}
}
value=pop();
while(value!='(')
{
postfix[j++]=value;
value=pop();
}
postfix[j]='\0';
printf("Equivalent postfix is:\n");
puts(postfix);
getch();
}

void push(char k)
{
if(top==19)
printf("Overflow\n");
else
{
top++;
stk[top]=k;
}
}

char pop()
{
char v;
if(top==-1)
printf("Underflow\n");
else
{
v=stk[top];
top--;
}
return(v);
}

char peak()
{
return(stk[top]);
}

int priority(char symbol)
{
int rank=0;
switch(symbol)
{
case'^':rank=3;
	break;
case'*':
case'/':rank=2;
	break;
case'-':
case'+':rank=1;
	break;
case'(':
case')':rank=0;
	break;
}
return(rank);
}

