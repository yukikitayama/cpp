#include <iostream>
#include <memory>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    // Account joe;
    // Checking_Account c;
    // cout << c << endl;
    // Savings_Account s {"Frank", 5000, 2.6};
    // cout << s << endl;
    // s.deposit(10000);
    // cout << s << endl;
    // s.withdraw(10000);
    // cout << s << endl;
    Account *ptr = new Trust_Account("Leo", 10000, 2.6);
    cout << *ptr << endl;    

    return 0;
}