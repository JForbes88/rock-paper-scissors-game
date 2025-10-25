#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*need to get a value from the user, take a random value from the computer
put them up against each other and print the winner
but remember if they enter an invalid value you need to ask them again for a valid one
*/
int main(void)
{
srand(time(NULL));
char weapon;
char weapon2;
int x = rand() % 3;
int y = 1;
char playAgain = 'y';
printf("Welcome to Rock, Paper, Scissors\n\n");

do {
while (weapon != 'r' && weapon != 's' && weapon != 'p')
 {printf("choose your weapon,\nType \"r\" for rock, \"s\" for scissors or \"p\" for paper\n");
scanf(" %c", &weapon);
if  (weapon != 'r' && weapon != 's' && weapon != 'p')
printf("This is not a valid option \n");

}
if (weapon == 'r')
printf("You chose rock\n");
else if (weapon == 'p')
printf("You chose paper\n");
else
printf("You chose scissors\n");

if (x == 0)
{weapon2 = 'r';
printf("The computer chose rock\n");}
else if (x == 1)
{weapon2 = 'p';
printf("The computer chose paper\n");}
else if (x == 2)
{weapon2 = 's';
printf("The computer chose scissors\n");}

if(weapon == 'r' && weapon2 == 'r')
printf("it's a draw\n");
else if(weapon == 'r' && weapon2 == 'p')
printf("The computer wins\n");
else if (weapon == 'r' && weapon2 == 's')
printf("You win\n");
else if(weapon == 'p' && weapon2 == 'r')
printf("You win\n");
else if(weapon == 'p' && weapon2 == 'p')
printf("It's a draw\n");
else if(weapon == 'p' && weapon2 == 's')
printf("The computer wins\n");
else if(weapon == 's' && weapon2 == 's')
printf("It's a draw\n");
else if(weapon == 's' && weapon2 == 'r')
printf("The computer wins\n");
else if (weapon == 's' && weapon2 == 'p')
printf("You win\n");
printf("Would you like to play again?\n");

printf("Type 'y' for yes or 'n' for no\n");
scanf(" %c", &playAgain);
if(playAgain == 'y')
weapon = 'l';
else if(playAgain == 'n')
printf("Thank you for playing");

while (playAgain != 'y' && playAgain != 'n')
{printf("that is not a valid option\n");
printf("Type 'y' for yes or 'n' for no\n");
scanf(" %c", &playAgain);}
}
while (playAgain != 'n');
return 0;
}