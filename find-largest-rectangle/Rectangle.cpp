/********************************************
* Includes default constructors for the rectangle class, which has a length and width, and
* accessor/mutator functions for private length/width variables from the rectangles class.
* Also calculates area and perimeter using private length/width variables.
*
* Author: Allissa Hertz
* Version: Sep 14, 2022 @ 11:59 PM
*********************************************/

#include "Rectangle.h"

//Rectangle constructors

Rectangle::Rectangle() {
    length = 1;
    width = 1;
}

Rectangle::Rectangle(int lgh, int wdh) {
    length = lgh;
    width = wdh;
}

//Accessor functions for private variables

int Rectangle::getLength() {
    return length;
}

int Rectangle::getWidth() {
    return width;
}

int Rectangle::getArea() {
    //Pass in a length and width and multiply to return area
    int area = length * width;
    return area;
}

int Rectangle::getPerimeter() {
    //Pass in a length and width, multiply each times two, and add to return area
    int perimeter = (length * 2) + (width * 2);
    return perimeter;
}


//Mutator functions for private variables

void Rectangle::setLength(int lgh) {
    length = lgh;
}

void Rectangle::setWidth(int wdh) {
    width = wdh;
}
