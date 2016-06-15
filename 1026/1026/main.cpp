//
//  main.cpp
//  1026
//
//  Created by 姜况童 on 16/6/14.
//  Copyright © 2016年 姜况童. All rights reserved.
//

#include<iostream>
//#include<vector>
//#include<string>
using namespace std;
int GetSecond(int num1,int num2) {//should - first and then +=1
    int result = 0;
    int num = num2-num1;
    if (num % 100 >= 50)
    {
        result = num / 100 + 1;
        //result = (num + 50) / 100;
    }
    else
    {
        result = num / 100;
    }
    return result;
}
void GetResult(int num1,int num2) {
    //string result="";
    int e = 0;
    e = GetSecond(num1, num2);
    //e = (num2 - num1) / 100;
    //if ((num2 - num1) % 100 >= 50)//Should be %
    //	e++;
    //int hh = e / 3600;
    //e -= hh * 3600;
    //int mm = e / 60;
    //e -= mm * 60;
    //int ss = e;
    //int mm = (e % 3600) / 60;
    //int ss = (e % 3600) % 60;
    //int ss = e % 60;//Just e%60
    //printf("%02d:%02d:%02d",hh,mm,ss);
    int hh = e / 3600;
    if (hh < 10)
    {
        cout << "0" << hh << ":";
    }
    else
    {
        cout << hh << ":";
    }
    int mm = (e % 3600) / 60;
    if (mm < 10)
    {
        cout << "0" << mm << ":";
    }
    else
    {
        cout << mm << ":";
    }
    int ss = e % 60;
    if (ss < 10)
    {
        cout << "0" << ss << endl;
    }
    else
    {
        cout << ss << endl;
    }
}
int main() {
    int a = 0;
    int b = 0;
    cin >> a >> b;
    GetResult(a, b);
    return 0;
}
//string GetResult(int num1, int num2) {
//	string result = "";
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	c = GetSecond(num1);
//	d = GetSecond(num2);
//	e = d - c;
//	int hh = e / 3600;
//	if (e > 10)
//
//		int mm = (e % 3600) / 60;
//	int ss = (e % 3600) % 60;
//	return result;
//}
