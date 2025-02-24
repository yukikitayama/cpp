#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    // char first_name [20] {};
    // char last_name [20] {};
    // char full_name [50] {};
    // char temp[50] {};

    // cout << first_name;
    // cout << "First name: ";
    // cin >> first_name;
    // cout << "Last name: ";
    // cin >> last_name;
    // first_name[1] = '\0';
    // cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    // cout << "and you last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;
    // strcpy(full_name, first_name);
    // cout << "full_name: " << full_name << " " << strlen(full_name) << endl;
    // strcat(full_name, " ");
    // cout << "full_name: " << full_name << " " << strlen(full_name) << endl;
    // strcat(full_name, last_name);
    // cout << "full_name: " << full_name << " " << strlen(full_name) << endl;

    // // cout << "Enter full name: ";
    // // cin >> full_name;
    // // cout << "Full name: " << full_name << endl;
    // cout << "Enter full name: ";
    // // Read a whole line, including spaces
    // cin.getline(full_name, 50);
    // cout << "Full name: " << full_name << endl;

    // strcpy(temp, full_name);
    // if (strcmp(temp, full_name) == 0)
    //     cout << temp << " and " << full_name << " are the same" << endl;
    // else
    //     cout << temp << " and " << full_name << " are different" << endl;

    // for (size_t i {0}; i < strlen(full_name); ++i) {
    //     if (isalpha(full_name[i]))
    //         full_name[i] = toupper(full_name[i]);
    // }
    // cout << "Full name: " << full_name << endl;

    // if (strcmp(temp, full_name) == 0)
    //     cout << temp << " and " << full_name << " are the same" << endl;
    // else
    //     cout << temp << " and " << full_name << " are different" << endl;
    
    // cout << "Result of comparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl;
    // cout << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << endl;

    // char first_name[30] {"Bjarne"};
    // char last_name[30] {"Stroustrup"};
    // char whole_name[30];
    // int first_name_length = strlen(first_name);
    // int last_name_length = strlen(last_name);
    // strcpy(whole_name, first_name);
    // strcat(whole_name, last_name);
    // int whole_name_length = strlen(whole_name);
    // cout << "The length of the first name, " << first_name << ", is " << first_name_length << " letters long and the length of the last name, " << last_name << ", is " << last_name_length << " letters long. This means that the length of the whole name must be " << whole_name_length << " letters long.";

    // string s0;
    // string s1 {"Apple"};
    // string s2 {"Banana"};
    // string s3 {"Kiwi"};
    // string s4 {"apple"};
    // string s5 {s1};  // Copy
    // string s6 {s1, 0, 3};
    // string s7 (10, 'X');  // Constructor style
    // cout << s0 << endl;
    // cout << s0.length() << endl;
    // // Initialization
    // cout << "s1 is initialized to: " << s1 << endl;
    // cout << "s2 is initialized to: " << s2 << endl;
    // cout << "s3 is initialized to: " << s3 << endl;
    // cout << "s4 is initialized to: " << s4 << endl;
    // cout << "s5 is initialized to: " << s5 << endl;
    // cout << "s6 is initialized to: " << s6 << endl;
    // cout << "s7 is initialized to: " << s7 << endl;
    // cout << boolalpha;
    // cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;  // T
    // cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;  // F
    // cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;  // T
    // cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;  // T
    // cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;  // T
    // cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;  // F
    // cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl;  // T, C-style string
    // Assignment
    // s1 = "Watermelon";
    // cout << "s1 is now: " << s1 << endl;
    // s2 = s1;
    // cout << "s2 is now: " << s2 << endl;
    // s3 = "Frank";
    // cout << "s3 is now: " << s3 << endl;
    // s3[0] = 'C';
    // cout << "s3 change first letter to 'C': " << s3 << endl;
    // s3.at(0) = 'P';
    // cout << "s3 change first letter to 'P': " << s3 << endl;
    // Concatenation
    // s3 = "Watermelon";
    // s3 = s5 + " and " + s2 + " juice";
    // cout << "s3 is now: " << s3 << endl;
    // // s3 = "nice " + " cold" + s5 + "juice";
    // s3 = s5 + "nice " + " cold" + "juice";
    // cout << "s3 is now: " << s3 << endl;
    // s1 = "Apple";
    // for (size_t i {0}; i < s1.length(); i++) {
    //     cout << s1.at(i);
    //     cout << ' ';
    // }
    // cout << endl;
    // for (char c : s1) {
    //     cout << c;
    //     cout << ' ';
    // }
    // cout << endl;
    // s1 = "This is a test";
    // cout << s1.substr(0, 4) << endl;
    // cout << s1.substr(5, 2) << endl;
    // cout << s1.substr(10, 4) << endl;
    // s1 = "This is a test";
    // s1.erase(0, 5);
    // cout << "s1 is now: " << s1 << endl;
    // string full_name {};
    // cout << "Full name: ";
    // getline(cin, full_name);
    // cout << "Full name is: " << full_name << endl;
    // s1 = "The secret word is Boo";
    // string word {};
    // cout << "Enter the word to find: ";
    // cin >> word;
    // size_t position = s1.find(word);
    // if (position != string::npos)
    //     cout << "Found " << word << " at position: " << position << endl;
    // else
    //     cout << "Sorry, " << word << " not found" << endl;    

    string alphabet {"[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {" [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string secret_message {};
    cout << "Enter your secret message: ";
    getline(cin, secret_message);

    string encrypted_message {};
    cout << "Encrypting message..." << endl;
    for (char c : secret_message) {
        size_t position = alphabet.find(c);
        if (position != string::npos) {
            char new_character {key.at(position)};
            encrypted_message += new_character;
        } else {
            encrypted_message += c;
        }
    }
    cout << "Encrypted message: " << encrypted_message << endl;
    string decrypted_message {};
    cout << "Decrypting message..." << endl;
    for (char c : encrypted_message) {
        size_t position = key.find(c);
        if (position != string::npos) {
            char new_char {alphabet.at(position)};
            decrypted_message += new_char;
        } else {
            decrypted_message += c;
        }
    }
    cout << "Decrypted message: " << decrypted_message << endl;
    return 0;
}