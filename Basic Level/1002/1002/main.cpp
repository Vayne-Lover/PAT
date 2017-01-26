//
//  main.cpp
//  1002
//
//  Created by 姜况童 on 16/6/6.
//  Copyright © 2016年 姜况童. All rights reserved.
//

#include <iostream>
#include<string>
using namespace std;
string GetLongInt(const long int num) {//It's string
    //if (number < 0)
    //	return "Error";
    int sum = 0;
    long int number = num;
    while (number>0)
    {
        sum += number % 10;
        number /= 10;
    }
    string chineseNumber[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    string out="";
    if (sum < 10)
    {
        out = chineseNumber[sum];
    }
    else if (sum < 100)
    {
        string str1 = "";
        string str2 = "";
        int temp=0;
        temp = sum % 10;
        sum /= 10;
        str1 = chineseNumber[temp];
        temp = sum % 10;
        str2 = chineseNumber[temp];
        out = str2 + " " + str1;
    }
    else if (sum < 1000)
    {
        string str1 = "";
        string str2 = "";
        string str3 = "";
        int temp=0;
        temp = sum % 10;
        sum /= 10;
        str1 = chineseNumber[temp];
        temp = sum % 10;
        sum /= 10;
        str2 = chineseNumber[temp];
        temp = sum % 10;
        str3 = chineseNumber[temp];
        out =str3+" "+ str2 + " " + str1;
    }
    else
    {
        string str1 = "";
        string str2 = "";
        string str3 = "";
        string str4 = "";
        int temp=0;
        temp = sum % 10;
        sum /= 10;
        str1 = chineseNumber[temp];
        temp = sum % 10;
        sum /= 10;
        str2 = chineseNumber[temp];
        temp = sum % 10;
        sum /= 10;
        str3 = chineseNumber[temp];
        temp = sum % 10;
        str4 = chineseNumber[temp];
        out = str4 + " " + str3 + " " + str2 + " " + str1;
    }
    return out;
}
string GetString(const int s) {
    string chineseNumber[] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
    string out = "";
    int sum=s;
    if (sum < 10)
    {
        out = chineseNumber[sum];
    }
    else if (sum < 100)
    {
        string str1 = "";
        string str2 = "";
        int temp = 0;
        temp = sum % 10;
        sum /= 10;
        str1 = chineseNumber[temp];
        temp = sum % 10;
        str2 = chineseNumber[temp];
        out = str2 + " " + str1;
    }
    else if (sum < 1000)
    {
        string str1 = "";
        string str2 = "";
        string str3 = "";
        int temp = 0;
        temp = sum % 10;
        sum /= 10;
        str1 = chineseNumber[temp];
        temp = sum % 10;
        sum /= 10;
        str2 = chineseNumber[temp];
        temp = sum % 10;
        str3 = chineseNumber[temp];
        out = str3 + " " + str2 + " " + str1;
    }
    else
    {
        string str1 = "";
        string str2 = "";
        string str3 = "";
        string str4 = "";
        int temp = 0;
        temp = sum % 10;
        sum /= 10;
        str1 = chineseNumber[temp];
        temp = sum % 10;
        sum /= 10;
        str2 = chineseNumber[temp];
        temp = sum % 10;
        sum /= 10;
        str3 = chineseNumber[temp];
        temp = sum % 10;
        str4 = chineseNumber[temp];
        out = str4 + " " + str3 + " " + str2 + " " + str1;
    }
    return out;
}
int main() {
    //long int a;
    //cin >> a;
    //cout << GetLongInt(a) << endl;
    string b = "";
    char a[102] ;
    char * temp = a;
    int sum = 0;
    scanf("%s",a);
    //scanf("%s",a);
    while (*temp != '\0') {
        sum += *temp - '0';
        temp += 1;
    }
    cout << GetString(sum) << endl;
    return 0;
}
