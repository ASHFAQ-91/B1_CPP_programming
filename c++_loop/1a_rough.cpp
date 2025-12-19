#include<iostream>
using namespace std;
int main()
{
    float max=0.0,min=0.0,sum=0.0;
    float num=0.0;
    float avg=0.0;
    int a=0;
    cout<<"enter a whole number or -1 to get result:";             //program working through example
    cin>>num;                                  
    max=num;                                   
    min=num;                                  
    do
    {
    if(num!=-1){
        a++;
        sum=sum+num;        
        if(num>max)                 
        max=num;                        
        else
        if(num<min)                    
        min=num;                           
        cout<<"enter a whole number or -1 to get result:";             
        cin>>num;                          
      }
    }
    while(num!= -1);                      
        avg=sum/a;
        cout<<"sum="<<sum<<endl;
        cout<<"average of numbers you entered is:"<<avg<<endl;
        cout<<"maximum number you enter is:"<<max<<endl;
        cout<<"minimum number you enter is:"<<min<<endl;
return 0;
}