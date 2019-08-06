#include <iostream>
#include "rs.h"
#include<fstream>
#define pi 3.1415926
using namespace std;

int main()
{
    double q0[3]={2,2,0};
    double q1[3]={8,8,0};

    ReedsSheppStateSpace   *r=new ReedsSheppStateSpace;
    ReedsSheppStateSpace::ReedsSheppPath *rr=new ReedsSheppStateSpace::ReedsSheppPath;
//-------------------------------------------get each curve length  +:forword   -back--------------------------------------
    for(int i=0;i<5;i++)
   {
       cout<<r->reedsShepp(q0,q1).length_[i]<<endl;
   }

 //-------------------------------------------get curve type---------------------------------------
//    vector<int>RStypes;
//    RStypes=r->xingshentype(q0,q1);
//    for(int i=0;i<RStypes.size();i++)
//    {
//       cout<<RStypes[i]<<endl;
//    }

 //-------------------------------------------q0 to q1 discrete point---------------------------------------
    vector<vector<double > >finalpath;
    finalpath=r->xingshensample(q0,q1,0.1);
    fstream f("/home/ljq/qt/RS_Lib/1.txt",ios::out);

    for(int i=0;i<finalpath.size();i++)
    {

           f<<finalpath[i][0]<<" "<<finalpath[i][1]<<" "<<finalpath[i][2]<<endl;
    }
f.close();


}
