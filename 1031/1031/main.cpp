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
    char zToM[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    int count = 0;
    string temp;
    cin >> count;
    vector<string>  number;//Take care should not be number(count,""),it will be "","","" then add input
    bool flag = false;
    bool error = false;
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
        for (auto it = newTemp.begin();it < newTemp.end()-1;++it)
        {
            if (*it<'0' || *it>'9')
            {
                error = true;
                flag=true;
                break;
            }
            int tempNumber = 0;
            tempNumber = (*it - '0');
            sum += tempNumber*weight[(it - newTemp.begin())];
        }
        if(flag)
        {
            cout<<newTemp<<endl;
            flag=false;
        }
        else{
            int checknumber = sum % 11;
            char resultChar =zToM[checknumber];//Cause zToM is char so we don't need to add '0'
            if(resultChar!=newTemp[17])
            {
                error=true;
                cout<<newTemp<<endl;
            }
        }
    }
    if (!error)
    {
        cout << allRight << endl;
    }
    return 0;
}
