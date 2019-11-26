//==============================================
// Name:           Daniele Pãolo Grech Pereira
// Student Number: 037747078  
// Email:          dppereira@myseneca.ca
// Section:        NZB
// Date:           
//==============================================
// Assignment:     2
// Milestone:      2
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "contactHelpers.h"

// Function Definitions

void clearKeyboard(void)
{
	while (getchar() != '\n'); // empty execution code block on purpose
}

void pause(void) {

	printf("(Press Enter to Continue)");
	clearKeyboard();
}

int getInt(void) {
	int value;		// integer
	char NL = 'x';	// new line
	scanf("%d%c", &value, &NL);

	while (NL != '\n')
	{
		clearKeyboard();
		printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		scanf("%d%c", &value, &NL);
	}
	return value;
}

int getIntInRange(int min, int max) {
	int mid = getInt();
	while ((mid < min) || (mid > max))
	{
		printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		mid = getInt();
	}
	return mid;
}

int yes(void) {
	char yn = 'x';
	char nlc = 'x';
	int res = -1;

	scanf(" %c%c", &yn, &nlc);

	while (!((nlc == '\n') && ((yn == 'Y') || (yn == 'y') || (yn == 'n') || (yn == 'N'))))
	{
		clearKeyboard();
		printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		scanf(" %c%c", &yn, &nlc);
	}

	if ((yn == 'Y') || (yn == 'y'))
	{
		res = 1;
	}
	else if ((yn == 'N') || (yn == 'n'))
	{
		res = 0;
	}

	return res;
}

int menu(void)
{
	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");
	printf("\n");
	printf("Select an option:> ");

	return getIntInRange(0, 6);
	printf("\n");
}

void contactManagerSystem(void)
{
	int mselect;	// menu selection

	do {
		mselect = menu();
		switch (mselect)
		{
		case 0:
			printf("\nExit the program? (Y)es/(N)o: ");
			int quit = yes();
			if (quit == 1) {
				printf("\nContact Management System: terminated\n");
				return;
			}
			else { printf("\n"); }

			break;
		case 1:
			printf("\n<<< Feature 1 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 2:
			printf("\n<<< Feature 2 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 3:
			printf("\n<<< Feature 3 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 4:
			printf("\n<<< Feature 4 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 5:
			printf("\n<<< Feature 5 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 6:
			printf("\n<<< Feature 6 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		default:
			printf("*** OUT OF RANGE *** <Enter a number between 0 and 6> ");
			break;
		}

	} while ((mselect >= 0) || (mselect <= 6));

	return;
}


// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 3 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// +-------------------------------------------------+

// Generic function to get a ten-digit phone number (ensures 10-digit chars entered)
// ---------------------------------------------------------------------------------
// NOTE: Modify this function to validate only numeric character digits are entered
// ---------------------------------------------------------------------------------
void getTenDigitPhone(char phoneNum[])
{
    int needInput = 1;

    while (needInput == 1) {
        scanf("%10s", phoneNum);
        clearKeyboard();

        // (String Length Function: validate entry of 10 characters)
		if (strlen(phoneNum) == 10)
		{
			int length = (int)strlen(phoneNum);
			for (int i = 0; i < (int)strlen(phoneNum); i++)
			{
				if ( isdigit((unsigned int)phoneNum[i]) != 0 ) {
					needInput = 1;
				}
			}
			needInput = 0;
		}
		else
            printf("Enter a 10-digit phone number: ");
    }
}

// findContactIndex:
int findContactIndex(const struct Contact contacts[], int size, const char cellNum[])
{
    return -1;
}


void displayContactHeader(void)
{
};

void displayContactFooter(int count)
{
};

void displayContact(const struct Contact* contact)
{
};

void displayContacts(const struct Contact contacts[], int size)
{
};

void searchContacts(const struct Contact contacts[], int size)
{
};

void addContact(struct Contact contacts[], int size)
{
};

void updateContact(struct Contact contacts[], int size)
{
};

void deleteContact(struct Contact contacts[], int size)
{
};

void sortContacts(struct Contact contacts[], int size)
{
};