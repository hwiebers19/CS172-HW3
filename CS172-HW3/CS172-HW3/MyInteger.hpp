//
//  MyInteger.hpp
//  CS172-HW3
//
//  Created by Heidi Wiebers on 9/26/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#ifndef MyInteger_hpp
#define MyInteger_hpp

#include <stdio.h>
#include <string>
using namespace std;
//10.10

class MyInteger
{
private:
    int value;
    
public:
    MyInteger(int val);
    const int isEven();
    const int isOdd();
    const int isPrime();
    
    int isEven(int);
    int isOdd(int);
    int isPrime(int);
    
    int isEven(const MyInteger&);
    int isOdd(const MyInteger&);
    int isPrime(const MyInteger&);
    
    const int equals(int);
    const int equals(const MyInteger&);
    
    int parseInt(const string&);
    
    
    
};





#endif /* MyInteger_hpp */
