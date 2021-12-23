#include "ConcreteObserverB.hpp"
#include <iostream>

ConcreteObserverB::ConcreteObserverB(Subject* observableSubject)
{
    this->concreteSubject = observableSubject;
    this->concreteSubject->registerObserver(this);
};
ConcreteObserverB::~ConcreteObserverB() { };

void ConcreteObserverB::update(struct DataClass data)
{
    this->data = data;
    this->display();
};

void ConcreteObserverB::display()
{
    std::cout
        << "Observer B Data: { "
        << data.testInt
        << ", "
        << data.testFloat
        << ", "
        << data.testChar
        << " }\n";
}