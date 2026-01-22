/*
author: a_natural
//////////////
Use long long instead of long always.
printf("%.2lf", double_value);  // 4.00
*/
///////////////////////////////////////////////////////////////
// #include <bits/stdc++.h>
#include <assert.h>
// Demangling type name so that it is human-readable
// #include <cxxabi.h>
// DBL_MAX
#include <float.h>
// ceil/floor
#include <math.h>
// sem_t m;
// sem_init(&m, 0, 1);
// sem_destroy(&m);
// sem_wait(&m);
// sem_post(&m);
// #include <semaphore.h>
// clock_t clock();
// CLOCKS_PER_SEC
#include <time.h>
// sleep(10) in seconds and usleep(10)
// #include <unistd.h>

// max/min
// lower_bound/upper_bound
// binary_search
// reverse
// next_permutation
#include <algorithm>
// std::atomic<int> counter(99);
// counter.fetch_add(2);
// counter.fetch_sub(1);
// int value = counter.load();
#include <atomic>
// (c & a).any() and access like array
#include <bitset>
// System time
#include <chrono>
// INT_MIN LLONG_MAX
#include <climits>
// unique_lock<mutex> lock(mtx);
// condition_variable cv;
// cv.wait(lock);
// cv.notify_all();
#include <condition_variable>
// rand() and srand()
#include <cstdlib>
// Provides functions for dealing with C-style strings.
// It creates null-terminated arrays of characters.
#include <cstring>
#include <deque>
// ofstream myfile;
// myfile.open("example.txt");
// myfile << "Text.\n";
// myfile.close();
// ifstream myfile("example.txt");
// while (getline(myfile,line)) {
//     cout << line << '\n';
// }
// myfile.close();
#include <fstream>
#include <functional>
// cout<<setprecision(5);
// Contain functions to manipulate i/o format.
#include <iomanip>
#include <iostream>
// Doubly linked list and variable.sort(vector like compare);
#include <list>
// sorts by key
#include <map>
// unique_ptr/shared_ptr/weak_ptr
#include <memory>
// mutex n;
// n.lock();
// n.unlock();
#include <mutex>
// gcd there will be sqiggly red line but no compilation error
#include <numeric>
// priority_queue <int, vector<int>, greater<int>> minHeap;
// priority_queue is by default max heap
#include <queue>
// sorts by value
#include <set>
// string str = "How are you"
// stringstream s(str);
// string word;
// while(s >> word) {
//     cout<<word<<endl;
// }
#include <sstream>
#include <stack>
#include <string>
// thread my_thread(function, params);
// my_thread.join();
#include <thread>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>

// cout << "Line 1..." << flush;
// or default endl for interactive programs.
// #define endl "\n"
using namespace std;

void setup(int argc, char *argv[]) {
#ifdef I_AM_DEBUGGING
  freopen("../input.txt", "r", stdin);
  string inputFlag = argc > 1 ? argv[1] : "";
  if (inputFlag == "OUTPUT_TO_FILE") {
    freopen("../output.txt", "w", stdout);
  } else {
#ifdef __clang__
    cout << "clang++ " << __clang_major__ << "." << __clang_minor__ << ".";
    cout << __clang_patchlevel__ << endl;
#elif _MSC_VER
    cout << "MSVC " << _MSC_VER << endl;
#else
    cout << "g++ " << __GNUC__ << "." << __GNUC_MINOR__ << ".";
    cout << __GNUC_PATCHLEVEL__ << endl;
#endif
    cout << "c++ version is " << __cplusplus << endl;
  }
#endif
}

// For map like
// map<int, int, compare> myMap;
// For priority_queue like
// priority_queue<int, vector<int>, compare> pq;
// struct compare {
//     bool operator()(int a, int b) const {
//         // true means a definitely before b
//         // will lead to max heap which is also default
//         return a < b;
//     }
// };

// For unordered_map like
// std::unordered_map<vector<int>, int, customHash> myUMap;
// struct customHash {
//     size_t operator() (vector<int> a) const {
//         size_t sum = 0;
//         for(int i=0;i<a.size();i++) {
//             sum = (sum+a[i]%1000000)%1000000;
//         }
//         return sum;
//     }
// };

// For sort like
// sort(arr.begin(), arr.end(), comp);
// bool comp(int a, int b) {
//     int first = stoi(to_string(a) + to_string(b));
//     int second = stoi(to_string(b) + to_string(a));
//     // a is definitely before b
//     return first < second;
// }

/*
NOTES:


*/
///////////////////////////////////////////////////////////////

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  setup(argc, argv);
  ////////////////////////////////////////

  // int T;
  // cin >> T;
  // for (int test_case = 1; test_case <= T; test_case++) {
  // }

  cout << "OK " << endl;

  return 0;
}
