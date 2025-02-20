#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char first_name [20] {};
    char last_name [20] {};
    char full_name [50] {};
    char temp[50] {};

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

    // cout << "Enter full name: ";
    // cin >> full_name;
    // cout << "Full name: " << full_name << endl;
    cout << "Enter full name: ";
    // Read a whole line, including spaces
    cin.getline(full_name, 50);
    cout << "Full name: " << full_name << endl;

    strcpy(temp, full_name);
    if (strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl;

    for (size_t i {0}; i < strlen(full_name); ++i) {
        if (isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    cout << "Full name: " << full_name << endl;

    if (strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl;
    
    cout << "Result of comparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl;
    cout << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << endl;

    return 0;
}