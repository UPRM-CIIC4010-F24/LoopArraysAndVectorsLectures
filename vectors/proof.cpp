#include<vector>
#include <iostream>
using namespace std;
int main() {
    vector<int> x = {1, 2, 3, 4};
    int i = 4;
    x.erase(x.begin() + i);




    
    x.insert(x.begin() + i, 50);
    for(int y: x) {
        cout << y << endl;
    }
    cout << x[20];
}