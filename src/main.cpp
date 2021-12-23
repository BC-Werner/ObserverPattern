/*
 * Brandon Werner
 * 12/5/2021
 *
 * Observer Design Pattern Example
 */

#include <iostream>
 //#include <vector>
 //#include <string>
 //#include <algorithm>
#include "ConcreteSubject.hpp"
#include "ConcreteObserver.hpp"
#include "ConcreteObserverB.hpp"
#include "DataClass.hpp"

//using namespace std;

int main()
{

    ConcreteSubject subject;

    ConcreteObserver* obs0 = new ConcreteObserver(&subject);
    ConcreteObserverB* obs1 = new ConcreteObserverB(&subject);

    subject.setData(123, 3.14, 'B');

    subject.deRegisterObserver(obs1);

    subject.setData(DataClass{ 456, 5.34, 'A' });


    return 0;
}
