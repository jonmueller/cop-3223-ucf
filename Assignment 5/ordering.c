// Jonathan Mueller
// 03/06/15
// COP3223 Section 3
// ordering.c - Displays a menu and allows a user to calculate the price of an order including sales tax.

#include <stdio.h>

// Pre-condition: option will be a valid option number for the menu.
// Post-condition: Returns the cost of this item.
double getPrice(int option);

// Pre­condition: option will be a valid option number for the menu.
// Post­condition: Outputs the name of this item.
void printOptionName(int option);

// Pre­condition: None
// Post­condition: Outputs menu options with their numbers and costs.
void printMenu();

int main() {
	int option;
	printMenu();
	scanf("%d", &option);
	while (option != 0)
			printMenu();
	return 0;
}

double getPrice(int option) {
    double price;
    if (option == 1)
        price = 5.99;
    else if (option == 2)
        price = 6.99;
    else if (option == 3)
        price = 7.99;
    else if (option == 4)
        price = 10.50;
    else if (option == 5)
        price = 3.50;

	return 0;
}


void printOptionName(int option) {
    int name;
    if (option == 0)
    return;
}


void printMenu() {

for (i=0; i<6; i++)
    getPrice()

	return;
}
