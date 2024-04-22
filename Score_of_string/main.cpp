#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    static  int scoreOfString(string s) {
        int min=s[0];
        for (int i = 0; i<s.size(); ++i) {
            if (min <s[i])
                min = s[i];

        }
        int sum =0;
        for (int j = 0; j < s.size(); ++j) {
            sum += abs(s[j]-min);
        }
        return sum;
    }
};

int main()
{
    cout << "hello" << Solution::scoreOfString("hello")<<endl;
    cout << "zaz" << Solution::scoreOfString("zaz")<<endl;
    return 0;
}
