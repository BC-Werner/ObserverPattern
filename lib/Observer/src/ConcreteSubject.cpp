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

/*
 * Push an observer into the list of obsrvers, that will be updated when state changes.
 */
void ConcreteSubject::registerObserver(Observer* observer)
{
    this->ListOfObservers.push_back(observer);
};

/*
 * Push an observer into the list of obsrvers, that will be updated when state changes.
 */
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

/*
 * Push an observer into the list of obsrvers, that will be updated when state changes.
 */
void ConcreteSubject::notifyObserver()
{
    for (Observer* observer : ListOfObservers)
    {
        observer->update(data);
    }
};

/*
 * Set the data to be pushed to the observers
 */
void ConcreteSubject::setData(int i, float f, char c)
{
    this->data.testInt = i;
    this->data.testFloat = f;
    this->data.testChar = c;
    notifyObserver();
}

/*
 * Set the data to be pushed to the observers with a DataClass struct
 */
void ConcreteSubject::setData(struct DataClass inputData)
{
    this->data = inputData;
    notifyObserver();
}
