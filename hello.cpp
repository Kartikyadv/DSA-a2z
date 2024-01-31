#include <iostream>
using namespace std;
int main() {
    int n = 5;
    // cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int z = 0; z <= i; z++)
        {
            cout << i+1;
        }
        cout << endl;
    }
    
    return 0;
}