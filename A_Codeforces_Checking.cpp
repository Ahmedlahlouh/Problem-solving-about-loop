#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;

string x = "codeforces" ;

while(t--){
char c;
cin >>c;
 if (x.find(c) != string::npos) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
        
}


}