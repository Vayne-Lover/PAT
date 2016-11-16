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
    int m,n;
    cin>>n>>m;
    int b[n];
    for(int i=0;i<n;++i)
    {
        int temp;
        cin>>temp;
        b[i]=temp;
    }
    Change(b, 0, m);
    Change(b, m, n);
    Change(b, 0, n);
    for(int i=0;i<6;++i)
    {
        cout<<b[i]<<endl;
    }
    
    cout<<"Hope you are my lover who can't be stolen by time."<<endl;
    cout<<"Have a nice day."<<;
    return 0;
}
