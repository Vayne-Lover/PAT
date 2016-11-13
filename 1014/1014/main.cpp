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
void GetResult(string str1,string str2,int m,int n)
{
    auto it1=str1.begin();
    auto it2=str2.begin();
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(*it1==*it2)
            {
                cout<<*it1<<" "<<*it2<<endl;
                break;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    string str[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    string str1,str2,str3,str4;
    char a[60],b[60],c[60],d[60];
    cin>>str1>>str2>>str3>>str4;
    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
    cout<<str4<<endl;
    return 0;
}
