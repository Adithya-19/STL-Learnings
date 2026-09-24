/*
    Maps are a form of hashing which follows a Red-Black Tree based Structure, where each key-value pair is like a node
    Red-Black Tree is a self balancing binary search based tree which has a worst-case of O(logn) time complexity
    
    In this code I will count the frequency of each element
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int dum_arr[7]={1,2,3,1,1,3,4};
    map<int, int> freq_map;

    for (int i : dum_arr) {
        freq_map[i]++;
    }

    for (int i=0;i<7;i++){
        cout<<"The element, "<<dum_arr[i]<<" occurs, "<<freq_map[dum_arr[i]]<<" times"<<"\n";
    }

}
