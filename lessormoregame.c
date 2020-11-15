#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
 
 int number,playernumber,level,mode,attempts,stop;
 srand(time(NULL));
 do
 {  
      system("cls");
 printf("---------------------------------------welcome to less or more game-----------------------------------------------------\n\n");

 printf(" chose if you want to play with the computer or with a friend\n");
     printf("to play with the computer chose 1\n");
     printf("to play with a friend chose 2\n");
        scanf("%d",&mode);
 switch (mode) 
 {
   case 1:
    printf("----you are now playing with the computer----\n\n");
        printf("chose your level to play\n");
            printf("level 1: the number will be from 0 to 100 \n");
            printf("level 2: the number will be from 0 to 1000 \n");
            printf("level 3: the number will be from 0 to 10000 \n");
        printf("which level do you want?\n");
            scanf("%d",&level);
            system("cls");

switch (level)
{
    case 1:
        printf("you have just selected level 1\n\n");
                 number = rand() % 100;
            do{
                printf("to start press 0");
                scanf("%d",attempts);
                                         attempts++;
                        printf("what is the number that the computer chosen ?\n");
                            scanf("%d",&playernumber);
                if (playernumber==number)
{
                        printf("bravo you won\n");
                        printf("you did it in %d attempts\n\n",attempts);

}               else if (playernumber<number)
{
                        printf("it's more then that \n");
}               else
{
                        printf("it's less then that \n");
}
}           while (playernumber!=number);

    break;

    case 2:
            printf("you have just selected level 2\n\n");
                number = rand() % 1000;
            
            do{
                 printf("to start press 0");
                scanf("%d",attempts);
                                         attempts++;
                        printf("what is the number that the computer chosen ?\n");
                            scanf("%d",&playernumber);
                if (playernumber==number)
{
                        printf("bravo you won\n");
                        printf("you did it in %d attemptes \n\n",attempts);

}               else if (playernumber<number)
{
                        printf("it's more then that \n");
}               else  
{
                        printf("it's less then that \n");
}
}           while (playernumber!=number);

    break;

    case 3:
            printf("you have just selected level 3\n\n");
                
                number = rand() % 10000;
            do{
                 printf("to start press 0");
                scanf("%d",attempts);
                                         attempts++;
                        printf("what is the number that the computer chosen ?\n");
                            scanf("%d",&playernumber);
                if (playernumber==number)
{
                        printf("bravo you won\n");
                        printf("you did it in %d attemptes \n\n",attempts);
}               else if (playernumber<number)
{
                        printf("it's more then that \n");
}               else
{
                        printf("it's less then that \n");

}
  }         while (playernumber!=number);
    break;
    
    default:            printf("the level you selected is not available\n\n");
    break;
  
}

    break;

    case 2:
                              system("cls");
            printf("you have just choosen to play with a friend\n\n");   
                printf("plz select your random number :");
                        scanf("%d",&number);
                        system("cls");
                printf("your friend just choosen a random number now guess it ?\n");
                
 do{
      printf("to start press 0");
                scanf("%d",attempts);
                                         attempts++;
                        printf("what is the number that your friend chosen ?\n");
                            scanf("%d",&playernumber);
                        
                if (playernumber==number)
{
                        printf("bravo you won\n");
                        printf("you did it in %d attemptes \n\n",attempts);
}               else if (playernumber<number)
{
                        printf("it's more then that \n");
}               else
{
                        printf("it's less then that \n");

}
  }         while (playernumber!=number);

    break;                     

default:
    break;
}
   printf("if you want to play agin press any number without 0\n");
   printf("if you want to end the game press 0\n");
         scanf("%d",&stop);

    system("cls");
 }while (stop!=0);
 
 


return 0;
}