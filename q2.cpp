#include <iostream>
using namespace std;

class Perishables {
  private:
      string name;
      double price;
      int quantity;

  public:
    void inventoryStock(){
    Perishables items[100];
    int   numItems   = 0;
    float total      = 0;
    float StockWorth = 0;
    cout << "How many items you want to enter: ";
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

class Nonperishables{
  private:
      string name;
      double price;
      int quantity;

  public:
    void inventoryStock(){
    Nonperishables items[100];
    int   numItems   = 0;
    float total      = 0;
    float StockWorth = 0;
    cout << "How many items you want to enter: ";
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
int choice = 0;
class Accountant {
  private:
    float OverallStockWorth;
  public:
    //function will add the two totals from Perishable and Nonperishables
    void firstmessage(){
      cout << "Choose a function by entering a number:";
      cout << "\n1) Perishables";
      cout << "\n2) Nonperishables";
      cout << "\n3) Both" << endl;
      cin  >> choice;
    }
};

int main(){

Accountant bb;
bb.firstmessage();


// 1 will run a function that allows user to input stock
  if (choice == 1){
    cout << "\nPerishables" << endl <<
            "-----------" << endl;
    Perishables ab;
    ab.inventoryStock();

  }
  //2 will run a function that allows user to input missing stock
  else if (choice == 2){
    cout << "\nNonperishables" << endl <<
            "--------------" << endl;
    Nonperishables mb;
    mb.inventoryStock();


  }
  //3 will run both functions
  else if (choice == 3){
    cout << "\nPerishables" << endl <<
            "-----------" << endl;
    Perishables ab;
    ab.inventoryStock();
    cout << "\nNonperishables" << endl <<
            "--------------" << endl;
    Nonperishables mb;
    mb.inventoryStock();

  }
  else{
      cout << "Sorry, try again" << endl;
  }


  // print out total loss and gain of perishable stock

        return 0;
}
