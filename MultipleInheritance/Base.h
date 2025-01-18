#pragma once
#include <iostream>

template<typename T1, typename T2>
class base {
protected:
    T1 value1;
    T2 value2;

public:
    base() : value1(), value2() {}

    base(T1 v1, T2 v2) : value1(v1), value2(v2) {}

    virtual ~base() {}

    T1 getValue1() const { return value1; }
    T2 getValue2() const { return value2; }

    void setValue1(T1 v1) { value1 = v1; }
    void setValue2(T2 v2) { value2 = v2; }

    virtual void display() const {
        std::cout << "base values:" << std::endl;
        std::cout << "value1: " << value1 << std::endl;
        std::cout << "value2: " << value2 << std::endl;
    }
};