#include "coutplus.hpp"

coutplus::coutplus(int line){
    if(line==-1) std::cout<<"\033[K";
    else std::cout<<"\033["<<line<<";1H\033[K";
}
