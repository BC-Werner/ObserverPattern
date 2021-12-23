#pragma once

#include "DataClass.hpp"

class Observer {
public:
    virtual ~Observer() = 0;
    virtual void update(struct DataClass data) = 0;
};
