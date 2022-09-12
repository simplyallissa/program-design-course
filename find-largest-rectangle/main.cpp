/********************************************
* This code creates 10 rectangle objects using the Rectangle class with a random length, width, area, and perimeter.
* Then, adds the objects to a vector and uses the findMax template to find the rectangle
* with the largest perimeter and the one with the largest area. The print_rectanglesVector
* prints a single rectangle object, which includes a length, width, area, and perimeter.
*
* Author: Allissa Hertz
* Version: Sep 14, 2022 @ 11:59 PM
*********************************************/

#include <iostream>
#include <vector>
#include <stdlib.h>
#include "Rectangle.h"
#include "Comparator.h"

using namespace std;

// findMax Template
template<typename Rectangle, typename Comparator>
const Rectangle & findMax(const vector<Rectangle> & rectanglesVector,
                       Comparator cmp) {
    int MAX = 0;
    for(int i = 1; i < rectanglesVector.size(); i++) {
        if(cmp.isLessThan(rectanglesVector[MAX], rectanglesVector[i])) {
            MAX = i;
        }
    }
    return rectanglesVector[MAX];
}

// Function for printing out the length, width, area, and perimeter of each rectangle in the vector
void print_rectanglesVector(vector<Rectangle> & rectanglesVector){
    for (int i = 0; i < rectanglesVector.size(); i++) {
        cout << "Length: " << rectanglesVector.at(i).getLength() << " | Width: " <<
        rectanglesVector.at(i).getWidth() << " | Area: " << rectanglesVector.at(i).getArea() <<
        " | Perimeter: " << rectanglesVector.at(i).getPerimeter() << " " << endl;
    }
}

int main() {

    //create a vector of rectangle objects
    vector<Rectangle> rectanglesVector;

    for(int i=0; i < 10; i++){
        // option for if you would like to ask users to input their own length and width.
//        int length;
//        int width;
//        cout << "Please enter a length: " << endl;
//        cin >> length;
//        cout << "Please enter a width: " << endl;
//        cin >> width;
        // random length and width assigned (up to 20) assigned to the 10 rectangles objects in vector
        rectanglesVector.push_back(Rectangle(rand() % 20, rand() % 20));
    }
    cout << "All Rectangles:\n" << endl;
    print_rectanglesVector(rectanglesVector);
    //Create a rectangle object that uses the template
    Rectangle bigRectangle = findMax(rectanglesVector, Comparator());
    vector<Rectangle> rectangle = {bigRectangle};
    cout << "\nRectangle with the largest perimeter:\n" << endl;
    //Using the findMax template to get the largest perimeter rectangle
    print_rectanglesVector(rectangle);
    cout << "\nRectangle with the largest area:\n" << endl;
    //Using the findMax template to get the largest area rectangle
    print_rectanglesVector(rectangle);
    return 0;

};


