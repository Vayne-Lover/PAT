//
//  main.cpp
//  1016
//
//  Created by 姜况童 on 16/6/10.
//  Copyright © 2016年 姜况童. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    long int a = 0;
    long int b = 0;
    int da = 0;
    int db = 0;
    int counta = 0;
    int countb = 0;
    long int suma = 0;
    long int sumb = 0;
    long long sum = 0;
    cin >> a >> da >> b >> db;
    while (a>0)
    {
        if (a % 10 == da)
        {
            counta += 1;
        }
        a /= 10;
    }
    while (b>0)//Take care when there is 0
    {
        if (b % 10 == db)
        {
            countb += 1;
        }
        b /= 10;
    }
    for (int i = 0;i<counta;++i)
    {
        suma *= 10;
        suma += da;
    }
    for(int i=0;i<countb;++i)
    {
        sumb *= 10;
        sumb += db;
    }
    sum = suma + sumb;
    cout << sum << endl;
    
    //string a="";
    //string b = "";
    //vector<string> aout;
    //vector<string> bout;
    //string da = "";
    //string db = "";
    ////vector<string> in;
    //int counta = 0;
    //int countb = 0;
    //cin >> a >> da >> b >> db;
    //auto astart = a.begin();
    //auto aend = a.end();
    //auto bstart = b.begin();
    //auto bend = b.end();
    //while (astart != aend)
    //{
    //	if (*astart == *da.begin())
    //		//in.push_back(string(*astart));
    //		counta += 1;
    //}
    //if (counta)
    //	aout.push_back("0");
    //else
    //{
    //	for (int i = 0;i < counta;++i)
    //		aout.push_back(da);
    //}
    //while (bstart != bend)
    //{
    //	if (*bstart == *db.begin())
    //		//in.push_back(string(*astart));
    //		countb += 1;
    //}
    //if (countb)
    //	aout.push_back("0");
    //else
    //{
    //	for (int i = 0;i < countb;++i)
    //		aout.push_back(db);
    //}
    //for (auto i : aout)
    //{
    //	cout << i;
    //}
    //cout << endl;
    //for (auto i : bout)
    //{
    //	cout << i;
    //}
    return 0;
}
