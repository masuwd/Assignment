#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int ar[3][3];
    int i,j,sum=0;
    cout<<"enter the numbers  ";
    for (i=0;i<3;i++){
         for (j=0;j<3;j++){
            cin>>ar[i][j];
         }
    }
    cout<<endl;
    for (i=0;i<3;i++){
         for (j=0;j<3;j++){
            if(i==j)
                ar[i][j]=0;
         }
    }
 for (i=0;i<3;i++){
         for (j=0;j<3;j++){
       cout<<ar[i][j]<<"  ";
         }

}    return 0;
}
