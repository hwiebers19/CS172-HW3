//
//  QuadraticEquation.cpp
//  CS172-HW3
//
//  Created by Heidi Wiebers on 9/26/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#include "QuadraticEquation.hpp"
#include <cmath>
QuadraticEquation::QuadraticEquation(int a, int b, int c)
{
    mA=a;
    mB=b;
    mC=c;

}

int QuadraticEquation::geta()
{
    return mA;
}
int QuadraticEquation::getb()
{
    return mB;
}
int QuadraticEquation::getc()
{
    return mC;
}

int QuadraticEquation::getDiscrimenant()
{
    return mB*mB-(4*mA*mC);
}
double QuadraticEquation::getRoot1()
{
    if(getDiscrimenant()<0)
    {
       return 0;
    }
    else
    {
        return (- mB +sqrt(getDiscrimenant()))/(2*mA);
    }
}
double QuadraticEquation::getRoot2()
{
    if(getDiscrimenant()<0)
    {
        return 0;
    }
    else
    {
    return (- mB -sqrt(getDiscrimenant()))/(2*mA);
    }
}








