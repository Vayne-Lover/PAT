//
//  main.cpp
//  1012
//
//  Created by 姜况童 on 9/2/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
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
    for(auto it=number.begin();it!=number.end();++it)
    {
        cout<<*it<<endl;
    }
    return 0;
}
