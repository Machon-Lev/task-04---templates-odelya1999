/**************************
Name: Odelya Yaakowich
ID: 207346784
****************************/

#pragma once
#include "IsEmptyException.h"
#include <iostream>
#include <list>
#include <exception>



template<class T>
struct Comparison 
{
    bool operator()(T obj1, T obj2) const
    {
        return obj1 < obj2;
    }
};


template<class T>
class PriorityQueue 
{

    std::list<T> elements;
    Comparison<T> comparingTwoEl; //comparision between the elements in the queue and the element that we want to insert

public:

    void push(const T& t);
    T poll();

};


template<class T>
void PriorityQueue<T>::push(const T& t)
{
    auto myIterator = elements.begin(); //Pointer to the first member

    while (myIterator != elements.end() && comparingTwoEl(*myIterator, t)) //looking for the t's place in the queue
        myIterator++;

    elements.insert(myIterator, t);
}


template<class T>
T PriorityQueue<T>::poll() 
{
    if (!elements.empty())
    {
        T firstElement = elements.front(); // front() returns the first element from the queue
        elements.pop_front();//We want to remove the first element from the queue

        return firstElement;
    }
    else
        throw IsEmptyException();

}





