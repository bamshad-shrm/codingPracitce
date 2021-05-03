// Score: 69%
// Correctness: 100%
// Performance: 33%

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cstdlib>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int minDiff = 0;
    vector<int> minDiffVect;
    for (unsigned int i=0; i<A.size(); i++) {
        cout << A[i] << ",";
    }
    cout << "\n";
    int firstPart = 0;
    int secondPart = 0;
    vector<int>pValues;
    for (unsigned int i=1; i<A.size(); i++) {
        pValues.push_back(i);
    }

    for (int pValue : pValues) {
        for (int j=0;j<pValue;j++) {
            firstPart = firstPart + A[j];
        }
        for (int j=pValue;j<A.size();j++) {
            secondPart = secondPart + A[j];
        }
        cout << "firstPart: " << firstPart << " ";
        cout << "secondPart: " << secondPart;
        cout << endl;
        minDiffVect.push_back(abs(firstPart-secondPart));
        firstPart = 0;
        secondPart = 0;
    }
    for (unsigned int i=0; i<A.size()-1; i++) {
        cout << minDiffVect[i] << ",";
    }
    cout << endl;
    sort(minDiffVect.begin(),minDiffVect.end());
    minDiff = minDiffVect[0];
    return minDiff;
}

int main()
{
    vector<int> input = {-5,1};
    int result = solution(input);
    cout << result << endl;
    return 0;
}
