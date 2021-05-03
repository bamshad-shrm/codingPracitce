// Score: 100%

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int missingNumber=0;
    if (A.size()==0) {
        return 1;
    }
    sort(A.begin(),A.end());
    if(A[0]!=1) {
        return 1;
    }
    for (unsigned int i=0;i<A.size();i++) {
        if (A[i+1]-A[i]!=1) {
           return A[i]+1;
        }
    }
    return missingNumber;
}

int main()
{
    vector<int> inputVect = {2};
    int result = solution(inputVect);
    cout << result << endl;
    return 0;
}
