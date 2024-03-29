//==============================================
// Name:           Daniele P�olo Grech Pereira
// Student Number: 037747078  
// Email:          dppereira@myseneca.ca
// Section:        NZB
// Date:           
//==============================================
// Assignment:     2
// Milestone:      2
//==============================================


/*-------------------------------------------------------------------------
Description: This header file modularizes general helper functions
             to help reduce redundant coding for common repetitive tasks.
------------------------------------------------------------------------- */

// Hint:  This header file now has functions with parameters referring to 
//        the struct Contact type so be sure to include the contacts.h header:
#include "contacts.h"


/*---------------------------------------------------------------------
Description: This header file modularizes general helper functions to
help reduce redundant coding for common repetitive tasks.
---------------------------------------------------------------------*/

// Function Prototypes
void clearKeyboard(void);  // Clear the standard input buffer
void pause(void);
int getInt(void);
int getIntInRange(int min, int max);
int yes(void);
int menu(void);
void contactManagerSystem(void);
void getTenDigitPhone(char phoneNum[]);
int findContactIndex(const struct Contact contacts[], int size, const char cellNum[]);
void displayContactHeader(void);
void displayContactFooter(int count);
void displayContact(const struct Contact* contact);
void displayContacts(const struct Contact contacts[], int size);
void searchContacts(const struct Contact contacts[], int size);
void addContact(struct Contact contacts[], int size);
void updateContact(struct Contact contacts[], int size);
void deleteContact(struct Contact contacts[], int size);
void sortContacts(struct Contact contacts[], int size);