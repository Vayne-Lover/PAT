//
//  main.cpp
//  1032
//
//  Created by 姜况童 on 16/6/17.
//  Copyright © 2016年 Vayne-Lover. All rights reserved.
//
#include<iostream>
#include<vector>
using namespace std;
int main() {
    int max = 0;
    int maxSum = 0;
    int count = 0;
    cin >> count;
    vector<int> school(count,0);
    vector<int> score(count,0);
    for (int i = 0;i < count;++i)
    {
        cin >> school[i] >> score[i];
    }
    for (auto it : school)
    {
        if (it > max)
            max = it;
    }

    return 0;
}
