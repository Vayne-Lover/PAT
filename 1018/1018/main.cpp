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
int max(int a,int b,int c)
{
    int max=0;
    max=a>b?a:b;
    max=max>c?max:c;
    return max;
}
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    vector<string> str1,str2;
    string temp;
    int wina=0;
    int winb=0;
    int equal=0;
    int aC=0;
    int aJ=0;
    int aB=0;
    int bC=0;
    int bJ=0;
    int bB=0;
    string maxa;
    string maxb;
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
        if(*it=="C"&&*it2=="J")
        {
            aC+=1;
            wina+=1;
        }
        if(*it=="J"&&*it2=="B")
        {
            aJ+=1;
            wina+=1;
        }
        if(*it=="B"&&*it2=="C")
        {
            aB+=1;
            wina+=1;
        }
        
        if(*it2=="C"&&*it=="J")
        {
            bC+=1;
            winb+=1;
        }
        if(*it2=="J"&&*it=="B")
        {
            bJ+=1;
            winb+=1;
        }
        if(*it2=="B"&&*it=="C")
        {
            bB+=1;
            winb+=1;
        }
    }
    if(max(aC,aJ,aB)==aC)
        maxa="C";
    if(max(aC,aJ,aB)==aJ)
        maxa="J";
    if(max(aC,aJ,aB)==aB)
        maxa="B";
    if(aC==aB)
        maxa="C";
    
    if(max(bC,bJ,bB)==bC)
        maxb="C";
    if(max(bC,bJ,bB)==bJ)
        maxb="J";
    if(max(bC,bJ,bB)==bB)
        maxb="B";
    
    cout<<wina<<" "<<equal<<" "<<max(aC,aJ,aB)<<endl;
    cout<<winb<<" "<<equal<<" "<<max(bC,bJ,bB)<<endl;
    cout<<maxa<<" "<<maxb<<endl;
    return 0;
}
