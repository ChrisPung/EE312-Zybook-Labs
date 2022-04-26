#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

// Default Constructor.
ItemToPurchase::ItemToPurchase(){
   itemName = "none";
   itemPrice = 0;
   itemQuantity = 0;
}
void     ItemToPurchase::SetName(string newName)      {itemName = newName;}
void     ItemToPurchase::SetPrice(int newPrice)       {itemPrice = newPrice;}
void     ItemToPurchase::SetQuantity(int newQuantity) {itemQuantity = newQuantity;}

string   ItemToPurchase::GetName() const              {return itemName;}
int      ItemToPurchase::GetPrice() const             {return itemPrice;}
int      ItemToPurchase::GetQuantity() const          {return itemQuantity;}