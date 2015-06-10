//  Jonathan Mueller
//  COP3223 Section 3
//  bingo.c - Plays a game of bingo with N users.

#include <stdio.h>
#include <string.h>

struct Player {
    char name[50];
    int board[5];
    int board_size;
};

//  Removes the given number from the player's board if it exists in
//  that board, or else does nothing. Adjusts the board's contents and
//  size to reflect this removal.
void remove_number(struct Player* player, int number);

int main() {
    int N;
    scanf("%d", &N);

    struct Player player[N];

    int i;
    for (i = 0; i < N; i++) {
		scanf("%s %d %d %d %d %d", player[i].name, &player[i].board[0], &player[i].board[1],
			&player[i].board[2], &player[i].board[3], &player[i].board[4]);

		player[i].board_size = 5;
    }

	int called_num;
	int no_winner = 1;

	while (no_winner) {
		scanf("%d", &called_num);

		for (i = 0; i < N; i++) {
			remove_number(&player[i], called_num);

			if (player[i].board_size == 0) {
				no_winner = 0;
			}
		}
	}

	for (i = 0; i < N; i++) {
		if (player[i].board_size == 0)
			printf("%s wins!\n", player[i].name);
	}

    return 0;
}

void remove_number(struct Player* player, int number) {
	int i;

	for (i = 0; i < 5; i++) {
		if (number == player->board[i]) {
			player->board[i] = -1;
			player->board_size--;
		}
	}
}
