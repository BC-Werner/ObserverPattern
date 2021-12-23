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
#include "DataClass.hpp"

//using namespace std;

int main()
{

    ConcreteSubject subject;

    subject.setData(123, 3.14, 'B');
    subject.setData(DataClass{ 456, 5.34, 'A' });


    return 0;
}
