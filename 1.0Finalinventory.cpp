#include <iostream>
//goal is to make a class for a inventory app
using namespace std;
class nonPerishableStock{

};
class Accountant{


};
class PerishablesStock{
    private:
      float UnitPrice        = 0;
      int   UnitsOnHand      = 0;
      float TotalStockWorth  = 0;
      float LostUnitPrice    = 0;
      int   LostUnitsOnHand  = 0;
      float TotalRevenueLost = 0;

    public:
      int choice = 0;

      firstmessage(){//ouputs a prompt to help the user decide what experience that they want.        cout << "Choose a function by entering a number:";
        cout << "\n1) Perishables";
        cout << "\n2) Nonperishables";
        cout << "\n3) Perishables and Nonperishables" << endl;
        cin  >> choice
      };

      secondmessage(){//ouputs a prompt to help the user decide what experience that they want.
        cout << "Choose a function to contiune by entering a number:";
        cout << "\n1) Perishables in stock";
        cout << "\n2) Perishables missing";
        cout << "\n3) Both" << endl;
        cin  >> choice;
      };

      thirdmessage(){//ouputs a prompt to help the user decide what experience that they want.        cout << "Choose a function to contiune by entering a number:";
        cout << "\n1) Nonperishables in stock";
        cout << "\n2) Nonperishables missing";
        cout << "\n3) Both" << endl;
        cin  >> choice;
      };

      float stockWorth(){ // creates a list of one hand products and adds up their over all worth
                          // my idea is to use a multi dimensional array that holds price and name then prints out each set of arrays

      };
      float stockLoss(){ // creates a list of lost products and adds up their over all worth
                          // repeat stockworth


      };
         // a way for outside functions to use access total price and total loss
};
int choice = 0;
int main(){
    PerishablesStock ab;


    ab.secondmessage();

  // 1 will run a function that allows user to input stock
    if (choice == 1){


    }
    //2 will run a function that allows user to input missing stock
    else if (choice == 2){


    }
    //3 will run both functions
    else if (choice == 3){


    }
    else{
        cout << "Sorry try again" << endl;
    }


    // print out total loss and gain of perishable stock
    return 0;
}


