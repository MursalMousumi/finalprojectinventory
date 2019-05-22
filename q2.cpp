#include <iostream>
using namespace std;

class ItemRecord {
  private:
      string name;
      double price;
      int quantity;

  public:
    void inventoryStock(){
    ItemRecord items[100];
    int   numItems   = 0;
    float total      = 0;
    float StockWorth = 0;
    cout << "how many items you want to enter: ";
    cin  >> numItems;

    for(int i = 0; i < numItems; i++){
            cout << endl;
            cout << "Enter name of item " << (i + 1) << ": ";
            cin >> items[i].name;
            cout << "Enter price of item " << (i + 1) << ": $";
            cin >> items[i].price;
            cout << "Enter quantity of item " << (i + 1) << ": ";
            cin >> items[i].quantity;

            float StockWorth = items[i].quantity * items[i].price;
            float total = StockWorth + total;
            cout << "Total stocks are $" << StockWorth << endl;
    }

    cout << endl << endl;

    for(int i = 0; i < numItems; i++){
            cout << "For the item " << items[i].name << ", \nthe price is: $" << items[i].price << " \nand the quantity is: " << items[i].quantity << endl;

            float StockWorth = items[i].quantity * items[i].price;
            float total = StockWorth + total;
            cout << "The total stock worth of this item is $" << StockWorth << endl;
    }
   }
};

int main(){
ItemRecord ab;
ab.inventoryStock();

        return 0;
}
