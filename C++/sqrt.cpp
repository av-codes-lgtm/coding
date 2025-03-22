#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float x;
    x = sqrt(-1);

    if(x<0)
    {cout<<"negative";
    }

    else if(x>0)
    {cout<<"positive";
     cout<<x;
    }
    
    else
    {cout<<"zero";
    }
    return 0;
}