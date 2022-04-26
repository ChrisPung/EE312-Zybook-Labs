#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

// Default Constructor. This will be called once for each object created to the ItemToPurchase class.
ItemToPurchase::ItemToPurchase(){
   itemName = "none";
   itemPrice = 0;
   itemQuantity = 0;
}
// These functions are "Setters" or "Mutators". They change a class' data member.
void     ItemToPurchase::SetName(string newName)      {itemName = newName;}
void     ItemToPurchase::SetPrice(int newPrice)       {itemPrice = newPrice;}
void     ItemToPurchase::SetQuantity(int newQuantity) {itemQuantity = newQuantity;}

// These functions are "Getters" or "Accessors". They only access a class' data member. They do not change them.
string   ItemToPurchase::GetName() const              {return itemName;}
int      ItemToPurchase::GetPrice() const             {return itemPrice;}
int      ItemToPurchase::GetQuantity() const          {return itemQuantity;}
