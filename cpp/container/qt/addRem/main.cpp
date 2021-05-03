#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>


using namespace std;

int main()
{

    vector<int> A = {-1,-5,-15,-2,-7,0,3,6,8,5,11};
    cout << "A:" << endl;
    for (unsigned int i=0;i<A.size();i++) {
        cout << A[i] << ",";
    }
    cout << endl;
    cout << "size of A:"<< A.size() << endl;
    A.erase(A.begin());
    A.erase(A.begin());
    cout << "A after erasing first and second element:" << endl;
    for (unsigned int i=0;i<A.size();i++) {
        cout << A[i] << ",";
    }
    cout << endl;
    cout << "size of A after erasing first and second value:"<< A.size() << endl;

    //Now we are going to remove all the positive values.
    auto it = remove_if(A.begin(), A.end(),  [](const int i) {return i >= 0; });
    A.erase(it, A.end());

    cout << "A after erazing all the positive A" << endl;
    for (unsigned i=0;i<A.size();i++) {
        cout << A[i] << ",";
    }
    cout << "\n";

    //Now we will append some random A to our vector:
    for (int i=0; i<5 ;i++) {
        A.push_back(rand() % 9);
    }

    cout << "A after adding five random value" << endl;
    for (unsigned i=0;i<A.size();i++) {
        cout << A[i] << ",";
    }
    cout << "\n";

    //Getting odd values.
    auto oddValues = remove_if(A.begin(), A.end(),  [](const int i) {return  i % 2 == 0; });
    A.erase(oddValues, A.end());

    cout << "A after removing even valus" << endl;
    for (unsigned i=0;i<A.size();i++) {
        cout << A[i] << ",";
    }
    cout << "\n";


    return 0;
}
