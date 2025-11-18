#include <iostream>
#include <vector>

int main() {
    std::vector<float> v1(5);
    float given_number;
    std::cout << "Type given_number: ";
    std::cin >> given_number;

    v1[0] = given_number;
    v1[1] = given_number + 5;
    v1[2] = given_number + 0.5;
    v1[3] = given_number + 2.3;
    v1[4] = given_number + 4.7;

    float total = 0.0;
    for (unsigned i = 0; i < v1.size(); i++) {
        total += v1[i];
    }
    float average = total / v1.size();
    std::cout << "total: " << total << std::endl;
    std::cout << "average: " << average << std::endl;
    return 0;
}