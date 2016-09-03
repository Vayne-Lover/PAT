//
//  main.cpp
//  1012
//
//  Created by 姜况童 on 9/2/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    int num=0;
    cin>>num;
    vector<int> number;
    int temp=0;
    for(int i=0;i<num;++i)
    {
        cin>>temp;
        number.push_back(temp);
    }
    int a1=0;
    int a2=0;
    int a3=0;
    float a4=0.0;
    int a5=0;
    bool changeA1=false;
    bool changeA2=false;
    bool changeA3=false;
    bool changeA4=false;
    bool changeA5=false;
    
    bool pn=true;
    int count=0;
    int sum=0;
    int countSum=0;
    int max=0;
    for(auto it=number.begin();it!=number.end();++it)
    {
        if(*it%10==0)
        {
            changeA1=true;
            a1+=*it;
        }
        if(*it%5==1)
        {
            changeA2=true;
            if(pn)
                a2+=*it;
            else
                a2-=*it;
            pn=!pn;
        }
        if(*it%5==2)
        {
            changeA3=true;
            count+=1;
        }
        if(*it%5==3)
        {
            changeA4=true;
            sum+=*it;
            countSum+=1;
        }
        if(*it%5==4)
        {
            changeA5=true;
            if(max<*it)
                max=*it;
        }
    }
    a3=count;
    a4=float(sum)/countSum;
    a5=max;
    if(changeA1)
        cout<<a1<<" ";
    else
        cout<<"N"<<" ";
    if(changeA2)
        cout<<a2<<" ";
    else
        cout<<"N"<<" ";
    if(changeA3)
        cout<<a3<<" ";
    else
        cout<<"N"<<" ";
    if(changeA4)
        cout<<setprecision(2)<<a4<<" ";
    else
        cout<<"N"<<" ";
    if(changeA5)
        cout<<a5<<" ";
    else
        cout<<"N"<<" ";
    return 0;
}
