#include"Square.h"
#include<stdexcept>
#include<string>

Square::Square(constPoint&bottomLeft,doublesideLength)
:bottomLeft_(bottomLeft),side_(sideLength){

if(sideLength<0){
throwstd::invalid_argument("Error:Thezoomlevelshouldbepositive..");
}
}


doubleSquare::getArea()const{
returnside_*side_;
}

PointSquare::getCenter()const{
returnPoint(bottomLeft_.x+side_/2.0,
bottomLeft_.y+side_/2.0);
}

voidSquare::move(doubledx,doubledy){
bottomLeft_.x+=dx;
bottomLeft_.y+=dy;
}

voidSquare::scale(doublefactor){
if(factor<0){
throwstd::invalid_argument("Error:Thezoomlevelshouldbepositive..");
}

Pointcenter=getCenter();
side_*=factor;
bottomLeft_.x=center.x-side_/2.0;
bottomLeft_.y=center.y-side_/2.0;
}

std::stringSquare::getName()const{
return"SQUARE";
}
