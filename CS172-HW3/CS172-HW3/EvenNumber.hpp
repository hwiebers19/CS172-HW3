//
//  EvenNumber.hpp
//  CS172-HW3
//
//  Created by Heidi Wiebers on 9/26/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#ifndef EvenNumber_hpp
#define EvenNumber_hpp

#include <stdio.h>
// even number class and the promises for our program
class EvenNumber
{
private:
    int value;
    
public:
    EvenNumber(int val);
    int getValue();
    int getNext();
    int getPrevious();
    
    
};

#endif /* EvenNumber_hpp */
