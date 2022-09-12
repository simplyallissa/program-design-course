# Project Owner
**Name**: Allissa Hertz

**Student ID**: 995272111

## Structure of Program

This program contains two classes and a main file. 

The Rectangle class includes default constructors for the rectangle class, which has a length and width, 
and accessor/mutator functions for private length/width variables from the rectangles class. 
It also calculates area and perimeter using private length/width variables.

The comparator class contains logic for comparing two rectangles and returning a bool for if the first rectangle perimeter
is less than the second. This logic is used for returning the largest area and perimeter, because the rectangle
with the largest perimeter will always have the largest area. 

The main file creates 10 rectangle objects using the Rectangle class with a random length, 
width, area, and perimeter. Then, adds the objects to a vector and uses the findMax template to find 
the rectangle with the largest perimeter and the one with the largest area. The print_rectanglesVector
prints a single rectangle object, which includes a length, width, area, and perimeter.

## Program Status

This program works completely. There are currently no known issues.

## Testing

This program was tested on a MacBook Pro running macOS Monterey version 12.3.

## How to Compile

Run 'make' using the submitted makefile to compile the program. 

Or download the full repo, find the "app" file in finder, ctr+click on the file, and click Open.
