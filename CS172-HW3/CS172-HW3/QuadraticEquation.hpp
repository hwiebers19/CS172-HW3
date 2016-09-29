//
//  QuadraticEquation.hpp
//  CS172-HW3
//
//  Created by Heidi Wiebers on 9/26/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#ifndef QuadraticEquation_hpp
#define QuadraticEquation_hpp

#include <stdio.h>
// quadratic equation class and the promises for our program
class QuadraticEquation
{
private:
    int mA;
    int mB;
    int mC;
public:
    QuadraticEquation(int a, int b, int c);
    
    int geta();
    int getb();
    int getc();
    
    int getDiscrimenant();
    double getRoot1();
    double getRoot2();
};

#endif /* QuadraticEquation_hpp */
