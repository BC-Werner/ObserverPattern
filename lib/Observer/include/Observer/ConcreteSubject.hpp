#include "Subject.hpp"
#include "Observer.hpp"

#include <vector>

class ConcreteSubject : Subject {
public:
    ConcreteSubject();
    ~ConcreteSubject();

    void registerObserver();
    void deRegisterObserver();
    void notifyObserver();

private:
    std::vector<Observer*> ListOfObservers;
};