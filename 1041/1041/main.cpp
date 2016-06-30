//
//  main.cpp
//  1041
//
//  Created by 姜况童 on 6/28/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main(int argc, const char * argv[]) {
    int count=0;
    int tempInt=0;
    string tempStr;
    vector<string> str;
    vector<int> in1;
    vector<int> in2;
    cin>>count;
    for (int i=0; i<count; ++i) {
        cin>>tempStr;
        str.push_back(tempStr);
        cin>>tempInt;
        in1.push_back(tempInt);
        cin>>tempInt;
        in2.push_back(tempInt);
    }
    return 0;
}
