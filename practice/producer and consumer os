#include<stdio.h>
void main()
{
        int buffer[30],bufsize,in,out,produce,consume,choice=0;in=0;out=0;bufsize=10;
        while(choice!=3)
        {
                printf("\n1.produce\n2.consume\n3.exit");
                printf("\nenter your choice");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:if((in+1)%bufsize==out)
                                       printf("\nbuffer is full");
                               else
                               {
                                       printf("enter the value\n");
                                       buffer[in]=produce;
                                       in=(in+1)%bufsize;
                               }
                               break;
                        case 2:if(in==out)
                                       printf("\buffer is empty");
                               else
                               {
                               consume=buffer[out];
                               printf("\n the consumed vale is %d",consume);
                               out=(out+1)%bufsize;
                               }
                               break;
                               }
                               }
                               }
                               
                               

