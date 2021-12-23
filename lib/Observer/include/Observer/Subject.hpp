#pragma once
class Subject {
public:
    virtual ~Subject() = 0;
    virtual void registerObserver() = 0;
    virtual void deRegisterObserver() = 0;
    virtual void notifyObserver() = 0;
};