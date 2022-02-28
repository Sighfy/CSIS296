/*
Author: Sighfy
Project: PC9_100
Description: Convert to Upper Case
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    char array[] =
    {
        'a', 'b', 'c', 'd',
        'e', 'f', 'g', 'h',
        'i', 'j', 'k'
        
    };
    
    char *pcstart;
    char *pcend;
    pcstart = array;
    pcend = (array + (sizeof(array)/sizeof(*(array))) - 1);
    
    while (pcstart <= pcend)
    {
        *pcstart++ -= 32;
    }
    
    pcstart = array;
    
    while (pcstart <= pcend)
    {
        cout << *pcstart;
        pcstart++;
    }
    cout << endl;
    
    return 0;
}
