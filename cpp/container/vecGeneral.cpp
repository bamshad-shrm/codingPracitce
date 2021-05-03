#include <iostream>
#include <vector>
#include <stdlib.h> //For randdom value generation
#include <algorithm>    // std::sort

using namespace std;

int main()
{
    vector<int> A;

    for (int i=0; i<10; i++) {
        A.push_back(rand() % 10);
    }

    // Loop thorough all the vector values using simple way.
    cout << "First iterate method: ";
    for (unsigned int i=0; i<A.size(); i++) {
        cout << A[i] << ",";
    }
    cout << "\n";

    cout << "Second iterate method: ";
    for (auto item : A) {
        cout << item << ",";
    }
    cout << "\n";

    cout << "Third iterate method: ";
    for(auto i = begin(A); i  != end(A); i++){
        cout << *i << ",";
    }
    cout << "\n";

    // Check the value of first index
    cout << "The first value of the A is:" << A[0] << "\n";

    // Check the value of last index
    cout << "The last value of the A is:" << A[A.size()-1] << "\n";

    // Sorting the vector
    sort(A.begin(),A.end());


    cout << "The A after sorting: ";
    for (unsigned int i=0; i<A.size(); i++) {
        cout << A[i] << ",";
    }
    cout << "\n";

    cout << "Minimum of the A is: " << A[0] << "\n";
    cout << "Maximum of the A is: " << A[A.size()-1] << "\n";

    // Sorting the A in reverse method
    sort(A.begin(), A.end(), greater<int>());


    cout << "The A after revers sorting: ";
    for (unsigned int i=0; i<A.size(); i++) {
        cout << A[i] << ",";
    }
    cout << "\n";



    return 0;
}

