#include <iostream>

using namespace std;


int main(){
    long long int m,n,a;
    cin>>m>>n>>a;
    long long   x = (m/a);
    long long   y = (n/a);
    if (m%a != 0){
        x++;
    }
    if(n%a != 0){
        y++;
    }
    if(x == 0){
        x =1;
    }
    if (y ==0) {
        y=1;
    }
    long long z = y*x;
    cout<<z;

}
