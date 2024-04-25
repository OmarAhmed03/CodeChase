#include <iostream>
#include <string>
using namespace std;

string check_word(string word){
    int len = word.length();
    string new_word;
    if ( len<=10){
        return word;
    }
    else{

        char first = word[0];
        char last = word[len-1];
        new_word = first + to_string(len-2) + last;
        return new_word;
    }
}


int main(){
    //string word = "dhgfjsgdjfgjdfdhgfj";
    int no;
    string word;
    cin>>no;
    for(int i=1;i<=no;i++){
        cin>>word;
        cout<<check_word(word)<<endl;
    }

}
