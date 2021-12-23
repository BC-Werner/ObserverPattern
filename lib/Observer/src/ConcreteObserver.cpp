#include "ConcreteObserver.hpp"
#include <iostream>

ConcreteObserver::ConcreteObserver(Subject* observableSubject)
{
    this->concreteSubject = observableSubject;
    this->concreteSubject->registerObserver(this);
};
ConcreteObserver::~ConcreteObserver() { };

void ConcreteObserver::update(struct DataClass data)
{
    this->data = data;
    this->display();
};

void ConcreteObserver::display()
{
    std::cout
        << "Data: { "
        << data.testInt
        << ", "
        << data.testFloat
        << ", "
        << data.testChar
        << " }\n";
}