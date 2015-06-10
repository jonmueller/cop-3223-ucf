//  Jonathan Mueller
//  COP3223 Section 3
// passrecover.c - Compares user input of N possible passwords and M hints from friends to determine your forgotten password.
#include <stdio.h>
#include <string.h>

struct Option {
    char password[50];
    int matches;
};

//  Checks to see if the given password matches the given pattern.
//  Returns false(0) if it does not, or true (1) if it does.
int is_match(char password[], char pattern[]);

int main() {
	int N, M, i, j;

	scanf("%d", &N);

	struct Option possible_pw[N];

	for (i = 0; i < N; i++) {
		scanf("%s", possible_pw[i].password);
		possible_pw[i].matches = 0;
	}

	scanf("%d", &M);

	char hint[M][50];

	for (i = 0; i < M; i++) {
		scanf("%s", hint[i]);
	}

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			if (is_match(possible_pw[i].password, hint[j]))
				possible_pw[i].matches++;
		}
	}

	char chosen_pw[50];
	int highest_matches = 0;

	for (i = 0; i < N; i++) {
		if (possible_pw[i].matches > highest_matches) {
			highest_matches = possible_pw[i].matches;
			strcpy(chosen_pw, possible_pw[i].password);
		}
		else if (possible_pw[i].matches == highest_matches && strcmp(possible_pw[i].password, chosen_pw) < 0) {
			strcpy(chosen_pw, possible_pw[i].password);
		}
	}

	printf("%s", chosen_pw);

    return 0;
}

int is_match(char password[], char pattern[]) {

	if (strlen(password) != strlen(pattern))
		return 0;

	int i;

	for (i = 0; i < strlen(password); i++) {
		if (pattern[i] != '*' && password[i] != pattern[i])
			return 0;
	}

	return 1;
}
