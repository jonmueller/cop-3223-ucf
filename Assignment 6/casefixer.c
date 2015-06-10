//  Jonathan Mueller
//  COP3223 Section 3
//  casefixer.c - Fixes the capitalization of sentences.

#include <stdio.h>

//  Precondition: ch points to the character to process. char_in_word
//  and line_num point to counters of what their names describe.
//  Postcondition: returns true if the character was a line break
//  (meaning following this will be a new line), or false otherwise.
//  Fixes the character pointed to by ch to have proper case.
//  Updates the two counters based on this character.
int fix_caps(char* ch, int* char_in_word, int* line_num);

int main() {
        FILE *inputFile;

        if ((inputFile = fopen("casefixer.txt", "r")) == NULL)
                printf("The input file was not found.\n");
        else {
                char ch;
                int char_in_word = 1, line_num = 1;

                printf("%d ", line_num);

                while (fscanf(inputFile, "%c", &ch) != EOF) {

                        if (fix_caps(&ch, &char_in_word, &line_num))
                                printf("%c%d ", ch, line_num);
                        else
                                printf("%c", ch);
                }
        }

        printf("\n");
        return 0;
}

int fix_caps(char* ch, int* char_in_word, int* line_num) {
        switch (*ch) {
        case '\n':
                *char_in_word = 1;
                *line_num += 1;
                return 1;
        case ' ':
                *char_in_word = 1;
                return 0;
        default:
                if (*char_in_word == 1)
                        *ch = toupper(*ch);
                else
                        *ch = tolower(*ch);
                *char_in_word += 1;
                return 0;
        }
}
