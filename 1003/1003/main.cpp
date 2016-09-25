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
bool isCorrect(string str)
{
    bool result=true;
    
    //cout<<sizeof(str)<<endl;
    return result;
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
    for(auto it=str.begin();it!=str.end();++it)
    {
        cout<<isCorrect(*it)<<endl;
    }
    string a="grgasd";
    auto it =a.begin();
    cout<<*it<<endl;
    return 0;
}
