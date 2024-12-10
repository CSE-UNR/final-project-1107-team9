//John Brandt
//DUE 12-10-24

#define ROWS 100
#define CHARACTERS 1000

#include <stdio.h>

void saveFile(FILE *fp, char madlib[][CHARACTERS]);
void scanAdjectives(char madlib[][CHARACTERS]);
void scanVerbs(char madlib[][CHARACTERS]);
void scanNouns(char madlib[][CHARACTERS]);
void printArray(char madlib[][CHARACTERS]);

int main(){

char madlib[ROWS][CHARACTERS];
char variableNum;


FILE* fp;
fp = fopen("madlib1.txt", "r");


if(fp == NULL){
	printf("Could not open file please try again");
	return 0;
}

saveFile(fp, madlib);
scanAdjectives(madlib);
scanVerbs(madlib);
scanNouns(madlib);
printArray(madlib);

fclose(fp);
return 0;
}



void saveFile(FILE *fp, char madlib[][CHARACTERS]){
		for(int i = 0; i < ROWS; i++){
			fgets(madlib[i], CHARACTERS, fp);
		} 
}

void scanAdjectives(char madlib[][CHARACTERS]){
	for(int i = 0; i < ROWS; i++){
		scanf("%s", madlib[i]);
		if(madlib[i][0] == 'A' ){
			printf("Enter an Adjective:\n");
			scanf("%s", madlib[i]);
			}
	}
}
void scanVerbs(char madlib[][CHARACTERS]){
	for(int i = 0; i < ROWS; i++){
		scanf("%s", madlib[i]);
		if(madlib[i][0] == 'V'){
			printf("Enter a Verb:\n");
			scanf("%s", madlib[i]);
		}
	}
}
void scanNouns(char madlib[][CHARACTERS]){
	for(int i = 0; i < ROWS; i++){
		scanf("%s", madlib[i]);
		if(madlib[i][0] == 'N'){
			printf("Enter a Noun:\n");
			scanf("%s", madlib[i]);
		}	
	}
}
void printArray(char madlib[][CHARACTERS]){
	printf("%s", madlib[ROWS]);
}
