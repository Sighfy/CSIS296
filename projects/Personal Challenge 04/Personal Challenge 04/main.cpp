//
//  main.cpp
//  Personal Challenge 04
//
//  Created by Sighfy on 9/9/19.
//  Copyright © 2019 Homework. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ionamip>

using namespace std;

int main()
{
    // Constant Variables
    const int MIN_VALUE = 100,
    MAX_VALUE = 1000;
    
    // Variables
    int num_1,
    num_2,
    answer;
    
  
    
    // Generate two random numbers
    num_1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    num_2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    
    
    answer = num_1 + num_2;
    // Display the problem
    cout << num_1 << " + " << num_2 << " = ? \n" << endl;
    
    // Ask user to press ENTER to continue
    cout << "Press \"Enter\" to see solution";
    cin.get();
    cout << endl;
    
    // Display the answer to the problem
    cout << num_1 << " + " << num_2 << " = ";
    cout << answer << endl;
    cout << "\n-----------------------------------------\n";
    cout << endl;
    
    return 0;
}
