//
//  main.cpp
//  Personal Challenge 03
//
//  Created by Sighfy on 9/3/19.
//  Copyright © 2019 Homework. All rights reserved.
//

/*
 Write a program which will convert a (large) number of seconds into a more readable time span which would include days, hours, minutes and seconds. Use an integer constant for total-seconds. Format the output something like this (where xx is a number that depends on the value of your constant):
 
 xx seconds equals xx days, xx hours, xx minutes and xx seconds.
*/

#include <iostream>

using namespace std;

int main()
{
    int totalSeconds, seconds, minutes, hours, days;
    int secondConvert = 100000;
    
    totalSeconds = secondConvert;
    days = totalSeconds / 86400;
    totalSeconds = totalSeconds % 86400;
     hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;
    minutes = totalSeconds / 60;
    totalSeconds = totalSeconds % 60;
    seconds = totalSeconds;
    
    cout << secondConvert << " seconds equals to "
    << days << " days, "
    << hours << " hours, "
    << minutes << " minutes and "
    << seconds << " seconds."
    << endl;
    
    return 0;
}
