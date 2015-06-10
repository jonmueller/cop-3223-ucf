//  Jonathan Mueller
//  COP3223 Section 3
// listreverse.c - Get a number, N, and a list of names and ID's from i to N lines long and output them in reverse order from N to i.
#include <stdio.h>
#include <string.h>

struct Student {
    char first[50];
    char last[50];
    char id[20];
};

int main() {

    int N;
    scanf("%d", &N);

    int i;
    struct Student s[N];
    for (i = 0; i < N; i++) {
        scanf("%s", s[i].first);
        scanf("%s", s[i].last);
        scanf("%s", s[i].id);
    }
    printf("\n");
    for (i=N-1; i>=0; i--) {
        printf("%s %s %s\n", s[i].first, s[i].last, s[i].id);
    }

    return 0;
}
