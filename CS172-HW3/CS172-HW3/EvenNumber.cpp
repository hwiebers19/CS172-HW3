//
//  EvenNumber.cpp
//  CS172-HW3
//
//  Created by Heidi Wiebers on 9/26/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#include "EvenNumber.hpp"
EvenNumber::EvenNumber(int val)
{
    value=val;
}
int EvenNumber::getValue()
{
       return value;
}

int EvenNumber::getNext()
{
    return value+2;
}

int EvenNumber::getPrevious()
{
    return value-2;
}
