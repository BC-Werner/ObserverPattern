#pragma once
#include "Subject.hpp"
#include "Observer.hpp"
#include "DataClass.hpp"

#include <vector>

class ConcreteSubject : public Subject {
public:
    ConcreteSubject();
    ~ConcreteSubject() override;

    void registerObserver(Observer* observer) override;
    void deRegisterObserver(Observer* observer) override;
    void notifyObserver() override;
    void setData(int i, float f, char c);
    void setData(struct DataClass inputData);

private:
    struct DataClass data;
    std::vector<Observer*> ListOfObservers;
};