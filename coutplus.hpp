#ifndef COUTPLUS_HPP
#define COUTPLUS_HPP

#include <iostream>
#include <iomanip>

#define clearScreen() cout<<"\033[2"
#define setPosition(x,y) cout<<"\033[%"<<(y)+1<<";"<<(x)+1<<"H"
#define cursolOn() cout<<"\033[?25h"
#define cursolOff() cout<<"\033[?25l"
#define setCharColor(n) cout<<"\033[3"<<(n)<<"m"
#define setBackColor(n) cout<<"\033[4"<<(n)<<"m"
#define BLACK 0
#define RED 1
#define GREEN 2
#define YELLOW 3
#define BLUE 4
#define MAGENTA 5
#define CYAN 6
#define WHITE 7
#define DEFAULT 9
#define setAttribute(n) cout<<"\033["<<(n)<<"m"
#define NORMAL 0 //通常
#define BLIGHT 1 //明るく
#define DIM 2 //暗く
#define UNDERBAR 4 //下線
#define BLINK 5 //点滅
#define REVERSE 7 //明暗反転
#define HIDE 8 //隠れ(見えない)
#define STRIKE 9 //取り消し線

class coutplus {
public:
    void init(int int_dig=4,int float_dig=4);
    explicit coutplus(int line=-1);
    template<typename T>
    coutplus &operator<<(const T &value) {
        std::cout << value;
        return *this;
    }
};

#endif // COUTPLUS_HPP
