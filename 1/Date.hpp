//
//  Date.hpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 01/11/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>
class Date
{
private:
    int day = 1;
    int month = 1;
    int year = 1970;
    
public:
    class InvalidDay{};
    class InvalidMonth{};
    Date(int day, int month, int year);
    int getDay();
    int getMonth();
    void printFirstForm();
    void printSecondForm();
    void printThirdForm();
};


#endif /* Date_hpp */
