/***********************************************
* PROGRAMMED BY : Matin Ghaffari
* CLASS         : CS1C
* DATE          : 6/27/2019
* SECTION       : MTWTh: 3:00p to 5:20p
* Homework #07  : Pointers & Dynamic Arrays (Including extra credit)
***********************************************/

#include <iostream>

#include "ManageInventory.h"

using namespace hw07;

/**********************************************************
 *
 * HW07 Pointers & Dynamic Arrays (Including extra credit)
 *_________________________________________________________
 *  This program uses the new operator to dynamically
 *  create instances of Item type and to store the pointers
 *  to inventory items in the dynamic array. This program
 *  then prints to the console the inventory before the
 *  costumer transaction, and then displays a menu and
 *  allows the user to perform transactions, while updating
 *  the inventory and recording the transactions. Then the
 *  program prints the updated inventory and uses a copy
 *  constructor to display the original inventory. Also this
 *  program includes the extra credit which prints out a
 *  dated transaction history and also uses the copy
 *  constructor to make a copy of the transaction history.
 ***********************************************************/
int main()
{
	time_t tt;              // Declaring argument for time()
	struct tm * localTime;	// Declaring variable to store return value
	                        // of localtime()
	ManageInventory items;  // Declaring class object used for
	                        // customer interaction

	// PART 2 - Printing to the console the inventory before costumer transaction
	cout << "\n*** PART 2 - Inventory before costumer transaction ***\n";

	items.printInventory();

	// Getting current time right before customer transaction
	time(&tt);
	localTime = localtime(&tt);

	// PART 1 - Performing costumer transaction and then printing receipt for
	//          for the costumer transaction to the console
	cout << "*** PART 1 - Performing costumer transaction ***\n\n";

	items.getUserInput();

	cout << "\n*** PART 1 - Printing receipt for costumer transaction ***\n";

	items.printReceipt();

	// PART 2 - Printing to the console the inventory after costumer transaction
	cout << "*** PART 2 - Inventory after costumer transaction ***\n";

	items.printInventory();

	// PART 3 - Using copy constructor to instantiate a new MangeInventory
	//          object to match the original and to print the original
	//          inventory to the console
	cout << "*** PART 3 - Using copy constructor to print original inventory ***\n";

	ManageInventory newCopy2;
	ManageInventory newCopy = newCopy2;

	newCopy.printInventory();

	// EXTRA CREDIT
	cout << "*** EXTRA CREDIT - Printing audit log ***\n";

	// EXTRA CREDIT  - printing audit log to the console
	items.transactionHistory(localTime);

	cout << "*** EXTRA CREDIT - Using copy constructor to";
	cout << " print a copy of the transaction history ***\n";

	// EXTRA CREDIT - Using copy constructor to instantiate a new MangeInventory
	//                object to make a copy of the transaction history
	ManageInventory newCopy1 = items;

	newCopy1.transactionHistory(localTime);

    return 0;
}
