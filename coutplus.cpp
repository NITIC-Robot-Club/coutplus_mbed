#include "coutplus.hpp"

void coutplus::init(int int_dig,int float_dig){
    std::cout<<std::fixed<<std::setprecision(float_dig)<<std::left<<std::setw(int_dig);
}
coutplus::coutplus(int line){
    if(line==-1) std::cout<<"\033[K";
    else std::cout<<"\033["<<line<<";1H\033[K";
}
