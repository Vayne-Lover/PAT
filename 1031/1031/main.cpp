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
        switch (checknumber)
        {
            case 0:
                resultNumber = 1;
                break;
            case 1:
                resultNumber = 0;
                break;
            case 2:
                resultChar = 'X';
                break;
            case 3:
                resultNumber = 9;
                break;
            case 4:
                resultNumber = 8;
                break;
            case 5:
                resultNumber = 7;
                break;
            case 6:
                resultNumber = 6;
                break;
            case 7:
                resultNumber = 5;
                break;
            case 8:
                resultNumber = 4;
                break;
            case 9:
                resultNumber = 3;
                break;
            default:
                break;
        }
        if (*(newTemp.end() - 1) == 'X' || (*(newTemp.end() - 1) - '0') == resultNumber)
        {
            
        }
        else
        {
            oneFlag = true;
            hasChanged = true;
        }
        if (oneFlag)
        {
            cout << newTemp << endl;
        }
        oneFlag = false;
    }
    //for (auto it1 :number)
    //{
    //	for (auto it2=it1.begin();it2!=it1.end();++it2)
    //	{
    //		if (*it2<'0'||)
    //		{
    //			
    //		}
    //	}
    //	if (oneFlag)
    //	{
    //		cout << *it1.begin() << endl;
    //	}
    //}
    if (!hasChanged)
    {
        cout << allRight << endl;
    }
    
    return 0;
}
