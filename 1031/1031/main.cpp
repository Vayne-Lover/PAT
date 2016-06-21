//
//  main.cpp
//  1031
//
//  Created by 姜况童 on 2016/6/20.
//  Copyright © 2016年 Vayne-Lover. All rights reserved.
//

#include<iostream>
#include<string>
#include<vector>
#include<iterator>
using namespace std;
int main() {
    int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    int count = 0;
    string temp;
    cin >> count;
    vector<string>  number(count);
    bool oneFlag = false;
    bool hasChanged = false;
    string allRight = "All passed";
    for (int i = 0;i < count;++i)
    {
        cin >> temp;
        number.push_back(temp);
    }
    for (int j = 0;j < count;++j)
    {
        int sum = 0;
        string newTemp = number[j];
        for (auto it = newTemp.begin();it < newTemp.end();++it)
        {
            int tempNumber = 0;
            if (*it<'0' || *it>'9')
            {
                oneFlag = true;
                hasChanged = true;
                break;
            }
            tempNumber = (*it - '0');
            sum += tempNumber*weight[(it - newTemp.begin())];
        }
        int checknumber = sum % 11;
        int resultNumber = 0;
        char resultChar = '0';

    if (!hasChanged)
    {
        cout << allRight << endl;
    }
    }
    return 0;
}
