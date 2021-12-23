#pragma once
#include "Observer.hpp"
#include "Subject.hpp"
#include "DataClass.hpp"

class ConcreteObserver : Observer {
public:
    ConcreteObserver(Subject* observableSubject);
    ~ConcreteObserver() override;

    void update(struct DataClass data) override;

private:
    struct DataClass m_data;
    Subject* _concreteSubject = nullptr;
};