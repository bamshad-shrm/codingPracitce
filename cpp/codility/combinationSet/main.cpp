#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> s = {-1,1,-1,1};
    sort(s.begin(), s.end());
    do {
        for (unsigned i=0;i<s.size();i++) {
            cout << s[i];
        }
        cout << endl;
    } while(next_permutation(s.begin(), s.end()));
}
