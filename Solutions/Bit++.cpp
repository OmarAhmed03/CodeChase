#include <iostream>
#include <string>


using namespace std;


int main(){
    int n;
    cin>>n;
    string ops[n+1];
    int x =0;
    for (int i=0;i<n;i++){
        cin>>ops[i];
    }
    for (int i=0;i<n;i++){
        if(ops[i].compare("X++") == 0 | ops[i].compare("++X") == 0){
            x++;
        }
        else if(ops[i].compare("X--") == 0 | ops[i].compare("--X") == 0){
            x--;
        }
    }
    cout<<x;
}


