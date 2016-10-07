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
bool Prime(int n)
{
    if(n<2)
        return false;
    for(int i=2;i*i<=n;++i)
    {
        if(n%i==0)
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
    int i=1;
    int count=0;
    int ten=1;
    while(count<min)
    {
        i++;
        if(Prime(i))
        {
            count++;
        }
    }
    for(int j=0;j<=max-min;++j)
    {
        while(!Prime(i))
        {
            i++;
        }
        if(ten%10==0)
        {
            cout<<i<<endl;
            ten=1;
        }
        else
        {
            if(j==max-min)
            {
                cout<<i;
            }
            else
            {
            cout<<i<<" ";
            ten+=1;
            }
        }
        i++;
    }
    return 0;
}
