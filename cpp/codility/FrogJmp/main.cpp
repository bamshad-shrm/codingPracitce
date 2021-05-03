// Score = 100%


#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int solution(int X, int Y, int D) {
    // write your code in C++14 (g++ 6.2.0)
    int numberOfJumps = 0;
    numberOfJumps = ceil(double(Y-X)/double(D));
    return numberOfJumps;
}

int main()
{
    int result = solution(1,1000000000,1);
    cout << result << endl;
    return 0;
}



