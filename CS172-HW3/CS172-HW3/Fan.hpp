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
#include "Fan.hpp"
int getValue();

class Fan
{
public:
    int speed;
    double radius;
    
    bool on();
    
    /*Fan(){
     speed=1;
     on() = false;
     radius=5;
     }
    */
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

#endif /* Fan_hpp */
