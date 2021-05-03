// Score: 100%

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

vector<int> solution(vector<int> &A, int K) {
    if (A.size()==0) {
        return A;
    }
    else {
        if (K>A.size()) {
            K = K - (round(K/A.size())*(A.size()));
            rotate(A.rbegin(), A.rbegin() + K, A.rend());
            return A;
        }
        else {
            rotate(A.rbegin(), A.rbegin() + K, A.rend());
            return A;
        }
    }
}


int main()
{
    vector<int> inputVect = {0,0,-1, 0, 3, 2, 1};
    int k =100;
    vector<int> result = solution(inputVect,k);
    for (unsigned int i=0; i<result.size(); i++) {
        cout << result[i] << ",";
    }
    cout << endl;
    return 0;
}
