//
//  main.cpp
//  1021
//
//  Created by 姜况童 on 16/6/12.
//  Copyright © 2016年 姜况童. All rights reserved.
//

#include<iostream>
#include<string>
//#include<vector>
using namespace std;

int main() {
    int b[10] = {0};
    string c = "";
    cin >> c;
    for (auto i = begin(c);i != end(c);++i)
    {
        b[*i-'0'] += 1;//49,50,51 so need to -'0'
    }
    for (int i = 0;i < 10;++i)
    {
        if (b[i]>0)
            cout << i << ":" << b[i] << endl;
    }
    return 0;
}

//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int main() {
//    vector<char> b(10, '0');//There should be '0' other than 0
//    string c = "";
//    cin >> c;
//    for (auto i = begin(c);i != end(c);++i)
//    {
//        b[*i-'0'] += 1;//49,50,51 so need to -'0'
//    }
//    for (int i = 0;i < 10;++i)
//    {
//        if (b[i] != '0')
//            cout << i << ":" << b[i] << endl;
//    }
//    return 0;
//}