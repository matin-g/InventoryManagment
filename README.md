# InventoryManagment
Using a double pointer in order to create a 2D data structure to create a simple program for a store's Inventory Management and transaction history and receipts 

# Sample Output
<div>
*** Inventory before costumer transaction ***

************************************************* 
                   INVENTORY
************************************************* 
ITEM                       QUANTITY    PRICE
-------------------------  ----------  -------  
Nike basketball shoes      22          145.99
-------------------------  ----------  -------  
Under Armour T-shirt       33          29.99
-------------------------  ----------  -------  
Brooks running shoes       11          111.44
-------------------------  ----------  -------  
Asics running shoes        20          165.88
-------------------------  ----------  -------  
Nike shorts                77          45.77
************************************************* 

*** Performing costumer transaction ***

Enter your name : Mark

Menu options for the items available for sale
1 - Nike basketball shoes
2 - Under Armour T-shirt
3 - Brooks running shoes
4 - Asics running shoes
5 - Nike shorts
0 - Exit

**** Enter a integer between 1 and 5 to add one corresponding item to the cart, or 0 to checkout ****

Enter a item (1-5) to add (0 to exit): 1

Enter a item (1-5) to add (0 to exit): 1

Enter a item (1-5) to add (0 to exit): 2

Enter a item (1-5) to add (0 to exit): 2

Enter a item (1-5) to add (0 to exit): 2

Enter a item (1-5) to add (0 to exit): 5

Enter a item (1-5) to add (0 to exit): 5

Enter a item (1-5) to add (0 to exit): 5

Enter a item (1-5) to add (0 to exit): 5

Enter a item (1-5) to add (0 to exit): 3

Enter a item (1-5) to add (0 to exit): 0

*** Printing receipt for costumer transaction ***

********************************************* 
                      RECEIPT
********************************************* 
PRODUCT                QUANTITY    SUBTOTAL
---------------------  ----------  ---------  
Nike basketball shoes  2           $291.98
Under Armour T-shirt   3           $89.97
Brooks running shoes   1           $111.44
Asics running shoes    0           $0
Nike shorts            4           $183.08
                           -----------------  
                           TOTAL : $676.47
                           TAX   : $55.81
                  --------------------------  
                  TOTAL WITH TAX : $732.28
********************************************* 

*** Inventory after costumer transaction ***

************************************************* 
                   INVENTORY
************************************************* 
ITEM                       QUANTITY    PRICE
-------------------------  ----------  -------  
Nike basketball shoes      20          145.99
-------------------------  ----------  -------  
Under Armour T-shirt       30          29.99
-------------------------  ----------  -------  
Brooks running shoes       10          111.44
-------------------------  ----------  -------  
Asics running shoes        20          165.88
-------------------------  ----------  -------  
Nike shorts                73          45.77
************************************************* 

*** Using copy constructor to print original inventory ***

************************************************* 
                   INVENTORY
************************************************* 
ITEM                       QUANTITY    PRICE
-------------------------  ----------  -------  
Nike basketball shoes      22          145.99
-------------------------  ----------  -------  
Under Armour T-shirt       33          29.99
-------------------------  ----------  -------  
Brooks running shoes       11          111.44
-------------------------  ----------  -------  
Asics running shoes        20          165.88
-------------------------  ----------  -------  
Nike shorts                77          45.77
************************************************* 

*** Printing audit log ***

****************************************************** 
               Transaction History 
****************************************************** 
Customer transaction on : Thu Jun 27 22:09:23 2019
------------------------------------------------------ 
Mark purchased 2 Nike basketball shoes for $291.98
Mark purchased 3 Under Armour T-shirt for $89.97
Mark purchased 1 Brooks running shoes for $111.44
Mark purchased 4 Nike shorts for $183.08
****************************************************** 

*** Using copy constructor to print a copy of the transaction history ***

****************************************************** 
               Transaction History 
****************************************************** 
Customer transaction on : Thu Jun 27 22:09:23 2019
------------------------------------------------------ 
Mark purchased 2 Nike basketball shoes for $291.98
Mark purchased 3 Under Armour T-shirt for $89.97
Mark purchased 1 Brooks running shoes for $111.44
Mark purchased 4 Nike shorts for $183.08
****************************************************** 
</div>
