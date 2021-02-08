#include<iostream>
#include<stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
 {
char num[100];
cout<<"Enter the Number"
cin>>num;
int len = strlen(num);
std::sort(num, num+len); 
for (int i = 1; i < len; i++)
 {
if (num[i-1] == num[i])
    {
cout<<"nNumber is Not Unique";
return 0;
}
 }
cout<<"nNumber is Unique";
return 0;
}
