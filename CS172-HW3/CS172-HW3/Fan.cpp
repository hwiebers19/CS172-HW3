//
//  Function.cpp
//  CS172-HW3
//
//  Created by Heidi Wiebers on 9/23/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iostream>
#include "Fan.hpp"

Fan::Fan(){
    Speed=1;
    On = false;
    Radius=5;
    
}

int Fan::getSpeed()
{
    return Speed;
}

void Fan::setSpeed(int speed)
{
    Speed = speed;
}

bool Fan:: isOn()
{
    return On;
}

void Fan::setOn(bool trueOrFalse)
{
    On = trueOrFalse;
}

double Fan::getRadius()
{
    return Radius;
}

void Fan::setRadius(double radius)
{
    Radius = radius;
}

















