// Score: 100%

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int uniqueValue = 0;
    sort(A.begin(), A.end());
    for (unsigned int i=0;i<A.size();i++) {
        if ((A[i]!=A[i+1]) || (i==A.size()-1)) {
            uniqueValue = A[i];
            break;
        }
        else {
            i = i +1;
        }
    }
    return uniqueValue;
}

int main()
{
    vector<int> input = {1,2,3,4,1,11,2,3,4,5,5,7,7};
    int result = solution(input);
    cout << result << endl;
    return 0;
}
