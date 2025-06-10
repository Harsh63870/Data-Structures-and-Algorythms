#include <bits/stdc++.h>
using namespace std;
void explainpair(){
    pair<int,int> p ={1,2};
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    pair<int , pair<int , int>> p1={1, {3,4}};
    cout<<p1.second.first<<endl;
    pair<int, int> arr[]={{1,2}, {3,4}, {22,44}};
    cout<<arr[2].second;
}
void explainvectors(){
    vector<int> v;
    v.push_back(22);
    v.emplace_back(32);
    v.emplace_back(23);   //dynamically increase size and push it at the last
    vector<pair<int,int>> vec;
    vec.push_back({12,23});
    vector<int> v(5,100);
    vector<int> v(5);
    vector<int> v1(v);
    vector<int>::iterator it=v.begin();
    it++;
}
int main(){
    explainpair();
    return 0;
}