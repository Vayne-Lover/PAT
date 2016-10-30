//
//  main.cpp
//  1008
//
//  Created by 姜况童 on 2016/10/26.
//  Copyright © 2016年 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
void Change(int a[],int min,int max)
{
    if(min>=max)
    {
        return;
    }
    for(int i=0;i<(max-min)/2;++i)
    {
        int temp=a[i+min];
        a[i+min]=a[max-1-i];
        a[max-1-i]=temp;
    }
}
int main(int argc, const char * argv[]) {
    int a[]={1,2,3,4,5,6};
    Change(a, 0, 3);
    Change(a, 3, 6);
    Change(a, 0, 6);
    for(int i=0;i<6;++i)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
