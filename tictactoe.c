#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

char square[10] = {'o' , '1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9'};
int choice, player;

int checkForWin();
void displayBoard();
void markBoard(char);

int main()
{

   int gamestatus;
   char mark;   //X , O

   player = 1;

   do
   {
     
    displayBoard();

     //change turns
     player = (player % 2) ? 1 : 2;

     //get input
     printf("player %d , enter a number:", player);
     scanf("%d", &choice);

     //set the correct chracter based on player turns
     mark = (player == 1) ? 'X' : 'O';

     //set the board based on user choice or invalid choice
     markBoard(mark);

     gamestatus = checkForWin(); 
     
      player++;

   } while(gamestatus == -1);

  if(gamestatus == 1)
   printf("==>\aplayer %d win", --player);
  else
     printf("==>\agame draw");
   

   return (0);
}

/************************************** 
function to return game status 

1 for game is over with result
-1 for game is in progress
0 for game is over with no result

*****************************************/
     
int checkForWin()
{
    int returnValue = 0;

    if(square [1] == square[2] && square[2] == square[3])
    {
      returnValue = 1;
    }

    else if (square [4] == square[5] && square[5] == square[6])
    returnValue = 1;

    else if(square [7] == square[8] && square[8] == square[9])
    returnValue = 1;

    else if(square [1] == square[4] && square[4] == square[7])
    returnValue = 1;

    else if(square [2] == square[5] && square[5] == square[8])
    returnValue = 1;

    else if(square [3] == square[6] && square[6] == square[9])
    returnValue = 1;

    else if(square [1] == square[5] && square[5] == square[9])
    returnValue = 1;

    else if(square [3] == square[5] && square[5] == square[7])
    returnValue = 1;

    else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
     returnValue = 0;
    else 
      returnValue = -1;
    
    return returnValue;
}

   /*******************************************************
    function to draw board of tic tac toe with player mark
    *******************************************************/

void displayBoard()

{
    system("cls");

    printf("\n\n\t tic tac toe\n\n");


    printf("player 1 (x)   -   player 2 (o)\n\n\n");


    printf("     |     |     \n");
    printf("   %c |   %c |   %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("   %c |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("   %c |  %c  |  %c \n", square[7], square[8], square[9]);

     printf("     |     |     \n\n");
}

/*********************************************************************************
set the board with the correct character, x and o in the correct spot in the array

**********************************************************************************/
 
void markBoard(char mark)

{     
        
      if (choice == 1 && square[1] =='1') 
      square[1] = mark;

      else if(choice == 2 && square[2] =='2')
      square[2] = mark;

        else if(choice == 3 && square[3] =='3')
      square[3] = mark;

        else if(choice == 4 && square[4] =='4')
      square[4] = mark;

        else if(choice == 5 && square[5] =='5')
      square[5] = mark;

        else if(choice == 6 && square[6] =='6')  
      square[6] = mark;

        else if(choice == 7 && square[7] =='7')
      square[7] = mark;

        else if(choice == 8 && square[8] =='8')
      square[8] = mark;

        else if(choice == 9 && square[9] =='9')
      square[9] = mark;

      else 
      {
          printf("invalid move ");

          player--;
          getch();
      }
           
}




 