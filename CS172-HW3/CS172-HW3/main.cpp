//
//  main.cpp
//  CS172-HW3
//
//  Created by Heidi Wiebers on 9/23/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include "Fan.hpp"
#include "QuadraticEquation.hpp"
#include "EvenNumber.hpp"
#include "SortCharacters.hpp"
#include "MyInteger.hpp"
using namespace std;

int main() {
    
    //EX03_01 – Liang Programming Exercise 9.2: the Fan class
    // make the diifferent fans
    Fan F1, F2;
    
    //set fan 1
    F1.setSpeed(3);
    F1.setRadius(10);
    F1.setOn(true);
    
    //output the settings for fan 1
    cout << "Fan 1 speed " << F1.getSpeed() << endl;
    cout << "Fan 1 radius " << F1.getRadius() <<endl;
    cout << "Fan 1 on? " <<boolalpha << F1.isOn() <<endl;
    
    //set fan 2
    F2.setSpeed(2);
    F2.setRadius(5);
    F2.setOn(false);
    
    //output the settings for fan 2
    cout << "Fan 2 speed " << F2.getSpeed() << endl;
    cout << "Fan 2 radius " << F2.getRadius() <<endl;
    cout << "Fan 2 on? " << boolalpha <<F2.isOn() <<endl;
    
    //EX03_02 – Liang Programming Exercise 9.6: Algebra: quadratic equations
    //initialize a, b, and c
    int a=0;
    int b=0;
    int c=0;
    
    // take in three values to use for the quadratic equation
    cout << "Enter a value for a: " ;
    cin >> a;
    cout << "Enter a value for b: " ;
    cin >> b;
    cout << "Enter a value for c: " ;
    cin >> c;
    
    QuadraticEquation QE(a, b, c);
    
    // run to get the roots of the number, or tell the user there are not any
    if(QE.getDiscrimenant()>0)
    {
        cout << QE.getRoot1()<<endl;
        cout << QE.getRoot2()<<endl;
    }
    else if(QE.getDiscrimenant()==0)
    {
        cout << QE.getRoot1();
    }
    else
    {
        cout << "The equation has no real roots "<<endl;
    }
    
    //EX03_03 – Liang Programming Exercise 9.11: the EvenNumber class
    
    //ask the user for a value
    int value=0;
    cout << "Enter an even number: ";
    cin >> value;
    // make sure the value is even
    while(value%2==1)
    {
    cout << "The number you entered is not even, please try again: ";
    cin >> value;
        cout << "Your value is " <<value <<endl;
    }
    
    EvenNumber EN1(value);
    // output the even number before it and after it
    cout << "The next even number is " << EN1.getNext() << endl;
    cout << "The previous even number is " << EN1.getPrevious() <<endl;
    
    
    //EX03_04 – Liang Programming Exercise 10.4: Sort characters in a string
    
    string string;
    // have the user enter a string and sort it alphabetically then output it
    cout << "Enter a string ";
    cin >> string;
    string= sort(string);
    cout << "The sorted string is: " << string <<endl;
        
    //EX03_05 – Liang Programming Exercise 10.10: the MyInteger class
    
    MyInteger MI1(value);
    
    // ask the user for a value and tell the user if it is prime, and even or odd
    cout << "Enter a value ";
    cin >> value;
    cout << boolalpha;
    cout << "The value is prime: " << MI1.isPrime()<< endl;
    cout << "The value is odd: " << MI1.isOdd()<<endl;
    cout << "The value is even: "<< MI1.isEven()<<endl;
    
    
    return 0;

}
