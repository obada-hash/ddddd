#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <climits>
#include <cmath>
#include <complex>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
#include <stack>
#include <iomanip>
#include <unordered_map>
#include <unordered_set>
#include<bits/stdc++.h>
// #include <chrono>
#define txtIO freopen("input.txt", "r", stdin);  freopen("output.txt", "w", stdout);
#define uvaIO freopen("uva.txt", "rt", stdin);
#define JCPC freopen("round1.in", "r", stdin);
#define DIZASTER ios::sync_with_stdio(false); cin.tie(0);
#define _t int64_t
using namespace std;
using namespace std::chrono;
int move1[] = {1, -1, 0, 0, -1, -1, 1, 1};
int move2[] = {0, 0, 1, -1, 1, -1, 1, -1};

bool compare(const pair<int, vector<int>> &a, const pair<int, vector<int>> &b){
  return a.second.size() > b.second.size();
}




int main(){


  DIZASTER 


  int t; cin>> t;
  while(t--){
    
    int n;
    cin>> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
      cin>> arr[i];
    }


    vector<int> left, right;
    left = right = arr;
    sort(left.begin(), left.end());
    right = left;
    reverse(right.begin(), right.end());
    
    bool hello = true;
    for(int i=0;i<n;i++){
       if(arr[i] != left[i]){
        hello = false;
       }
    }

    if(hello){
          
       bool mesh_hello = true;
       for(int i=0;i<n;i++){
        if(arr[i] % (i+1) != 0){
          mesh_hello = false;
          break;
        }
       }
      for(int i=1;i<n;i++){
        if((arr[i] - (arr[i-1] / i * (i+1))) != 0){
          mesh_hello = false;
          break;
        }
       }
       if(mesh_hello){
        cout<< "YES\n";
        goto endd;
       }
       for(int i=0;i<n;i++){
        arr[i]-= (n-i);
       }
       mesh_hello = true;

      for(int i=0;i<n;i++){
        if(arr[i] % (i+1) != 0){
          mesh_hello = false;
          break;
        }
       }

      for(int i=1;i<n;i++){
        if((arr[i] - (arr[i-1] / i * (i+1))) != 0){
          mesh_hello = false;
          break;
        }
       }
       if(mesh_hello){
        cout<< "YES\n";
        goto endd;
       } 
    }
    
    hello = true;
    for(int i=0;i<n;i++){
       if(arr[i] != right[i]){
        hello = false;
       }
    }

    if(hello){
      bool mesh_hello = true;
       for(int i=0;i<n;i++){
        if(arr[i] % (n-i) != 0){
          mesh_hello = false;
          break;
        }
       }
      for(int i=1;i<n;i++){
        if((left[i] - (left[i-1] / i * (i+1))) != 0){
          mesh_hello = false;
          break;
        }
       }
       if(mesh_hello){
        cout<< "YES\n";
        goto endd;
       }
       for(int i=0;i<n;i++){
        arr[i]-= (i+1);
       }
       mesh_hello = true;

      for(int i=0;i<n;i++){
        if(arr[i] % (n-i) != 0){
          mesh_hello = false;
          break;
        }
       }
      for(int i=1;i<n;i++){
        if((left[i] - (left[i-1] / i * (i+1))) != 0){
          mesh_hello = false;
          break;
        }
       }
       if(mesh_hello){
        cout<< "YES\n";
        goto endd;
       } 
    }


    
     cout<< "NO\n";
      endd:;
  }
}