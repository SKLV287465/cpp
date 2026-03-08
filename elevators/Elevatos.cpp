#include <bits/stdc++.h>
using namespace std;
/**
 * Building has N floors, starts at S
 * M requests (request time, start floor, destination floor)
 * 
 * can move in 1 unit of time, stopping takes 1 additional time
 * 
 * create minimum  total time elevator
 */

 // lets imagine that this actually works.
size_t hash_string(string key) {
    size_t h = key.size();
    for (auto i = 0; i < key.size() && i < 4; ++i) {
        h *= i;
    }
    return h;
}

class Elevator {
public: 

private:

};