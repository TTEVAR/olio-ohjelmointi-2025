#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"


int main() {
    Car c;
    c.setBrand("Toyota");
    c.setModel("Corolla");
    c.setYearModel(2020);
    c.printData();


    Rectangle *r = new Rectangle();
    r->setWidth(5.0);
    r->setHeight(3.0);
    std::cout << "Area: " << r->getArea() << std::endl;
    std::cout << "Circumference: " << r->getCircum() << std::endl;
    delete r;


    std::shared_ptr<Student> s = std::make_shared<Student>();
    s->setName("Anna");
    s->setStudentNumber(12345);
    s->setAverage(4.2);


    std::cout << "Name: " << s->getName() << std::endl;
    std::cout << "Student Number: " << s->getStudentNumber() << std::endl;
    std::cout << "Average: " << s->getAverage() << std::endl;


    return 0;
}
