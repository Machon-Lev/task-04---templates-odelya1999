/**************************
Name: Odelya Yaakowich
ID: 207346784
****************************/

#pragma once
#include <iostream>
#include <exception>

class IsEmptyException : public std::exception {
public:
    virtual const char* what() const throw(); //an exeption for empty list.
};