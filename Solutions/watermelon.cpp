#include <iostream>
using namespace std;


void watermelon(int kilos){
    for (int i = 0;i <= kilos;i=i+2){
        for(int j = i;j<=kilos;j= j+2){
            if (i+j == kilos){
                cout<<"YES";
                return;
                //return 1;
            }
            else{
                continue;
            }
        }
    }
    cout<<"NO";
    //return 0;
}

/*
int main(){
   int kilos;
   cout<<"Enter The weight"<<endl;
   cin>>kilos;
   watermelon(kilos);
}
*/
