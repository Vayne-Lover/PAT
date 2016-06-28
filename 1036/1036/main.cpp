//
//  main.cpp
//  1036
//
//  Created by 姜况童 on 6/27/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include<iostream>
#include<string>
#include<vector>
#include<iterator>
using namespace std;
int main(int argc, const char * argv[]) {
    int count=0;
    cin>>count;
    char ch=' ';
    cin>>ch;
    char a[20]={' '};
    for(int i=0;i<count;++i)
    {
        a[i]=ch;
    }
    string str1=a;
    //cout<<str1;
    string str2=str1;
    for(auto it=str2.begin()+1;it!=str2.end()-1;++it)
    {
        *it=' ';
    }
    //cout<<str2;
    int outTime=0;
    if(count%2==0)
    {
        outTime=count/2-2;
    }
    else
    {
        outTime=(count+1)/2-2;
    }
    cout<<str1<<endl;
    for(int j=0;j<outTime;++j)
    {
        cout<<str2<<endl;
    }
    cout<<str1<<endl;
    return 0;
}
