#pragma once
#include "Subject.hpp"
#include "Observer.hpp"
#include "DataClass.hpp"

#include <vector>

class ConcreteSubject : Subject {
public:
    ConcreteSubject();
    ~ConcreteSubject() override;

    void registerObserver(Observer* observer);
    void deRegisterObserver(Observer* observer);
    void notifyObserver();
    void setData(int i, float f, char c);
    void setData(struct DataClass data);

private:
    struct DataClass m_data;
    std::vector<Observer*> ListOfObservers;
};