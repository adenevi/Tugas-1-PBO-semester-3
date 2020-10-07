#include<iostream>
#include <string>
using namespace std;

class Account
{
 public:
  Account( int);
  void credit(int );
  void debit(int );
  int getAccountBalance();
 private:
  int accountBalance;
};
Account::Account( int balance)
{
 if(balance>=0)
  accountBalance=balance;
 else
 {
  accountBalance=0;
  cout<<"Saldo awal tidak valid."<<endl;
 }
}
void Account::credit( int balance)
{
 accountBalance = accountBalance + balance;
}
void Account::debit( int balance)
{
 if(accountBalance>=balance)
 {
  accountBalance = accountBalance - balance;
 }
 else
 {
  cout<<"Jumlah debit melebihi saldo akun."<<endl;
 }
}
int Account::getAccountBalance()
{
 return accountBalance;
}

int main()

{
 Account Account1(70);
 Account Account2(-50);
 cout << "Saldo awal akun 1 adalah: "<< Account1.getAccountBalance()<< "\nSaldo awal akun 2 adalah: "<< Account2.getAccountBalance() << endl;
 Account1.credit(300);
 Account2.credit(25);
 cout << "\nSaldo akun 1 adalah: "<< Account1.getAccountBalance()<< "\nSaldo akun 2 adalah: "<< Account2.getAccountBalance() << endl;
 Account1.debit(60);
 Account2.debit(44);
 cout << "\nSaldo akun 1 adalah: "<< Account1.getAccountBalance()<< "\nSaldo akun 2 adalah: "<< Account2.getAccountBalance() << endl;
}
