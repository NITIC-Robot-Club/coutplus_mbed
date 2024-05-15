#ifndef COUTPLUS_HPP
#define COUTPLUS_HPP

#include <iostream>

class coutplus {
public:
    explicit coutplus(int line=-1);
    template<typename T>
    coutplus &operator<<(const T &value) {
        std::cout << value;
        return *this;
    }
};

#endif // COUTPLUS_HPP
