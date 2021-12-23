#include "ConcreteObserver.hpp"
#include <iostream>

ConcreteObserver::ConcreteObserver(Subject* observableSubject)
{
    this->_concreteSubject = observableSubject;
    this->_concreteSubject->registerObserver(this);
};
ConcreteObserver::~ConcreteObserver() { };

void ConcreteObserver::update(struct DataClass data)
{
    this->m_data = data;

    std::cout << "Data: { " << m_data.testInt << ", " << m_data.testFloat << ", " << m_data.testChar << " }\n";
};