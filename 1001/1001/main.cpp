//
//  main.cpp
//  1001
//
//  Created by 姜况童 on 16/6/5.
//  Copyright © 2016年 姜况童. All rights reserved.
//

#include <iostream>
using namespace std;
int getNumber(int number) {
    if (number > 1000)
        return 0;
    int count = 0;
    while (number != 1)
    {
        if (number%2==0) {
            number /= 2;
            count += 1;
        }
        else
        {
            number = number * 3 + 1;
        }
    }
    return count;
}
int main() {
    int a = 0;
    cin >> a;
    cout << getNumber(a) << endl;
    return 0;
}
