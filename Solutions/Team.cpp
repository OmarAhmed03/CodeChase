#include <iostream>
#include <string>
using namespace std;


int main(){
    int n;
    cin>>n;;
    string problems[n];
    int probs[n*3];
    int count = 0;
    int sum = 0;
    for (int i = 1;i<=n*3;i++){
        cin>>probs[i-1];
        count += probs[i-1];
        if (i%3 == 0){
            if (count >= 2){
                sum +=1;
            }
            count = 0;
        }
    }
    cout<<sum;
}
