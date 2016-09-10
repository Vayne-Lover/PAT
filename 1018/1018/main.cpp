//
//  main.cpp
//  1018
//
//  Created by 姜况童 on 9/7/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    vector<string> str1,str2;
    string temp;
    int win=0;
    int equal=0;
    for (int i=0; i<n; ++i)
    {
        cin>>temp;
        str1.push_back(temp);
        cin>>temp;
        str2.push_back(temp);
    }
    for(auto it=str1.begin(),it2=str2.begin();it!=str1.end();++it,++it2)
    {
        if(*it==*it2)
        {
            equal+=1;
            continue;
        }
        if((*it=="C"&&*it2=="J") || (*it=="J"&&*it2=="B") || (*it=="B"&&*it2=="C"))
        {
            win+=1;
        }
    }
    cout<<win<<" "<<equal<<" "<<n-win<<endl;
    return 0;
}
