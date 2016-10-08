//
//  main.cpp
//  1003
//
//  Created by 姜况童 on 16/6/11.
//  Copyright © 2016年 姜况童. All rights reserved.
//

#include <iostream>
#include<iterator>
#include <vector>
#include <string>
using namespace std;
bool isPAT(char* c)
{
    bool result=false;
    if(*c=='P'||*c=='A'||*c=='T')
    {
        result=true;
    }
    return result;
}
void isCorrect(string str)
{
    //bool result=true;
    for(auto it=str.begin();it!=str.end();++it)
    {
        while(*it=='P'||*it=='A'||*it=='T')
        {
            it+=1;
        }
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
    
//    if(result)
//    {
//        cout<<"Yes"<<endl;
//    }
//    else
//    {
//        cout<<"No"<<endl;
//    }
}
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    vector<string> str;
    string temp;
    for(int i=0;i<n;++i)
    {
        getline(cin,temp);
        str.push_back(temp);
    }
    //cout<<endl;
    for(auto it=str.begin();it!=str.end();++it)
    {
        isCorrect(*it);
    }

    return 0;
}
