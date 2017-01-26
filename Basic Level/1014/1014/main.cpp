//
//  main.cpp
//  1014
//
//  Created by 姜况童 on 2016/11/6.
//  Copyright © 2016年 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include<string>
using namespace std;
void GetResult(char* ch1,char* ch2,int m,int n)
{
    char* p1=ch1;
    char* p2=ch2;
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(*p1==*p2)
            {
                cout<<*p1<<" "<<*p2<<endl;
                break;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    string str[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    char a[60],b[60],c[60],d[60];
    cin>>a>>b>>c>>d;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}
