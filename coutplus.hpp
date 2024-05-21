#ifndef COUTPLUS_HPP
#define COUTPLUS_HPP

#include <iostream>
#include <iomanip>

// initCout(intの表示桁数,flotの表示桁数)
#define initCout(i,f) cout<<fixed<<setprecision((f))<<left<<setw((i));
// 画面全削除
#define clearScreen() cout<<"\033[2"
// x,yにカーソル移動
#define setPosition(x,y) cout<<"\033[%"<<(y)+1<<";"<<(x)+1<<"H"
// カーソル表示オン
#define cursolOn() cout<<"\033[?25h"
// カーソル表示オフ
#define cursolOff() cout<<"\033[?25l"
// 文字色変更
#define setCharColor(n) cout<<"\033[3"<<(n)<<"m"
// 背景色変更
#define setBackColor(n) cout<<"\033[4"<<(n)<<"m"
// 文字効果変更
#define setAttribute(n) cout<<"\033["<<(n)<<"m"
#define BLACK 0
#define RED 1
#define GREEN 2
#define YELLOW 3
#define BLUE 4
#define MAGENTA 5
#define CYAN 6
#define WHITE 7
#define DEFAULT 9
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
    explicit coutplus(int line=-1);
    template<typename T>
    coutplus &operator<<(const T &value) {
        std::cout << value;
        return *this;
    }
};

#endif // COUTPLUS_HPP
