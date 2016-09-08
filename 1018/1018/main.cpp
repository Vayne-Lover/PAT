//
//  main.cpp
//  1018
//
//  Created by 姜况童 on 9/7/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    vector<string> str1,str2;
    string temp;
    for (int i=0; i<n; ++i)
    {
        cin>>temp;
        str1.push_back(temp);
        cin>>temp;
        str2.push_back(temp);
    }
    for(auto it=str1.begin(),it2=str2.begin();it!=str1.end();++it,++it2)
    {
        cout<<*it<<" "<<*it2<<endl;
    }
    return 0;
}
