#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City {
    std::string name;
    long population;
    double cost;
};

struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

void ruler() {
    std::cout << "\n1234567890123456789012345678901234567890123456789012345678901234567890\n" << std::endl;
}

int main() {
    Tours tours {
        "Tour Ticket Prices from Maimi",
        {
            {
                "Colombia", {
                    {"Bogota", 8778000, 400.98},
                    {"Cali", 2401000, 424.12},
                    {"Medellin", 2464000, 350.98},
                    {"Cartagena", 972000, 345.34}
                },
            },
            {
                "Brazil", {
                    {"Rio De Janiero", 13000000, 567.45},
                    {"Sao Paulo", 11310000, 975.45},
                    {"Salvador", 18234000, 855.99}
                }
            },
            {
                "Chile", {
                    {"Valdivia", 260000, 569.12},
                    {"Santiago", 7040000, 520.00}
                }
            },
            {
                "Argentina", {
                    {"Buenos Aires", 3010000, 723.77}
                }
            }
        }
    };
    std::cout << tours.title << std::endl;
    for (auto country : tours.countries) {
        std::cout << country.name << std::endl;
        for (auto city : country.cities) {
            std::cout << "\t" << city.name << "\t" << city.population << "\t" << city.cost << std::endl;
        }
    }

    const int total_width {70};
    const int field1_width {20};  // Country
    const int field2_width {20};  // City
    const int field3_width {15};  // Population
    const int field4_width {15};  // Cost
    int title_length = tours.title.length();

    ruler();

    std::cout << std::setw((total_width - title_length) / 2) << "" << tours.title << std::endl;
    std::cout << std::endl;
    std::cout << std::setw(field1_width) << std::left << "Country"
              << std::setw(field2_width) << std::left << "City"
              << std::setw(field3_width) << std::left << "Population"
              << std::setw(field4_width) << std::left << "Price"
              << std::endl;
    std::cout << std::setw(total_width) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::setprecision(2) << std::fixed;
    for (Country country : tours.countries) {
        for (size_t i = 0; i < country.cities.size(); ++i) {
            std::cout << std::setw(field1_width) << std::left << ((i == 0) ? country.name : "")
                      << std::setw(field2_width) << std::left << country.cities.at(i).name
                      << std::setw(field3_width) << std::right << country.cities.at(i).population
                      << std::setw(field4_width) << std::right << country.cities.at(i).cost
                      << std::endl;
        }
    }

    std::cout << std::endl;
    return 0;
}