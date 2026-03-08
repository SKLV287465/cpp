#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> v;
int k;
int main() {
    // search functions

    stable_sort(v.begin(), v.end());
    partial_sort(v.begin(), v.begin() + k, v.end());

    // search functions
    // returns bool
    binary_search(v.begin(), v.end(), k);

    // first elem >= k
    auto it1 = lower_bound(v.begin(), v.end(), k);
    // first elem > k
    auto it2 = upper_bound(v.begin(), v.end(), k);

    // returns both bounds.
    auto [l, r] = equal_range(v.begin(), v.end(), k);

    // count
    int c = count(v.begin(), v.end(), k);

    // swap
    // int a, b;
    // swap(a, b);

    // erase k
    v.erase(remove(v.begin(), v.end(), k), v.end());

    // erase pred
    v.erase(remove_if(v.begin(), v.end(), [](vector<int>::iterator it){return *it == 0;}), v.end());

    // erase consecutive unique
    v.erase(unique(v.begin(), v.end()), v.end());

    // check conditions
    all_of(v.begin(), v.end(), [](){
        return true;
    });
    any_of(v.begin(), v.end(), [](){
        return true;
    });
    none_of(v.begin(), v.end(), [](){
        return true;
    });

    vector<int> b;
    vector<int> o;
    o.resize(100);
    // set algoriths for sorted containers
    set_union(v.begin(), v.end(), b.begin(), b.end(), o.begin());
    // intersection and difference
}
