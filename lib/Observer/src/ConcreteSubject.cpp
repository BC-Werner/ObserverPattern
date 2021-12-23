#include "ConcreteSubject.hpp"

ConcreteSubject::ConcreteSubject() { };
ConcreteSubject::~ConcreteSubject() { };

void ConcreteSubject::registerObserver() { };
void ConcreteSubject::deRegisterObserver() { };
void ConcreteSubject::notifyObserver()
{
    for (Observer* observer : ListOfObservers)
    {
        observer->update();
    }
};
// Call with ConcreteSubject.setData(struct DataClass data = { 123, 3.14, B});
void ConcreteSubject::setData(int i, float f, char c)
{
    this->m_data.testInt = i;
    this->m_data.testFloat = f;
    this->m_data.testChar = c;
    notifyObserver();
}

void ConcreteSubject::setData(struct DataClass data)
{
    this->m_data = data;
    notifyObserver();
}