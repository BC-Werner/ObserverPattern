#include "Observer.hpp"
#include "Subject.hpp"

class ConcreteObserver : Observer {
public:
    ConcreteObserver();
    ~ConcreteObserver();

    void update();

private:
    Subject* _concreteSubject = nullptr;
};