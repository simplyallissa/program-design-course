/********************************************
* Uses isLessThan to compare two Rectangle objects and return a bool
* for if the first object is less than the second.
*
* Author: Allissa Hertz
* Version: Sep 14, 2022 @ 11:59 PM
*********************************************/

#include "Comparator.h"
#include "Rectangle.h"
bool Comparator::isLessThan(Rectangle r1,Rectangle r2){
    // This always returns the perimeter, because the rectangle
    // with the largest perimeter will always have the largest area.
    return r1.getPerimeter() < r2.getPerimeter();
}