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

// the my integer class and the promises for our program
class MyInteger
{
private:
    int value;
    
public:
    MyInteger(int val);
    int getValue() const;
    bool isEven() const;
    bool isOdd() const;
    bool isPrime() const;
    
    static bool isEven(int);
    static bool isOdd(int);
    static bool isPrime(int);
    
    static bool isEven(const MyInteger&);
    static bool isOdd(const MyInteger&);
    static bool isPrime(const MyInteger&);
    
    bool equals(int) const;
    bool equals(const MyInteger&) const;
    
    static int parseInt(const string&);
    
    
    
};





#endif /* MyInteger_hpp */
