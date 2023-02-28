#include "Director.h"
#include "Builder.h"

Director::Director(Builder* bld){
    _bld = bld;
}

Director::~Director(){

}

void Director::Construct(){
    _bld->BuildPartA("AA");
    _bld->BuildPartB("BB");
    _bld->BuildPartC("CC");
}