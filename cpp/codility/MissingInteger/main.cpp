// Score: 100%

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cstdlib>

using namespace std;


int solution(vector<int> &A) {
    int returnValue = 0;
    sort(A.begin(),A.end());
    if (A.size()==0){
        return 1;
    }
    if (A[A.size()-1] <= 0) {
        return 1;
    }
    else {
        auto it = remove_if(A.begin(), A.end(),  [](const int i) {return i <= 0; });
        A.erase(it, A.end());
        if (A[0]!=1) {
            return 1;
        }
        for (unsigned int i=0; i<A.size(); i++) {
            if (A[i+1]-A[i]>1 || i==A.size()-1) {
                return A[i]+1;
            }
        }
        cout << "\n";
    }
    return returnValue;
}


int main()
{
    vector<int>inputVector = {5};
    int result = solution(inputVector);
    cout << result << endl;
    return 0;
}
