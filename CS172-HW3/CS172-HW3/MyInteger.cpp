//
//  MyInteger.cpp
//  CS172-HW3
//
//  Created by Heidi Wiebers on 9/26/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#include "MyInteger.hpp"
#include <string>
#include <iostream>
using namespace std;
//10.10
MyInteger::MyInteger(int val)
{
    value=val;
}

int MyInteger::getValue() const
{
    return value;
}

bool MyInteger::isEven() const
{
    return MyInteger::isEven(value);
}

bool MyInteger::isOdd() const
{
    return MyInteger::isOdd(value);
}

bool MyInteger::isPrime() const
{
    return MyInteger::isPrime(value);
}
bool MyInteger::isEven(int i)
{
    return i%2==0;
}

bool MyInteger::isOdd(int i)
{
    return i%2==1;
}
bool MyInteger::isPrime(int i)
{
    bool isPrime=true;
    
    for(int divisor=2; divisor <= i/2; divisor++)
    {
        if (i % divisor == 0)
        {
            isPrime=false;
        }
    }
    return isPrime;
}

bool MyInteger::isEven(const MyInteger& i)
{
    return i.isEven();
}

bool MyInteger::isOdd(const MyInteger& i)
{
    return i.isOdd();
}

bool MyInteger::isPrime(const MyInteger& i)
{
    return i.isPrime();
}

bool MyInteger::equals(int i) const
{
    return value==i;
}

bool MyInteger::equals(const MyInteger& i) const
{
    return i.equals(value);
}

int MyInteger::parseInt(const string& i)
{
    return stoi(i);
}









