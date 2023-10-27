#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int getSum(vector<int> elements){
    return accumulate(elements.begin(),elements.end(),0);
}

int getAverage(vector<int> elements){
    return accumulate(elements.begin(),elements.end(),0)/elements.size();
}

int getMin(vector<int> elements){
    int resultMin = elements[0];
    for(int position = 1; elements.size() > position; position++){
        if(resultMin>elements[position]){
            resultMin = elements[position];
        }
    }
    return resultMin;
}

int main() {
    vector<int> v = {0,1,2,3,4,5,6,7,8,9};
    cout << "Sum of all the elements are:  "
        << getSum(v) << endl;
    cout << "Average of all the elements are:  "
        << getAverage(v) << endl;
    cout << "Minimum of all the elements are:  "
        << getMin(v) << endl;
   return 0;
}
