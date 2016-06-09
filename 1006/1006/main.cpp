//
//  main.cpp
//  1006
//
//  Created by 姜况童 on 16/6/8.
//  Copyright © 2016年 姜况童. All rights reserved.
//
#include<iostream>
#include<string>//When use string you should add <string>
using namespace std;

int main(){//Take care 12...n means the unit
    //string s="0";
    //for (int i = 1;i < 10;++i) {
    //	s += "i";
    //}
    //cout << s<< endl;
    int number;
    cin >> number;
    int b = 0;
    int s = 0;
    int n = 0;
    b = number / 100;
    cout <<string(b, 'B');
    number %= 100;
    s = number / 10;
    cout << string(s, 'S');
    number %= 10;
    n = number;
    for (int i = 1;i <= n;++i) {
        cout << i;
    }
    return 0;
}
//#include<iostream>
//#include<string>
//using namespace std;
//string change(string st) {
//		string str;
//		int n=atoi(st.c_str());
//		//char *temp;
//		//sprintf_s(temp, "%d", n);
//
//		int b = 0;
//		int s = 0;
//		int g = 0;
//		if (n >=100) {
//			b = n / 100;
//			n %= 100;
//		}
//		if (n >=10) {
//			s = n / 10;
//			n %= 10;
//		}
//		if (n >= 0) {
//			g = n;
//		}
//		string str1(b,'B');
//		string str2(s, 'S');
//		string str3 = "1";
//		str = str1 + str2 + str3 + st;
//	return str;
//}
//
//int main() {
//	string input;
//	cin >> input;
//	cout << change(input) << endl;
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//string change(int n) {
//	int bak = n;
//	string str;
//	int b = 0;
//	int s = 0;
//	int g = 0;
//	bool flagb = false;
//	bool flags = false;
//	if (n >=100) {
//		b = n / 100;
//		n %= 100;
//		flagb = true;
//	}
//	if (n >=10) {
//		s = n / 10;
//		n %= 10;
//		flags = true;
//	}
//	if (n >= 0) {
//		g = n;
//	}
//	string str1(b,'B');
//	string str2(s, 'S');
//	string str3 = "1";
//	//char temp[3] = {'0'+char(b),'0'+char(s),'0'+char(g)};
//	//sprintf_s(temp,"%d",bak);
//	//string tempNumber;
//	//_itoa_s(bak,temp,10);
//	//str = str1 + str2 + str3 + temp;
//	if (flagb) {
//		char temp3[4] = { '0' + char(b),'0' + char(s),'0' + char(g),'\0' };//Take care /0
//		str = str1+str2 + str3 + temp3;
//	}
//	else if (flags&&!flagb) {
//		char temp2[3] = {'0'+char(s),'0' + char(g),'\0' };
//		str = str2 + str3 + temp2;
//	}
//	else {
//		char temp1[2] = { '0' + char(g),'\0' };
//		str = str3 + temp1;
//	}
//	return str;
//}
//int main() {
//	int number = 0;
//	cin >> number;//int!!! should be string
//	cout << change(number)<< endl;
//	return 0;
//}