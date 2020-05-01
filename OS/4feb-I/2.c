#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int temp;
	char pre[] ="top | grep ";
	char value[10];
	while(2>1){
		printf("Please choose an option:\n");
		printf("\n 1. To Execute ls command");
		printf("\n 2. To Execute top command");
		printf("\n 3. To Execute top command to read a line");
		printf("\n 4. To Exit\n ");
		scanf("%d",&temp);
	switch(temp){
		case 1: system("ls");
			break;
		case 2: system("top");
			break;
		case 3: printf("Enter the word you want to search:");
			scanf("%s",value);
			strcat(pre,value);
			system(pre);
			break;
		case 4: exit(0);
		default:
			break;
	}
	}
	return 0;
	
}
