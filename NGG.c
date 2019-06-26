#include<stdio.h>
#include<stdlib.h>
#define clear() printf("\033[H\033[J")
F;
int Custom_Game();
int main()
{
        int op1;
        int Dgame, Cgame;
        do{
                clear();
                printf("\t\t\t#################################################");
                printf("\n\t\t\t#                                    \t\t#");
                printf("\n\t\t\t#\t Welcome to Number Guessing Game  \t#");
                printf("\n\t\t\t#                                    \t\t#");
                printf("\n\t\t\t#################################################");
                printf("\n\n\tEnetr \n\t\t 1. Default Guessing Game \n\t\t 2. Costmzise Your Game \n\t\t 3. Exit \n\t Enter Your Choice: ");
                scanf("%d", &op1);
                switch(op1)
                {
                        case 1:
                                Dgame= Default_Game();
                                break;
                        case 2:
                                Cgame= Custom_Game();
                                break;
                        case 3:
                                return 0;
                        default:
                                printf("\tWrong input, Try Again");
                }
        }while(op1!=3);
        return 0;
}
int Default_Game()
{
        int op2;
        do
        {
                clear();
                int i, rval=0 , val=0 , flag=0;
                printf("\t\t\t#################################################");
                printf("\n\t\t\t#                                    \t\t#");
                printf("\n\t\t\t#\t      Default Guessing Game \t   \t#");
                printf("\n\t\t\t#                                    \t\t#");
                printf("\n\t\t\t#################################################");
                printf("\n\n\tRULES:\n\t1. Only 8 chances to guess the randomly generated number.");
                printf("\n\t2. You can WIN the game when the number guessed is same as the randomly generated number.");
                printf("\n\t3. Hints will be provided during the PLAY.");
                printf("\n\t4. Random Number is Between 1-100");
                rval= rand() % 100;
                printf("\n\n\tGood Luck. Start Guessing");
                i=1;
                while(i<=8)
                {
                        printf("\n\n\tGUESS %d ? ",i);
                        scanf("%d", &val);
                        if(val > rval)
                        {
                                printf("\tYour value is GREATER THAN the randomly generated number");
                        }
                        else if(val < rval)
                        {
                                printf("\tYour value is LESSER THAN the randomly generated number");
                        }
                        else if(val==rval)
                        {
                                flag=1;
                                break;
                        }
                        i++;
                }
                if(flag==1)
                {
                        printf("\n\n\t\t You are th WINNER. In %d tries", i);
                }
                else
                {
                        printf("\n\n\t\t You LOSE. Number was: %d", rval);
                }
                conti:
                printf("\n\t\t Do You Want To Continue (Y=1/N=0): ");
                scanf("%d",&op2);
                if(op2== 1)
                {
                        printf("");
                }
                else if(op2== 0)
                {
                        printf("");
                }
                else
                {
                        printf("\n\t\t Wrong input");
                        goto conti;
                }
        }while(op2!= 0);
        return 0;
}
int Custom_Game()
{
        int op3=0;
        startc:
        do
        {
                clear();
                int j= 0, c= 0, crval= 0, cval= 0, cflag= 0;
                int index= 0;
                int n=0, m= 0;
                int a[n];
                printf("\t\t\t#################################################");
                printf("\n\t\t\t#                                    \t\t#");
                printf("\n\t\t\t#          Customise your Guessing Game  \t#");
                printf("\n\t\t\t#                                    \t\t#");
                printf("\n\t\t\t#################################################");
                printf("\n\tNote \n\t- Number of Elements cannot be zero or one \n\t- If Number of elements is between \n\n\t\tLess than 4 user gets 1 guessing chances \n\t\t4-20 user gets 2 guessing chances \n\t\t21-80 user gets 5 guessing chances \n\t\t80+ user gets 10 guessing chances");
                printf("\n\n\tEnter the Number of Elements to be Entered: ");
                scanf("%d", &n);
                if(n<=1)
                {
                        printf("\n\tNumber of element cannot be zero/one Try Again!!\n\tEnter any key.\n\n");
                        goto startc;
                }
                printf("\n\tEnter the Elements:\n");
                for(j=1; j<=n; j++)
                {
                        printf("\t\t\t  ");
                        scanf("%d", &a[j]);
                }
                if(n>80)
                {
                        m= 10;
                }
                else if(n>= 21 && n<=80)
                {
                        m= 5;
                }
                else if(n>=4 && n<=20)
                {
                        m=2;
                }
                else if(n==2 || n==3)
                {
                        m=1;
                }
                printf("\t\t\t\t\tCUSTOM GUESSING GAME\n");
                printf("\tRULES:\n\t1. Only %d chances to guess the randomly generated number.",m);
                printf("\n\t2. You can WIN the game when the number guessed is same as the randomly generated number.");
                printf("\n\t3. Hints will be provided during the PLAY.");
                index= rand() % n;
                crval= a[index];
                printf("\n\n\tGood Luck. Start Guessing");
                for (c=1; c<= m; c++)
                {
                        printf("\n\n\tGUESS %d ? ",c);
                        scanf("%d", &cval);
                        if(cval > crval)
                                printf("\tYour value is GREATER THAN the randomly generated number");
                        else if(cval < crval)
                                printf("\tYour value is LESSER THAN the randomly generated number");
                        else if(cval== crval)
                        {
                                cflag=1;
                                break;
                        }
                }
                if (cflag==0)
                {
                        printf("\n\n\t\t You LOSE. Number was: %d", crval);
                }
                else
                {
                printf("\n\n\t\t You are the WINNER. No. of tries = %d ",c);
                }
                conti:
                printf("\n\t\t Do You Want To Continue (Y=1/N=0): ");
                scanf("%d", &op3);
                if(op3== 1)
                {
                        printf("");
                }
                else if(op3== 0)
                {
                        printf("");
                }
                else
                {
                        printf("\n\t\tWrong input");
                        goto conti;
                }
        }while(op3!= 0);
        return 0;
}
