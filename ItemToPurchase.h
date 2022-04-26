#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;
// Inline Member Function: A member function's definition along with its declaration.
// EX: void SetName(string newName){ itemName = newName;}
class ItemToPurchase{
   public:
   // Template: type functionname(parameters);
      ItemToPurchase(); // Constructor: Has the same name as the class and no return type (not even void).
      
      void SetName(string newName);
      void SetPrice(int newPrice);
      void SetQuantity(int newQuantity);
      
      string   GetName() const;
      int      GetPrice() const;
      int      GetQuantity() const;
      
   private:
      string itemName;
      int itemPrice;
      int itemQuantity;
};
#endif
