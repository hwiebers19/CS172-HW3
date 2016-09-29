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
//inititalize
Fan::Fan(){
    Speed=1;
    On = false;
    Radius=5;
    
}

int Fan::getSpeed()
{
    return Speed;
}
//tell the speed
void Fan::setSpeed(int speed)
{
    Speed = speed;
}

// tell if the fan is on
bool Fan:: isOn()
{
    return On;
}

void Fan::setOn(bool trueOrFalse)
{
    On = trueOrFalse;
}

//tell the radius of fan
double Fan::getRadius()
{
    return Radius;
}

void Fan::setRadius(double radius)
{
    Radius = radius;
}

















