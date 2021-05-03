// Score: 44%
// Correctness: 100%
// Performance: 0%

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cstdlib>

using namespace std;

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> returnVect;
    for (int i=0;i<N;i++) {
        returnVect.push_back(0);
    }
    for (int K=0;K<A.size();K++) {
        //cout << K << endl;
        for (unsigned int X=1; X<=N; X++) {
            //cout << "A[K]: " << A[K] << " X: " << X;
            if (A[K]==X) {
                returnVect[X-1] = returnVect[X-1]+1;
            }
            if (A[K] == N + 1) {
                sort(returnVect.begin(),returnVect.end());
                for (unsigned int i=0;i<returnVect.size();i++) {
                    returnVect[i] = returnVect[returnVect.size()-1];
                }

            }
        }
        for (unsigned int i=0;i<returnVect.size();i++) {
            cout << returnVect[i];
        }
        cout << endl;
    }
    return returnVect;
}


int main()
{

    vector<int> inputVector = {3,4,4,6,1,4,4};
    int n = 5;
    vector<int> outputVector = solution(n,inputVector);
    for (unsigned int i=0; i<outputVector.size(); i++) {
        cout << outputVector[i] << ",";
    }
    cout << "\n";
    return 0;
}
