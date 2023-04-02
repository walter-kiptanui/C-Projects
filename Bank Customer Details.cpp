#include <iostream>

using namespace std;

    class bankdemo{
    char name[50];
    int accno;
    char acType[20];
    float balance;
    public:
        bankdemo()
        {
            accno=0000;
            balance=0.0;
        }
        void input();
        void deposit();
        void withdraw();
        void display();

};
void bankdemo::input()
{
    cout << "enter all information: ";
    cout << "enter  name of the customer: ";
    cin >> name;
    cout << "enter  account number: ";
    cin >> accno;
    cout << "enter  account type: ";
    cin >> acType;
    cout << "enter  amount deposited: ";
    cin >> balance;
}
void bankdemo::deposit()
{
    float a;
    cout << "deposit: ";
    cout << "enter amount to deposit: ";
    cin >> a;
    balance+=a;
}
void bankdemo::withdraw()
{
    float amount;
    cout << "enter amount";
    cout << "enter  amount to withdraw: ";
    cin >> amount;
    balance-=amount;
}
void bankdemo::display()
{
    cout << "account details is: ";
    cout << "name of the customer: " <<name;
    cout << "account number: " <<accno;
    cout << "account type: " <<acType;
    cout << "balance: " <<balance;

}
int main()
{
    bankdemo bd;
    int choice=1;
    while(choice!=0)
    {cout << "enter 0 for exit\n 1. create new account. \n 2.deposit\n 3. withdraw \n 4. see account status";
    cin >> choice;
    switch (choice)
    {
        case 0:bd.display();
        cout << "accounts: ";
        break;
        case 1: bd.input();
        break;
        case 2: bd.deposit();
        break;
        case 3: bd.withdraw();
        break;
        case 4: bd.display();
        break;
        default: cout <<"invalid option: ";


    }


return 0;
}




