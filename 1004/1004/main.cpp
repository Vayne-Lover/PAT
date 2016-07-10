//
//  main.cpp
//  1004
//
//  Created by 姜况童 on 7/10/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    int count=0;
    cin>>count;
    string str;
    int temp=0;
    vector<string> name;
    vector<string> number;
    vector<int> grade;
    for (int i=0; i<count; ++i)
    {
        cin>>str;
        name.push_back(str);
        cin>>str;
        number.push_back(str);
        cin>>temp;
        grade.push_back(temp);
    }
    int maxGradeNumber=0;
    int minGradeNumber=0;
    for (int j=0; j<count; ++j) {
        if(grade[j]>grade[maxGradeNumber])
        {
            maxGradeNumber=j;
        }
        if(grade[j]<grade[minGradeNumber])
        {
            minGradeNumber=j;
        }
    }
    cout<<name[maxGradeNumber]<<" "<<number[maxGradeNumber]<<endl;
    cout<<name[minGradeNumber]<<" "<<number[minGradeNumber]<<endl;
    return 0;
}
