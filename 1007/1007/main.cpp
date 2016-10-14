//
//  main.cpp
//  1007
//
//  Created by 姜况童 on 10/12/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
bool Prime(int n)
{
    if(n<2)
    {
        return false;
    }
    for(int i=2;i*i<n;++i)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int fun(int n)
{
    int count=0;
    for(int i=3;i<=n;++i)
    {
        if(Prime(i)&&Prime(i-2))
        {
            count++;
            i+=2;
        }
    }
    return count;
}
int main(int argc, const char * argv[]) {
    int num=0;
    cin>>num;
    cout<<fun(num)<<endl;
    return 0;
}
