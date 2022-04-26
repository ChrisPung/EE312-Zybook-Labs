#include <iostream>
using namespace std;

#include "ItemToPurchase.h"
// Christopher Pung
// This lab prompts the user for two items and creates two new objects for each item and outputs them.
// Also outputs the total price for purchasing x amount of items at y price.


// Instead of stopping at one word, it will store all words and spaces.
// Does not include \n, tabs, or numbers in words.
// Input: None.
// Output: name
string BetterCIN(){
   string name;
   char input;
   cin.get(input);
   while ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z') || (input == ' ')){
      name.push_back(input);
      cin.get(input);
   }
   return name;
}
int main() {
   
   ItemToPurchase item1;
   ItemToPurchase item2;
   string name;
   int price = 0;
   int quantity = 0;
   
   cout << "Item 1" << endl;
   cout << "Enter the item name:" << endl;
   name = BetterCIN();
   item1.SetName(name);
   
   cout << "Enter the item price:" << endl;
   cin >> price;
   item1.SetPrice(price);
   
   cout << "Enter the item quantity:" << endl;
   cin >> quantity;
   item1.SetQuantity(quantity);
   
   
   cout << endl;
   cout << "Item 2" << endl;
   cin.ignore();
   cout << "Enter the item name:" << endl;
   name = BetterCIN();
   item2.SetName(name);
   
   cout << "Enter the item price:" << endl;
   cin >> price;
   item2.SetPrice(price);
   
   cout << "Enter the item quantity:" << endl;
   cin >> quantity;
   item2.SetQuantity(quantity);
   
   cout << endl;
   cout << "TOTAL COST" << endl;
   cout << item1.GetName() << " " << item1.GetQuantity() << " @ $";
   cout << item1.GetPrice() << " = $" << item1.GetPrice() * item1.GetQuantity() << endl;
   cout << item2.GetName() << " " << item2.GetQuantity() << " @ $";
   cout << item2.GetPrice() << " = $" << item2.GetPrice() * item2.GetQuantity() << endl;
   cout << endl;
   cout << "Total: $" << item1.GetPrice() * item1.GetQuantity() + item2.GetPrice() * item2.GetQuantity() << endl;
   
   return 0;
   }
