/***********************************************
* PROGRAMMED BY : Matin Ghaffari
* CLASS         : CS1C
* DATE          : 6/27/2019
* SECTION       : MTWTh: 3:00p to 5:20p
* Homework #07  : Pointers & Dynamic Arrays (Including extra credit)
***********************************************/

#include "ManageInventory.h"

using namespace hw07;

// Default constructor
ManageInventory::ManageInventory():count{0} ,p_pInventoryItems{new Item*[size]}
{
	// Initializing data members
 	customer.clear();
 	numNikeShoes=0;
 	numNikeShorts=0;
 	numAsicShoes=0;
 	numBrooksShoes=0;
 	numUaShirts=0;

 	// Using addItem function to initialize dynamic array with this data
 	addItem("Nike basketball shoes",22,145.99);
 	addItem("Under Armour T-shirt",33,29.99);
 	addItem("Brooks running shoes",11,111.44);
 	addItem("Asics running shoes",20,165.88);
 	addItem("Nike shorts",77,45.77);
 }

// Alternate constructor with parameters
ManageInventory::ManageInventory(int size): size{size}, count{0} ,p_pInventoryItems{new Item*[size]}
{
	// Initializing data members
	customer.clear();
	numNikeShoes=0;
	numNikeShorts=0;
	numAsicShoes=0;
	numBrooksShoes=0;
	numUaShirts=0;

	// using addItem function to initialize dynamic array with this data
	addItem("Nike basketball shoes",22,145.99);
 	addItem("Under Armour T-shirt",33,29.99);
 	addItem("Brooks running shoes",11,111.44);
 	addItem("Asics running shoes",20,165.88);
 	addItem("Nike shorts",77,45.77);
}

// Destructor to deallocate dynamic array
ManageInventory::~ManageInventory()
{
	for (int i =0; i<count; i++)
	{
		// Destroying all Item objects
		delete p_pInventoryItems[i];
	}
	// Destroying dynamic array
	delete [] p_pInventoryItems;
}

// Copy constructor
ManageInventory::ManageInventory(const ManageInventory & itemsObjectIn)
: count{itemsObjectIn.count} ,p_pInventoryItems{new Item*[itemsObjectIn.size]}
{
	// Initializing data members with copy
	customer = itemsObjectIn.customer;
	numNikeShoes=itemsObjectIn.numNikeShoes;
	numNikeShorts=itemsObjectIn.numNikeShorts;
	numAsicShoes=itemsObjectIn.numAsicShoes;
	numBrooksShoes=itemsObjectIn.numBrooksShoes;
	numUaShirts=itemsObjectIn.numUaShirts;

	// Initializing dynamic array with copy from object
	for (int i=0;i < count;i++)
	{
		p_pInventoryItems[i] = new Item;
		p_pInventoryItems[i]->name = itemsObjectIn.p_pInventoryItems[i]->name ;
		p_pInventoryItems[i]->quantity= itemsObjectIn.p_pInventoryItems[i]->quantity;
		p_pInventoryItems[i]->cost = itemsObjectIn.p_pInventoryItems[i]->cost ;
	}
}

void ManageInventory::addItem(string name, int quantity, float cost)
{
	// Dynamically allocating memory to fill array with the parameters passed in
	p_pInventoryItems[count] = new Item;

	p_pInventoryItems[count]->name= name;
	p_pInventoryItems[count]->quantity= quantity;
	p_pInventoryItems[count]->cost= cost;

	count++;
}

void ManageInventory::printInventory()
{
	// Printing Inventory heading to the console
	cout <<endl<< setfill('*') << setw(50) << " "<< endl;
	cout << setfill(' ') << setw(0)  << setw(28) << "INVENTORY" << endl;
	cout << setfill('*') << setw(50)<< " " << endl;
	cout << setfill(' ') << setw(0);
	cout << "ITEM"<< setw(31) << "QUANTITY" << setw(9) << "PRICE" << endl ;
	cout << setfill('-') << setw(27)<< "  "<< setfill('-')
		 << setw(12)   << "  "<< setw(9) <<  setfill('-')
		 <<"  " << setw(0) << setfill(' ') << endl;

	// Printing the information about the first inventory item
	// (nike shoes) to the console
	cout << p_pInventoryItems[0]->name << setw(8)
		 << p_pInventoryItems[0]->quantity << setw(16)
		 << p_pInventoryItems[0]->cost<< endl
		 << setfill('-') << setw(27)<< "  "<< setfill('-')
		 << setw(12)   << "  "<< setw(9) <<  setfill('-')
		 <<"  " << setw(0) << setfill(' ') << endl;

	// Printing the information about the second inventory item
	// (under armour t-shirts) to the console
	cout << p_pInventoryItems[1]->name
		 << setw(9) << p_pInventoryItems[1]->quantity
		 << setw(15)<< p_pInventoryItems[1]->cost  <<endl
		 << setfill('-') << setw(27)<< "  "<< setfill('-')
		 << setw(12)   << "  "<< setw(9) <<  setfill('-')
		 <<"  " << setw(0) << setfill(' ') << endl;

	// Printing the information about the third inventory item
	// (brooks shoes) to the console
	cout <<  p_pInventoryItems[2]->name
		 << setw(9)<<  p_pInventoryItems[2]->quantity
		 << setw(16)<< p_pInventoryItems[2]->cost << endl
		 << setfill('-') << setw(27)<< "  "<< setfill('-')
		 << setw(12)   << "  "<< setw(9) <<  setfill('-')
		 <<"  " << setw(0) << setfill(' ') << endl;

	// Printing the information about the fourth inventory item
	// (asics shoes) to the console
	cout << p_pInventoryItems[3]->name
		 <<  setw(10)<< p_pInventoryItems[3]->quantity
		 << setw(16) <<p_pInventoryItems[3]->cost
		 <<endl  << setfill('-') << setw(27)<< "  "<< setfill('-')
		 << setw(12)   << "  "<< setw(9) <<  setfill('-')
		 <<"  " << setw(0) << setfill(' ') << endl;

	// Printing the information about the fifth inventory item
	// (nike shorts) to the console
	cout << p_pInventoryItems[4]->name
		 << setw(18)<<p_pInventoryItems[4]->quantity
		 << setw(15) <<p_pInventoryItems[4]->cost << endl;

	cout  << setfill('*') << setw(50)<< " " << endl <<endl;
	cout << setfill(' ') << setw(0);
}

void ManageInventory::getUserInput()
{
	// Declaring and initializing variable for the menu selection
	int choice = 0;

	// Acquires the customer name
	cout << "Enter your name : ";
	cin >> customer;

	// Printing menu options to console
	cout << "\nMenu options for the items available for sale\n";
	cout << "1 - " <<p_pInventoryItems[0]->name << endl;
	cout << "2 - " <<p_pInventoryItems[1]->name << endl;;
	cout << "3 - " <<p_pInventoryItems[2]->name << endl;;
	cout << "4 - " <<p_pInventoryItems[3]->name << endl;;
	cout << "5 - " <<p_pInventoryItems[4]->name << endl;;
	cout << "0 - Exit\n";

	cout << "\n**** Enter a integer between 1 and 5 to add one corresponding ";
	cout << "item to the cart, or 0 to checkout ****\n";

	do
	{
		// Acquiring user input and checking for valid input
		do
		{
		cout << "\nEnter a item (1-5) to add (0 to exit): ";
		cin >> choice;

		while(cin.fail() || (choice<0 || choice >5))
		{
			cin.clear();
			cin.ignore(1000,'\n');
			cout << "\n*** Invalid input please try again ***\n";
			cout << "\nEnter a item (1-5) to add (0 to exit): ";
			cin >> choice;

		}
		}while(choice<0 || choice >5);

		// Recording customer transactions and adjusting inventory accordingly
		switch(choice)
		{
		case 1:
			p_pInventoryItems[0]->quantity--;
			numNikeShoes++;
			break;
		case 2:
			p_pInventoryItems[1]->quantity--;
			numUaShirts++;
			break;
		case 3:
			p_pInventoryItems[2]->quantity--;
			numBrooksShoes++;
			break;
		case 4:
			p_pInventoryItems[3]->quantity--;
			numAsicShoes++;
			break;
		case 5:
			p_pInventoryItems[4]->quantity--;
			numNikeShorts++;
			break;
		}
	}while (choice != 0);
}

void ManageInventory::printReceipt()
{
	// Printing Receipt heading to the console
	cout << endl << setfill('*') << setw(46) << " "<< endl;
	cout << setfill(' ') << setw(0)  << setw(29) << "RECEIPT" << endl;
	cout << setfill('*') << setw(46)<< " " << endl;
	cout << setfill(' ') << setw(0);
	cout << "PRODUCT"<< setw(24) << "QUANTITY"
		 << setw(12) << "SUBTOTAL" << endl ;
	cout << setfill('-') << setw(23)<< "  "<< setfill('-')
		 << setw(12) << "  "<< setw(11) <<  setfill('-')
		 << "  " << setw(0) << setfill(' ') << endl;

	// Printing out the item and quantity purchased along with calculating
	// and displaying each subtotal to the console

	cout << p_pInventoryItems[0]->name<< setw(3) << numNikeShoes
		 << setw(12) << "$" << numNikeShoes*p_pInventoryItems[0]->cost<<endl;

	cout << p_pInventoryItems[1]->name << setw(4)<< numUaShirts
		 <<  setw(12) << "$" <<numUaShirts *p_pInventoryItems[1]->cost<<endl;

	cout << p_pInventoryItems[2]->name << setw(4)<< numBrooksShoes
		 << setw(12) << "$"  <<numBrooksShoes *p_pInventoryItems[2]->cost<<endl;

	cout << p_pInventoryItems[3]->name << setw(5)<< numAsicShoes
		 <<  setw(12) << "$"  <<numAsicShoes *p_pInventoryItems[3]->cost<<endl;

	cout <<p_pInventoryItems[4]->name << setw(13)<< numNikeShorts
		 <<  setw(12) << "$" <<numNikeShorts *p_pInventoryItems[4]->cost<<endl;

	// Calculating total before tax
	float total = (numNikeShoes *p_pInventoryItems[0]->cost)
    			  + (numUaShirts *p_pInventoryItems[1]->cost)
				  + (numBrooksShoes *p_pInventoryItems[2]->cost)
				  + (numAsicShoes *p_pInventoryItems[3]->cost)
			      + (numNikeShorts *p_pInventoryItems[4]->cost);

	// Printing the total before tax to the console
	cout << setw(27) << "  "<< setw(19) <<  setfill('-')
    	 << "  " << setw(0) << setfill(' ') << endl;

	cout << setw(36) <<  "TOTAL : $" <<total;

	// Calculating and printing the tax to the console
	cout << endl << setw(36) <<  "TAX   : $" << fixed
		 << setprecision(2)<<(total*TAX_RATE) << endl;

	cout << setw(18) << "  "<< setw(28) <<  setfill('-')
    	 << "  " << setw(0) << setfill(' ') << endl;

	// Calculating and printing the total with tax to the console
	cout << setw(36) <<"TOTAL WITH TAX : $"
		 << fixed << setprecision(2)<<total+(total*TAX_RATE)<<endl;

	cout << right << setfill('*') << setw(46)<< " " << endl <<endl;
	cout << setfill(' ') << setw(0);
}

void  ManageInventory::transactionHistory(tm * localTime)
 {
	// Printing transaction heading to the console with the date and time
	// of the costumer transaction
	cout << endl << setfill('*') << setw(55) << " "<< endl;
	cout << setfill(' ') << setw(0) << setw(35)<< "Transaction History "<< endl;
	cout << setfill('*') << setw(55) << " "<< endl;
	cout << setfill(' ') << setw(0) << "Customer transaction on : "
		 << asctime(localTime);
	cout << setfill('-') << setw(55)<< " " << endl;
	cout << setfill(' ') << setw(0);

	// If a customer buys a inventory item, then his name is printed along with
	// the item name, quantity, and subtotal to the console
 	if (numNikeShoes>0)
 	{
 		cout << customer << " purchased " << numNikeShoes <<" "
 			 << p_pInventoryItems[0]->name << " for $"
			 << numNikeShoes*p_pInventoryItems[0]->cost << endl;
 	}
 	if (numUaShirts>0)
 	{
 		cout << customer <<" purchased " << numUaShirts <<" "
 			 << p_pInventoryItems[1]->name << " for $"
			 << numUaShirts*p_pInventoryItems[1]->cost << endl;
 	}
 	if (numBrooksShoes>0)
 	{
 		cout << customer << " purchased " << numBrooksShoes <<" "
 			 << p_pInventoryItems[2]->name << " for $"
			 << numBrooksShoes*p_pInventoryItems[2]->cost << endl;
 	}
 	if (numAsicShoes>0)
 	{
 		cout << customer << " purchased " << numAsicShoes <<" "
 			 << p_pInventoryItems[3]->name << " for $"
			 << numAsicShoes*p_pInventoryItems[3]->cost << endl;
 	}
 	if (numNikeShorts>0)
 	{
 		cout << customer << " purchased " << numNikeShorts <<" "
 			 << p_pInventoryItems[4]->name << " for $"
			 << numNikeShorts*p_pInventoryItems[4]->cost << endl;
 	}
 	cout << setfill('*') << setw(55)<< " " << endl <<endl;
    cout << setfill(' ') << setw(0);
 }
