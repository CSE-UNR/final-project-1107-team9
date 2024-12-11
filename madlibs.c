//Eddie Tarango, John Brandt, Nathan Nelson
//12/10/24
//final group project

#include <stdio.h>
#include <stdbool.h>

#define MAX_LINES 100
#define MAX_LENGTH 1000

void loadMadlibFromFile(FILE *fp, char madLib[MAX_LINES][MAX_LENGTH]);
void getInputAndReplace(char madlib[MAX_LINES][MAX_LENGTH]);
void processLine(char *line, char *inputType, char *userInput);
void printMadlib(char madlib[MAX_LINES][MAX_LENGTH]);

int main() {
char madlib[MAX_LINES][MAX_LENGTH];
FILE *fp = fopen("madlib1.txt", "r");

if(fp == NULL){
	printf("Could not open the file.\n");
	return 0;
}

loadMadlibFromFile(fp, madlib);
fclose(fp);

getInputAndReplace(madlib);
printMadlib(madlib);

return 0;
}

void loadMadlibFromFile(FILE *fp, char madlib[MAX_LINES][MAX_LENGTH]){
int i = 0;
while(i < MAX_LINES && fgets(madlib[i], MAX_LENGTH, fp) != NULL){
i++;
}
}

void getInputAndReplace(char madlib[MAX_LINES][MAX_LENGTH]){
int i = 0;
while(i < MAX_LINES && madlib[i][0] != '\0'){
char inputType;
char userInput[MAX_LENGTH];

int j = 0;
while(madlib[i][j] != '\0' && madlib[i][j] != '\n'){
if(madlib[i][j] == 'A'){
inputType = 'A';
printf("Enter an adjective:\n");
scanf("%s", userInput);
processLine(madlib[i], &inputType, userInput);
}

else if(madlib[i][j] == 'N') {
inputType = 'N';
printf("Enter a Noun:\n");
scanf("%s", userInput);
processLine(madlib[i], &inputType, userInput);
}
else if(madlib[i][j] == 'V'){
inputType = 'V';
printf("Enter a Verb:\n");
scanf("%s", userInput);
processLine(madlib[i], &inputType, userInput);
}
j++;
}
i++;
}
}
void processLine(char *line, char *inputType, char *userInput){
for(int i = 0; line[i] != '\0'; i++){
if(line[i] == *inputType){

int j = 0;
while(userInput[j] != '\0' && j < MAX_LENGTH){
line[i] = userInput[j];
i++;
j++;
}
}
}
}

void printMadlib(char madlib[MAX_LINES][MAX_LENGTH]){
int i = 0; 
while(i < MAX_LINES && madlib[i][0] != '\0'){
printf("%s", madlib[i]);
i++;
}
}





