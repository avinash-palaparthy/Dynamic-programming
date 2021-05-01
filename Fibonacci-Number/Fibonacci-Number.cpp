#include<iostream>
#include<vector>

using namespace std;
int findFib(int a, vector<int> &fib){
    if(a==0 || a==1){
        fib[a] = a;
        return a;
    }
    // Using 1-D DP Array for memoization
    if(fib[a-1]==0){
        fib[a-1] = findFib(a-1, fib);
    }
    if(fib[a-2]==0){
        fib[a-2] = findFib(a-2, fib);
    }
    return fib[a-1]+fib[a-2];
}

int main()  {
    int x;
    cin >> x;
    vector <int> fib(x, 0);
    int ans = findFib(x, fib);
    cout << ans;
    
    return 0;
}