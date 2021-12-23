#include "ConcreteObserver.hpp"

ConcreteObserver::ConcreteObserver(Subject* observableSubject)
{
    this->_concreteSubject = observableSubject;
};
ConcreteObserver::~ConcreteObserver()
{
    delete this->_concreteSubject;
};

void ConcreteObserver::update() { };