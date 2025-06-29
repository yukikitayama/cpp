#include <iostream>
#include <string>
#include <vector>

#include "Account.h"

using namespace std;

// class Player {
//     string name {"Player"};
//     int health {100};
//     int xp {3};

//     void talk(string);
//     bool is_dead();
// };

// class Account {
//     string name {"Account"};
//     double balance {0.0};

//     bool deposit(double);
//     bool withdraw(double);
// };

// class Player {
// public:
//     string name;
//     int health;
//     int xp;

//     void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; }
//     bool is_dead();
// };

// class Account {
// public:
//     string name;
//     double balance;

//     bool deposit(double bal) { balance += bal; cout << "In deposit" << endl; }
//     bool withdraw(double bal) { balance -= bal; cout << "In withdraw" << endl; }
// };

// class Player {
// private:
//     string name {"Player"};
//     int health;
//     int xp;
// public:
//     void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; }
//     bool is_dead();
// };

// class Account {
// private:
//     string name;
//     double balance;

// public:
//     void set_balance(double bal) { balance = bal; }
//     double get_balance() { return balance; }

//     void set_name(string n);
//     string get_name();
//     bool deposit(double amount);
//     bool withdraw(double amount);
// };

// void Account::set_name(string n) {
//     name = n;
// }

// string Account::get_name() {
//     return name;
// }

// bool Account::deposit(double amount) {
//     balance += amount;
//     return true;
// }

// bool Account::withdraw(double amount) {
//     if (balance - amount >= 0) {
//         balance -= amount;
//         return true;
//     } else {
//         return false;
//     }
// }

class Player {
private:
    std::string name;
    int health;
    int xp;

public:
    void set_name(std::string name_val) {
        name = name_val;
    }
    Player() { 
        cout << "No args constructor called" << endl;
    }
    Player(std::string name) {
        cout << "String arg constructor called" << endl;
    }
    Player(std::string name, int health, int xp) {
        cout << "Three args constructor called" << endl;
    }
    ~Player() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    // Account frank_account;
    // Account jim_account;

    // Player frank;
    // Player hero;

    // Player players[] {frank, hero};

    // vector<Player> player_vec {frank};
    // player_vec.push_back(hero);

    // Player *enemy {nullptr};
    // enemy = new Player();
    // delete enemy;

    // Player frank;
    // frank.name = "Frank";
    // frank.health = 100;
    // frank.xp = 12;
    // cout << frank.name << endl;
    // frank.talk("Hi there");

    // Player *enemy = new Player();
    // (*enemy).name = "Enemy";
    // (*enemy).health = 100;
    // enemy->xp = 15;
    // enemy->talk("I will destroy you");

    // Account frank_account;
    // frank_account.name = "Frank's account";
    // frank_account.balance = 5000;
    // frank_account.deposit(1000);
    // frank_account.withdraw(500);

    // Player frank;
    // frank.name = "Frank";
    // cout << frank.health << endl;
    // frank.talk("Hi");

    // Account frank_account;
    // frank_account.set_name("Frank's account");
    // frank_account.set_balance(1000.0);
    // if (frank_account.deposit(200.0))
    //     cout << "Deposit OK" << endl;
    // else
    //     cout << "Deposite Not Allowed" << endl;
    // if (frank_account.withdraw(500.0))
    //     cout << "Withdrawal OK" << endl;
    // else
    //     cout << "Not Sufficient Funds" << endl;
    // if (frank_account.withdraw(1500.0))
    //     cout << "Withdraw OK" << endl;
    // else
    //     cout << "Not Sufficient Funds" << endl;

    {
        Player slayer;
        slayer.set_name("Slayer");
    }

    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }

    Player *enemy = new Player;
    enemy->set_name("Enemy");

    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");

    delete enemy;
    delete level_boss;

    return 0;
}