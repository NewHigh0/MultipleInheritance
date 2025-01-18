#pragma once
#include "base.h"

template<typename T1, typename T2, typename T3, typename T4>
class child : public base<T1, T2> {
protected:
    T3 value3;
    T4 value4;

public:
    child() : base<T1, T2>(), value3(), value4() {}

    child(T1 v1, T2 v2, T3 v3, T4 v4)
        : base<T1, T2>(v1, v2), value3(v3), value4(v4) {}

    virtual ~child() {}

    T3 getValue3() const { return value3; }
    T4 getValue4() const { return value4; }

    void setValue3(T3 v3) { value3 = v3; }
    void setValue4(T4 v4) { value4 = v4; }

    virtual void display() const override {
        base<T1, T2>::display();
        std::cout << "child values:" << std::endl;
        std::cout << "value3: " << value3 << std::endl;
        std::cout << "value4: " << value4 << std::endl;
    }
};