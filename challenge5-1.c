/*

* challenge5-1.c

*

* Created on: Feb 6, 2023

* Author: zameel

*/

 

#include <stdio.h>
#include <ctype.h>

int main() {
FILE *inputFile, *outputFile;
char inputFileName[100], outputFileName[100];
int c;

// Prompt user for input file name
printf("Enter name of file to be copied: ");
scanf("%s", inputFileName);

// Open the input file in read mode
inputFile = fopen(inputFileName, "r");

// Check if the input file exists
if (inputFile == NULL) {
printf("Cannot open %s for reading\n", inputFileName);
return 1;
}

// Prompt user for output file name
printf("Enter name of output file: ");
scanf("%s", outputFileName);

// Open the output file in write mode
outputFile = fopen(outputFileName, "w");

// Check if the output file was successfully created
if (outputFile == NULL) {
printf("Cannot open %s for writing\n", outputFileName);
return 1;
}

// Copy contents of input file to output file, converting lowercase to uppercase
while ((c = fgetc(inputFile)) != EOF) {
fputc(toupper(c), outputFile);
}

// Close both files
fclose(inputFile);
fclose(outputFile);

// Confirm that the copy is complete
printf("File has been copied and converted successfully\n");

return 0;
}

