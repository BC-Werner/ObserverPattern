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
        observer->update(data);
    }
};
void ConcreteSubject::setData(int i, float f, char c)
{
    this->data.testInt = i;
    this->data.testFloat = f;
    this->data.testChar = c;
    notifyObserver();
}

void ConcreteSubject::setData(struct DataClass inputData)
{
    this->data = data;
    notifyObserver();
}