//Eddie Tarango, John Brandt, Nathan Nelson
//12/2/24
//Final Project

#define SENTANCE 21;
#define WORD 12;
#include <stdio.h>
int main(){
char madlib[][];
char A1, A2, N1, N2, N3, N4, N5, N6, N7, V1;

FILE *fpA;

fpA = fopen("madlib1.txt", "r");

printf ("Enter an adjective:\n");
scanf ("%c", &A1);

printf ("Enter an adjective:\n");
scanf ("%c", &A2);

printf ("Enter a noun:\n");
scanf ("%c", &N1);

printf ("Enter a noun:\n");
scanf ("%c", &N2);

printf ("Enter a verb:\n");
scanf ("%c", &V1);

printf ("Enter a noun:\n");
scanf ("%c", &N3);

printf ("Enter a noun:\n");
scanf ("%c", &N4);

printf ("Enter a noun:\n");
scanf ("%c", &N5);

printf ("Enter a noun:\n");
scanf ("%c", &N6);

printf ("Enter a noun:\n");
scanf ("%c", &N7);

//calling functions
//FUNCTIONS GO HERE!
void save(*fp; madlib;)
void inputWords(A2, N1, N2, N3, N4, N5, N6, N7, V1; madlib;)
//printing the finished item
//PRINTING GOES HERE!
printf("%c ", &madlib);

//closing files
fclose(madlib1.txt);

return 0; }

void save(FILE *fp; char* madlib[][];){
//save file in 2d array
	for(int i = 0; i < SENTENCE; i++){
		for int j = 0; j < WORD; j++){
		fscanf("%c", &fileWord);
		madlib[i][j] = fileWord;
		}	
	}
}

void inputWords(char A2, N1, N2, N3, N4, N5, N6, N7, V1; char* madlib[][];){
//input all user words into the 2d array
	madlib[2][] = A1;
	madlib[4][] = A2;
	madlib[6][] = N1;
	madlib[8][] = N2;
	madlib[10][] = V1;
	madlib[12][] = N3;
	madlib[14][] = N4;
	madlib[16][] = N5;
	madlib[18][] = N6;
	madlib[20][] = N7;
}

