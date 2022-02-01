#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[]){

char* dosya =  "yapilacaklar.txt";

int option = 3;
char reader;

char newtask[256];

FILE *write;
FILE *read;

write = fopen(dosya, "a+");
read = fopen(dosya, "r");


option = getopt(argc, argv, ":adlq");


switch(option){
		case 'a': //add
			printf("Write new task \n");
			fgets(newtask,255,stdin); //get a 255 byte long input from stdin and put it to newtask
			fprintf(write, "\n * %s", &newtask); //put newtask to the file
			break;
		case 'd': //delete. Since C can't delete a line in a file, we copy the entire file while excluding the line we don't want
			
			int line = atoi(argv[2]); //which line should be deleted?
			int counter = 0;
			FILE *copy = fopen("copy.txt", "w"); //we open a new file and copy everything in the other one, except the undesired one.
			while(reader != EOF){
			reader = fgetc(read);
			if(reader == '*')
				counter++;
			if(counter != line){ //while the line is wanted
				putc(reader, copy);
			}
			}
			fclose(copy);
			remove(dosya); //we then remove the original file and rename the copy file to the original ones name
			rename("copy.txt", dosya);
			break;
		case 'l': //list
			while(reader != EOF){
			printf("%c", reader);
			reader = fgetc(read);
			}
			break;
		case 'q':
		break;
}

	fclose(write);
	fclose(read);
return 0;
}
