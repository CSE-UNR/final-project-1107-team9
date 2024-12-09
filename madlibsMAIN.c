//Eddie Tarango, John Brandt, Nathan Nelson
//12/2/24
//Final Project


#include <stdio.h>

int main () {

//declaration
char word[15] [10]
char phrase[64] [11];
int count;
int i = 0;0

FILE *fpA, *fpB;

//opening files
fpA = fopen("madlib1.txt", "r");
fpB = fopen("MadLibFinalScript.txt", "w");

//prompting and gathering user input
printf ("Enter an adjective:\n");
scanf ("%s", word[0]);

printf ("Enter an adjective:\n");
scanf ("%s", word[1]);

printf ("Enter a noun:\n");
scanf ("%s", word[2]);

printf ("Enter a noun:\n");
scanf ("%s", word[3]);

printf ("Enter a verb:\n");
scanf ("%s", word[4]);

printf ("Enter a noun:\n");
scanf ("%s", word[5]);

printf ("Enter a noun:\n");
scanf ("%s", word[6]);

printf ("Enter a noun:\n");
scanf ("%s", word[7]);

printf ("Enter a noun:\n");
scanf ("%s", word[8]);

printf ("Enter a noun:\n");
scanf ("%s", word[9]);

//calling functions
//FUNCTIONS GO HERE!

//printing the finished item
//PRINTING GOES HERE!

//closing files
fclose(madlib1.txt);
fclose(MadLibFinalScript.txt);

return 0; }

