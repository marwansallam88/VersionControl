#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int getSum(vector<int> elements){
    return accumulate(elements.begin(),elements.end(),0);
}

int main() {
    vector<int> v = {0,1,2,3,4,5,6,7,8,9};
    cout << "Sum of all the elements are:  "
        << getSum(v) << endl;
   return 0;
}
