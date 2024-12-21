#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int position = -1; 
    long long A[N], X;
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    cin >> X;

    for (int i = 0; i < N; i++) {
        if (A[i] == X) {
            position = i; 
            break;       
        }
    }

    
    cout << position << endl;

    return 0;
}