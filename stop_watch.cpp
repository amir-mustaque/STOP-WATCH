#include<iostream>
#include<cstdlib>
#include<unistd.h>
using namespace std;
int main()
{
    short minutes,seconds;
    int time;
    do
    {
        cout<<"enter seconds : ";
        cin>>seconds;
    }while(seconds>59);
    
    do{
        cout<<"enter minutes :  ";
        cin>>minutes;
     }   while(minutes>59);
     time =(minutes!=0)? minutes*60 : 0;
     time+=seconds;
     for(int i =time; i>0 ;i--)
     {  
        system("clear");
        //system("cls");
         cout<<" the time remaining is 0: "<<minutes<<";"<<seconds<<endl;
         minutes=(i%60==0)? --minutes : minutes;
         seconds=(seconds==0)? 59 : --seconds;
         sleep(1);
     }
     system("clear");
     cout<<"*****************************************\nTIMER ENDED!\a\nLAASTED for"<<time<<"seconds"<<"\n**************\n\n\n\n\n"<<endl;
     return 0;
}