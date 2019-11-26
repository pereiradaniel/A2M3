#ifndef CONTACTS_H_
#define CONTACTS_H_

//==============================================
// Name:           Daniele PÃolo Grech Pereira
// Student Number: 037747078
// Email:          dppereira@myseneca.ca
// Section:        NZB
// Date:           
//==============================================
// Assignment:     2
// Milestone:      2
//==============================================


// Structure Types
struct Name {
	char firstName[31];
	char middleInitial[7];
	char lastName[36];
};

struct Address {
	int streetNumber, apartmentNumber;
	char street[41], postalCode[8], city[41];
};

struct Numbers {
	char cell[11], home[11], business[11];
};

struct Contact {
	struct Name name;
	struct Address address;
	struct Numbers numbers;
};

// Function Prototypes
void getName(struct Name* name);
void getAddress(struct Address* address);
void getNumbers(struct Numbers* numbers);
void getContact(struct Contact* contact);

#endif