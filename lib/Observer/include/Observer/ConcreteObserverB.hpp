#pragma once
#include "Observer.hpp"
#include "Subject.hpp"
#include "Display.hpp"
#include "DataClass.hpp"

class ConcreteObserverB : public Observer, Display {
public:
    ConcreteObserverB(Subject* observableSubject);
    ~ConcreteObserverB() override;

    void update(struct DataClass data) override;
    void display();

private:
    struct DataClass data;
    Subject* concreteSubject = nullptr;
};