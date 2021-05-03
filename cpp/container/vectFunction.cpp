#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> vectorReversor(vector<int> inputVect) {
    sort(inputVect.begin(), inputVect.end(), greater<int>());
    return inputVect;
}

int main()
{
    vector<int>A;
    for (int i=0;i<10;i++) {
        A.push_back(i);
    }
    cout << "Our vector before calling the reversor function:" << endl;
    for (unsigned int i=0;i<A.size();i++) {
        cout << A[i] << ",";
    }
    cout << endl;

    vector<int> reveresedVector = vectorReversor(A);

    cout << "The return value of the reversor function:" << endl;
    for (unsigned int i=0;i<A.size();i++) {
        cout << reveresedVector[i] << ",";
    }
    cout << endl;

    cout << "Again our vector: " << endl;
    for (unsigned int i=0;i<A.size();i++) {
        cout << A[i] << ",";
    }
    cout << endl;

    return 0;
}



