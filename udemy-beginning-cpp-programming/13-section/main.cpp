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

// class Player {
// private:
//     std::string name;
//     int health;
//     int xp;

// public:
//     void set_name(std::string name_val) {
//         name = name_val;
//     }
//     Player() { 
//         cout << "No args constructor called" << endl;
//     }
//     Player(std::string name) {
//         cout << "String arg constructor called" << endl;
//     }
//     Player(std::string name, int health, int xp) {
//         cout << "Three args constructor called" << endl;
//     }
//     ~Player() {
//         cout << "Destructor called for " << name << endl;
//     }
// };

// class Player {
// private:
//     std::string name;
//     int health;
//     int xp;

// public:
//     void set_name(std::string name_val) {
//         name = name_val;
//     }
//     std::string get_name() {
//         return name;
//     }
//     Player() {
//         name = "None";
//         health = 100;
//         xp = 3;
//     }
//     Player(std::string name_val, int health_val, int xp_val) {
//         name = name_val;
//         health = health_val;
//         xp = xp_val;
//     }
// };

// class Player {
// private:
//     std::string name;
//     int health;
//     int xp;
// public:
//     // Player();
//     // Player(std::string name_val);
//     // Player(std::string name_val, int health_val, int xp_val);
//     Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
// };

// Player::Player()
//     : name {"None"}, health {0}, xp {0} {
// }

// Player::Player(std::string name_val)
//     : name {name_val}, health {0}, xp {0} {
// }

// Player::Player(std::string name_val, int health_val, int xp_val)
//     : name {name_val}, health {health_val}, xp {xp_val} {
// }

// Player::Player()
//     : Player {"None", 0, 0} {
//     cout << "No-args constructor" << endl;
// }

// Player::Player(std::string name_val)
//     : Player {name_val, 0, 0} {
//     cout << "One-arg constructor" << endl;
// }

// Player::Player(std::string name_val, int health_val, int xp_val)
//     : name {name_val}, health {health_val}, xp {xp_val} {
//     cout << "Three-args constructor" << endl;
// }

// class Player {
// private:
//     std::string name;
//     int health;
//     int xp;
// public:
//     std::string get_name() { return name; }
//     int get_health() { return health; }
//     int get_xp() { return xp; }
//     Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
//     // Copy constructor
//     Player(const Player &source);
//     // Destructor
//     ~Player() { cout << "Destructor called for: " << name << endl; }
// };

// Player::Player(std::string name_val, int health_val, int xp_val)
//     : name {name_val}, health {health_val}, xp {xp_val} {
//     cout << "Three-args constructor for: " << name << endl;
// }

// Player::Player(const Player &source)
//     // : name(source.name), health(source.health), xp{source.xp} {
//     : Player {source.name, source.health, source.xp} {
//     cout << "Copy constructor - made copy of: " << source.name << endl;
// }

// void display_player(Player p) {
//     cout << "Name: " << p.get_name() << endl;
//     cout << "Health: " << p.get_health() << endl;
//     cout << "XP: " << p.get_xp() << endl;
// }

class Deep {
private:
    int *data;
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    // Constructor
    Deep(int d);
    // Copy constructor
    Deep(const Deep &source);
    // Destructor
    ~Deep();
};

Deep::Deep(int d) {
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source)
    : Deep {*source.data} {
    cout << "Copy constructor - deep copy" << endl; 
}

Deep::~Deep() {
    delete data;
    cout << "Destructor freeing data" << endl;
}

void display_deep(Deep s) {
    cout << s.get_data_value() << endl;
}

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

    // {
    //     Player slayer;
    //     slayer.set_name("Slayer");
    // }

    // {
    //     Player frank;
    //     frank.set_name("Frank");
    //     Player hero("Hero");
    //     hero.set_name("Hero");
    //     Player villain("Villain", 100, 12);
    //     villain.set_name("Villain");
    // }

    // Player *enemy = new Player;
    // enemy->set_name("Enemy");

    // Player *level_boss = new Player("Level Boss", 1000, 300);
    // level_boss->set_name("Level Boss");

    // delete enemy;
    // delete level_boss;

    // Player hero;
    // Player frank {"Frank", 100, 13};
    // frank.set_name("Frank");
    // cout << frank.get_name() << endl;

    // Player empty {"XXXXXX", 100, 50};
    // Player my_new_object {empty};
    // display_player(empty);
    // Player frank {"Frank"};
    // Player hero {"Hero", 100};
    // Player villain {"Villain", 100, 55};

    Deep obj1 {100};
    display_deep(obj1);
    Deep obj2 {obj1};
    obj2.set_data_value(1000);

    return 0;
}