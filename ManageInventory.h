/***********************************************
* PROGRAMMED BY : Matin Ghaffari
* CLASS         : CS1C
* DATE          : 6/27/2019
* SECTION       : MTWTh: 3:00p to 5:20p
* Homework #07  : Pointers & Dynamic Arrays (Including extra credit)
***********************************************/

#ifndef ManageInventory_h
#define ManageInventory_h

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// User defined namespace (PART 5)
namespace hw07
{

const int MAX_SIZE = 50;
const double TAX_RATE = .0825;

struct Item
{
    string name;
    int quantity;
    float cost;
};

class ManageInventory
{
public:
	// Default constructor
    ManageInventory();

    // Alternate constructor with parameters
    ManageInventory(int size);

    // Destructor to deallocate dynamic array
    ~ManageInventory();

    // Copy constructor
    ManageInventory(const ManageInventory & itemsObjectIn);

    // Pre-conditions  : Receives count, name, quantity, and cost in order
    //                   to load those values to initialize the current
    //                   array index
    // Post-conditions : assigns name, quantity, and cost to a array
    //                   index(count) and lastly increments index for the next
    //                   function call
    void addItem(string name, int quantity, float cost);

    // Pre-conditions  : Customer name string should be initialized, as well
    //                   as quantities in order to decrement the inventory and
    //                   and increment the number purchased
    // Post-conditions : Displays menu options for the user to enter transactions
    //                   which will decrement the inventory and increment the
    //                   number purchased for the items bought
    void getUserInput();

    // Pre-conditions  : No pre-conditions
    // Post-conditions : Prints out the formated item with its quantity and
    //                   individual price
    void printInventory();

    // Pre-conditions  : No pre-conditions
    // Post-conditions : Prints out the formated item and quantity purchased
    //                   along with calculating and displaying each subtotal to
    //                   the console, and finally calculating and outputting
    //                   the total before and after tax
    void printReceipt();

    // Pre-conditions  : Receives the local date and time from when the
    //                   getUserInput function is called
    // Post-conditions : Prints to the console the date and time of the
    //                   costumer transaction and prints the customers name with
    //                   the name of the item purchased along with the quantity
    //                   and subtotal
    void transactionHistory(tm * localTime);

private:
    int size{MAX_SIZE};
    int count;
    string customer;
    Item **p_pInventoryItems;

    // The number of a item purchased
    int numNikeShoes;
    int numNikeShorts;
    int numAsicShoes;
    int numBrooksShoes;
    int numUaShirts;
};
}

#endif /* ManageInventory_h */
