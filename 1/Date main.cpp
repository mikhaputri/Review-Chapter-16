//
//  Date main.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 01/11/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
#include "Date.hpp"
using namespace std;

int main()
{
    int d, m, y;
    cout<<"Enter day (dd): ";
    cin>>d;
    
    cout<<"Enter month (mm): ";
    cin>>m;
    
    cout<<"Enter year (yyyy): ";
    cin>>y;
    
    Date newDate = Date(d,m,y);
    try
    {
        newDate.getDay();
        newDate.getMonth();
        newDate.printFirstForm();
        newDate.printSecondForm();
        newDate.printThirdForm();
    }
    catch (string e)
    {
        cout<<e<<endl;
    }
    catch (string e)
    {
        cout<<e<<endl;
    }
    return 0;
}
