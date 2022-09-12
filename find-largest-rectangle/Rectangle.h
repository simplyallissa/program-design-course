/********************************************
* Template for the rectangle object, which includes private length and width variables,
* constructors for a rectangle object, access and mutator functions, and functions to calculate area and perimeter.
*
* Author: Allissa Hertz
* Version: Sep 14, 2022 @ 11:59 PM
*********************************************/

#ifndef UNTITLED1_RECTANGLE_H
#define UNTITLED1_RECTANGLE_H


class Rectangle {

private:
    int length;
    int width;

public:
    Rectangle();
    Rectangle(int length, int width);

    int getLength();
    int getWidth();

    int getArea();
    int getPerimeter();

    void setLength(int lgh);
    void setWidth(int wdh);
};

#endif //UNTITLED1_RECTANGLE_H
