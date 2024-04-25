#include <iostream>
#include <string>
using namespace std;

class ATM
{
private:
  double balance;
public:
  ATM(double initialBalance)
      : balance(initialBalance) {}

  void deposit(double amount)
  {
      if (amount > 0)
      {
          balance += amount;
      }
  }

  void withdraw(double amount)
  {
      if (amount <= balance)
      {
          balance -= amount;
      }
      else
      {
          cout << "Insufficient Balance." << endl;
      }
  }

  void display()
  {
      cout << "\nBalance: Rs " << balance << endl;
  }
};

int main()
{
  double initialDeposit;

  cout << "Enter initial deposit: ";
  cin >> initialDeposit;

  ATM atm(initialDeposit);

  int choice;
  double amount;

  do
  {
      cout << "\n1. Deposit" << endl;
      cout << "2. Withdraw" << endl;
      cout << "3. Display Balance" << endl;
      cout << "4. Exit" << endl;
      cout << "Enter choice: ";
      cin >> choice;

      switch (choice)
      {
      case 1:
          cout << "Enter deposit amount: ";
          cin >> amount;
          atm.deposit(amount);
          break;
      case 2:
          cout << "Enter withdrawal amount: ";
          cin >> amount;
          atm.withdraw(amount);
          break;
      case 3:
          atm.display();
          break;
      case 4:
          cout<<"Thanks for using ATM !"<<endl;
          break;
      default:
          cout << "Invalid choice." << endl;
      }
  } while (choice != 4);

  return 0;
}
