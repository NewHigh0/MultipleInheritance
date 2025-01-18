#pragma once
#include "child.h"

template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
class child2 : public child<T1, T2, T3, T4> {
protected:
    T5 value5;
    T6 value6;

public:
    child2() : child<T1, T2, T3, T4>(), value5(), value6() {}

    child2(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6)
        : child<T1, T2, T3, T4>(v1, v2, v3, v4), value5(v5), value6(v6) {}

    virtual ~child2() {}

    T5 getValue5() const { return value5; }
    T6 getValue6() const { return value6; }

    void setValue5(T5 v5) { value5 = v5; }
    void setValue6(T6 v6) { value6 = v6; }

    virtual void display() const override {
        child<T1, T2, T3, T4>::display();
        std::cout << "child2 values:" << std::endl;
        std::cout << "value5: " << value5 << std::endl;
        std::cout << "value6: " << value6 << std::endl;
    }
};