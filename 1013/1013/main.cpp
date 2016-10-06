//
//  main.cpp
//  1013
//
//  Created by 姜况童 on 10/5/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
bool isPrime(int num)
{
    if(num<=1)
    {
        return false;
    }
    for(int i=num-1;i>1;--i)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, const char * argv[]) {
    int min=0;
    int max=0;
    cin>>min;
    cin>>max;
    cout<<isPrime(2)<<endl;
    return 0;
}
