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
    int getValue() const;
    int isEven() const;
    int isOdd() const;
    int isPrime() const;
    
    static bool isEven(int);
    static bool isOdd(int);
    static bool isPrime(int);
    
    static int isEven(const MyInteger&);
    static int isOdd(const MyInteger&);
    static int isPrime(const MyInteger&);
    
    int equals(int) const;
    int equals(const MyInteger&) const;
    
    static int parseInt(const string&);
    
    
    
};





#endif /* MyInteger_hpp */
