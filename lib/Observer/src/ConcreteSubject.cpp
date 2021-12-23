#include "ConcreteSubject.hpp"
#include <algorithm>

ConcreteSubject::ConcreteSubject() { };
ConcreteSubject::~ConcreteSubject()
{
    for (Observer* obs : this->ListOfObservers)
    {
        delete obs;
    }

    this->ListOfObservers.clear();
};

void ConcreteSubject::registerObserver(Observer* observer)
{
    this->ListOfObservers.push_back(observer);
};
void ConcreteSubject::deRegisterObserver(Observer* observer)
{
    std::vector<Observer*>::iterator it =
        std::find(
            ListOfObservers.begin(),
            ListOfObservers.end(),
            observer
        );

    if (it != ListOfObservers.end())
    {
        delete* it;
        ListOfObservers.erase(it);
    }
};
void ConcreteSubject::notifyObserver()
{
    for (Observer* observer : ListOfObservers)
    {
        observer->update(m_data);
    }
};
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