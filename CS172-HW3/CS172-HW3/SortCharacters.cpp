//
//  SortCharacters.cpp
//  CS172-HW3
//
//  Created by Heidi Wiebers on 9/26/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#include "SortCharacters.hpp"
#include <string>

string sort(string& s)
{
    string stur;
    stur=s;
    // for loop to sort the string 
    for(int i=0; i<stur.length(); i++)
    {
        int smallest=i;
        for(int j=i+1; j<stur.length(); j++)
        {
            if(stur[j]<stur[smallest])
            {
                smallest=j;
            }
        }
        // replace each letter
        char temp=stur[smallest];
        stur[smallest]=stur[i];
        stur[i]=temp;
    }
    
    return stur;
}
