#pragma once

#include "Observer.hpp"

class Subject {
public:
    virtual ~Subject() = 0;
    virtual void registerObserver(Observer* observer) = 0;
    virtual void deRegisterObserver(Observer* observer) = 0;
    virtual void notifyObserver() = 0;
};