// Excute programs with gcc

#include <stdio.h> //for input and output
#include <stdlib.h> //for excute commands
#include <string.h>

int main(int argc, char **argv){
	
	char command[100] = "";
	char name[50];
	int e = 0;
	if(argc == 2){ //"gcc " + argv[1] + "-o " + argv[1];
		strcpy(command, "gcc ");
		if(strlen(argv[1]) < 50)
			
		strcat(command, argv[1]); 
		strcat(command, ".c -o ");
		strcat(command, argv[1]);
		strcat(command, ".exe");
		int e = system(command);
		if (e == 0){
			printf("Built Successful with code 0\n");
			char ex = 'n';
			printf("Excute ? y for yes and n for no\n");
			scanf("%c",&ex);
			if(ex == 'y' || ex == 'Y'){
				strcpy(command, argv[1]);
				strcat(command, ".exe");
				system(command);
			}
		}else
			printf("Error Level = %d\n", e);
		
		system("pause");
	}else if(argc == 3){
		strcpy(command, "gcc ");
		if(strlen(argv[1]) < 50)
			
		strcat(command, argv[1]); 
		strcat(command, ".c -o ");
		strcat(command, argv[2]);
		strcat(command, ".exe");
		int e = system(command);
		if (e == 0)
			printf("Built Successful with code 0\n");
		else
			printf("Error Level = %d\n", e);
		system("pause");
	}else if(argc == 1){
		printf("Usage :\n");
		printf("excute.exe <source code>  [<excutable File>]");
	}else{
		printf("Invaild args\n");
		printf("Syntax : EGCC <source name> <distination name>\n");
	}
	
	return 0;
}