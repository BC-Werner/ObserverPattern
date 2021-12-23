#pragma once
#include "Observer.hpp"
#include "Subject.hpp"
#include "Display.hpp"
#include "DataClass.hpp"

class ConcreteObserver : public Observer, Display {
public:
    ConcreteObserver(Subject* observableSubject);
    ~ConcreteObserver() override;

    void update(struct DataClass data) override;
    void display();

private:
    struct DataClass data;
    Subject* concreteSubject = nullptr;
};