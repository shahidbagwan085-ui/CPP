#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> strs(n);
    for (int i = 0; i < n; i++)
        cin >> strs[i];

    string prefix = strs[0];

    for (int i = 1; i < n; i++) {
        while (strs[i].find(prefix) != 0) {
            prefix.erase(prefix.length() - 1);
        }
    }

    cout << prefix;
    return 0;
}

wwrite afun addition which is able to add 


3 int value and 1 float value 
2 int value and 2 float value 
1 int value and 3 float value 
4 int value  
4 float value 

1 char value and 3 float value 

