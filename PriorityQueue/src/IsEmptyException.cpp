/**************************
Name: Odelya Yaakowich
ID: 207346784
****************************/

#include "IsEmptyException.h"

const char* IsEmptyException::what() const throw() {
    return "Error operation!! PriorityQueue empty!";
}
