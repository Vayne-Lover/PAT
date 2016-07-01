//
//  main.cpp
//  1051
//
//  Created by 姜况童 on 6/30/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>//Must use double
#include<iomanip>
#include<math.h>
using namespace std;//If it is 0.0001 it will still be 0.0001 when use setprecision
int main(int argc, const char * argv[]) {//Take Care when s1,s2-0<0.01//When the answer is 0 cout is 0 rather than 0.00!!!
    // insert code here...
    double a1=0.0f;
    double a2=0.0f;
    double b1=0.0f;
    double b2=0.0f;
    double s1=0.0f;
    double s2=0.0f;
    double p1,p2,r1,r2;
    cin>>r1>>p1>>r2>>p2;
    a1=r1*cos(p1);
    b1=r1*sin(p1);
    a2=r2*cos(p2);
    b2=r2*sin(p2);
    s1=(a1*a2-b1*b2);
    s2=(a1*b2+a2*b1);
//    if(fabs(s1)<0.01f)
//    {
//        s1=0;
//    }
//    if(s1==0)
//    {
//        cout<<"0.00";
//    }
//    else
//    {
//    cout<<setprecision(3)<<s1;
//    }
//        if(fabs(s2)<0.01f)
//        {
//            s2=0;
//        }
//        if(s2>0)
//        {
//            cout<<setprecision(3)<<"+"<<s2<<"i"<<endl;
//        }
//        else if(s2<0)
//        {
//        cout<<setprecision(3)<<"-"<<-s2<<"i"<<endl;
//        }
//        else
//        {
//            cout<<"+"<<"0.00"<<"i"<<endl;
//        }
        if(s2>=0)
        {
            printf("%.2lf+%.2lfi",s1,s2);
        }
        else
        {
            printf("%.2lf-%.2lfi",s1,fabs(s2));
        }
        if(s2>=0)
        {
            printf("%.2lf+%.2lfi\n",s1,s2);
        }
        else
        {
            printf("%.2lf-%.2lfi\n",s1,-s2);
        }

    return 0;
}
