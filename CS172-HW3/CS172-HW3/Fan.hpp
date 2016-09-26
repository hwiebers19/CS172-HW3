//
//  Function.hpp
//  CS172-HW3
//
//  Created by Heidi Wiebers on 9/23/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#ifndef Fan_hpp
#define Fan_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "Fan.hpp"
int getValue();
void increment();

class Fan
{
private:
    int Speed;
    double Radius;
    
    bool On;
    
public:
    
    Fan();
    
    int getSpeed();
    void setSpeed(int speed);
    bool isOn();
    void setOn(bool);
    double getRadius();
    void setRadius(double radius);
    
};

/*class QuadraticEquation
{
public:
    int a;
    int b;
    int c;
    a(){
        
    }
    b(){
        
    }
    c(){
        
    }
    
};
*/

class EvenNumber
{
public:
    int value;
    
    EvenNumber()
    {
        value=0;
    }
    
    
    
    
};

//10.10

class Count
{
public:
    int count;
    
    Count(int c)
    {
        count =c;
    }
    Count()
    {
        count=0;
    }
};









#endif /* Fan_hpp */
