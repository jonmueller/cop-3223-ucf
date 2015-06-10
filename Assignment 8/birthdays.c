//  Jonathan Mueller
//  COP3223 Section 3
//  birthdays.c - Scans a user provided birthdays.txt for a given day and outputs the names with birthdays on that date.

#include <stdio.h>
#include <string.h>
int main(){

    FILE *file;

    file = fopen("birthdays.txt","r");

    if(file == NULL)
    {
        printf("File not found.");
        return 1;
    }

    char date[6];
	int lines, i, found;

	fscanf(file, "%d", &lines);

	char firstnames[lines][51];
	char lastnames[lines][51];
	char birthdays[lines][6];

	for (i = 0; i < lines; i++)
	{
		fscanf(file, "%s %s %s", firstnames[i], lastnames[i], birthdays[i]);
	}

	fclose(file);

	while (1)
    {
        printf("Enter the date (MM/DD) or DONE\n");
        scanf("%s", date);
        
		if (strcmp(date, "DONE") == 0)
			break;

        printf("The following people have birthdays on %s:\n", date);
		
		found = 0;

		for (i = 0; i < lines; i++)
		{
			if (strcmp(date, birthdays[i]) == 0)
			{
				printf("%s %s\n", firstnames[i], lastnames[i]);
				found++;
			}
        }

		if (found == 0)
			printf("(None)\n");

		printf("\n");
	}

    return 0;
}
