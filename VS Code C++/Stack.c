#include<stdio.h>
#include<conio.h>
#include<process.h>
#define Max 10

int S[Max], Top = -1, C, x;

int push();
int pop();
int display();

int main()
{
    printf("Enter Your Choice For Stack Operation: \n");
    printf("1. Insertion.\n");
    printf("2. Deleition.\n");
    printf("3. Dispaly.\n\n");
    scanf("%d",&C);

    do
    {
       switch (C)
       {
       case 1:
           push();
           break;
        
        case 2:
           pop();
           break;
        
        case 3:
           display();
           break;
       
       default:
           break;
       }

        printf("Enter Your Choice For Stack Operation: \n");
        printf("1. Insertion.\n");
        printf("2. Deleition.\n");
        printf("3. Display.\n");
        scanf("%d",&C);
    }

    while (C<=4);
    {
        printf("choice is Wrong.");
    }   
}

int push()
{
    if(Top == Max)
    {
        printf("Stack OverFlow.\n");
    }
    else
    {
    printf("Enter Item To be Insert In Stack: \n");
    scanf("%d",&x);
    Top = Top+1;
    S[Top] = x;
    }
}

int pop()
{
    if (Top==-1)
    {
        printf("Satck Is UnderFlow.\n");
    }
    else
    {
        x=S[Top];
        Top = Top-1;
        printf("Enter Item To be Insert In Stack: \n");
        scanf("%d",&x);
    }
}

int display()
{
    if (Top==-1)
    {
        printf("Satck Is UnderFlow.\n");
    }
    else
    {
        for (int i=Top; i>0; i++)
        {
            printf("%d",S[i]);
        }
    }
}