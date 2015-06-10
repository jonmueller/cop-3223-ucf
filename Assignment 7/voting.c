#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	int idNum = 0;
	int voteOption[4];
	int i;
	for (i = 0; i < 4; i++) {
		voteOption[i] = 0;	//	Vote count set to 0.
	}

	int hasVoted[N];
	for (i = 0; i < N; i++) {
		hasVoted[i] = 0;	//	Vote count set to 0.
	}
	printf("What is your ID?\n");
	scanf("%d", &idNum);



	while (idNum != -1) {
		if (hasVoted[idNum]) {
			printf("You have already voted you cannot vote again.\n");
			printf("What is your ID?\n");
			scanf("%d", &idNum);
			continue;
		}

		char vote = 0;
		printf("Welcome %d, which vote would you like to place?\n", idNum);
		scanf(" %c", &vote);

		switch (vote) {
		case 'A':
			++voteOption[0];	//	Add 1 vote to A
			printf("You have successfully voted for A.\n");
			break;
		case 'B':
			++voteOption[1];	//	Add 1 vote to B
			printf("You have successfully voted for B.\n");
			break;
		case 'C':
			++voteOption[2];	//	Add 1 Vote to C
			printf("You have successfully voted for C.\n");
			break;
		case 'D':
			++voteOption[3];	//	Add 1 Vote to D
			printf("You have successfully voted for D.\n");
			break;
		}

		hasVoted[idNum] = 1;
		printf("What is your ID?\n");
		scanf("%d", &idNum);
	}

	int max = 0;
	int votePosition = 0;
	// Loop over the whole array.
	for (i = 0; i<4; i++) {
		// If the value at this index is larger than max,
		// update max to this value.
		if (voteOption[i] > max) {
			max = voteOption[i];
			votePosition = i;
		}
	}

	char winner;
	switch (votePosition) {
	case 0:
		winner = 'A';
		break;
	case 1:
		winner = 'B';
		break;
	case 2:
		winner = 'C';
		break;
	case 3:
		winner = 'D';
		break;
	}
	printf("%c wins with %d votes!\n", winner, max);
	system("PAUSE");
	return 0;
}
