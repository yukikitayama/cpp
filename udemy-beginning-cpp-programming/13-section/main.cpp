#include <iostream>
#include <string>
#include <vector>

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

class Player {
public:
    string name;
    int health;
    int xp;

    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; }
    bool is_dead();
};

class Account {
public:
    string name;
    double balance;

    bool deposit(double bal) { balance += bal; cout << "In deposit" << endl; }
    bool withdraw(double bal) { balance -= bal; cout << "In withdraw" << endl; }
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

    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    cout << frank.name << endl;
    frank.talk("Hi there");

    Player *enemy = new Player();
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    enemy->talk("I will destroy you");

    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000;
    frank_account.deposit(1000);
    frank_account.withdraw(500);

    return 0;
}