//
//  main.cpp
//  1009
//
//  Created by 姜况童 on 7/1/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include<sstream>
#include<string>
#include<vector>
#include<stack>
using namespace std;
int main(int argc, const char * argv[]) {
    stack<string> sta;
    string str,strTemp;
    getline(cin,str);
    stringstream strs(str);
    while(strs>>strTemp)
    {
        sta.push(strTemp);
    }
    while(!sta.empty())//No " " when finished
    {
        string temp=sta.top();
        sta.pop();
        if(sta.empty())
            cout<<temp;
        else
            cout<<temp<<" ";
    }
    return 0;
//    stack<string> str;
//    string temp;
//    string a1;
//    cin>>a1;
//    while (getchar()!='\n')
//    {
//    cin>>temp;
//    str.push(temp);
//    }
//    while (!str.empty()) {
//        cout<<str.top()<<" ";
//        str.pop();
//    }
//    cout<<a1<<endl;
//    return 0;
}
