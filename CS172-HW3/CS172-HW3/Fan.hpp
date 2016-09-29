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

// fan class and the promises for our program 
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











#endif /* Fan_hpp */
