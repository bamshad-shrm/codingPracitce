// This code got 100% score in the codility.
// You should remove cout parts in the codility.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int solution(int N) {
    /* project steps
    1. convert the integer number to its binary
    2. find the leanght of binary gaps and put them in a vector
    3. sort the vector
    4. find the maximum leanght and return it
    */

    vector<int> a;
    int i=0;
    for(i=0; N>0; i++) {
        a.push_back(N%2);
        N= N/2;
    }

    cout<<"Binary of the given number= ";
    for (unsigned j=0;j<a.size();j++) {
        cout << a[j];
    }
    cout << endl;


    vector<int> onePositions;
    for (unsigned j=0;j<a.size();j++) {
        if (a[j]==1) {
            onePositions.push_back(j);
        }
    }

    for (unsigned j=0;j<onePositions.size();j++) {
        cout << "one positions are: " << onePositions[j];
    }
    cout << endl;

    cout << "one position size: " << onePositions.size() << endl;

    if (onePositions.size() < 2) {
        return 0;
    }
    else {
        vector<int> gaps;
        for (unsigned j=0;j<onePositions.size()-1;j++) {
            gaps.push_back(onePositions[j+1]-onePositions[j]-1);
        }
        for (unsigned j=0;j<gaps.size();j++) {
            cout << gaps[j];
        }
        cout << endl;
        sort(gaps.begin(), gaps.end());
        return gaps[gaps.size()-1];
    }

}



int main()
{

    int bigestGap = solution(32);
    cout << bigestGap << endl;
    return 0;
}
