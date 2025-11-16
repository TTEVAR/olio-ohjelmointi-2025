#include <iostream>
#include <vector>
#include "car.h"


int main() {
    std::vector<Car> carList;


    carList.emplace_back("Bentley", "Hunaudières", 1999);
    carList.emplace_back("Fiat", "124 Spider Abarth", 2016);
    carList.emplace_back("Ferrari", "P4/5 by Pininfarina", 2006);


    std::cout << "Second car in list:" << std::endl;
    carList[1].printData();


    std::cout << "\nAll cars:" << std::endl;
    for (const auto &car : carList) {
        car.printData();
    }


    return 0;
}
