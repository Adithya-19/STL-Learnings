/*
Hashing is a technique used to uniquely identify a specific object from a group of similar objects.

In hashing, we use a hash function to generate a unique key for each object.

This key is then used to store and retrieve the object from a data structure called a hash table.

Key/Input->Hash Function->Hash Table

Hashing often has a time complexity of O(1) for insertion, deletion, and search operations, making it very efficient for large datasets.

In this code, I shall find the frequency of each element in an array using hashing.
*/

#include <bits/stdc++.h>
using namespace std;

int hash_arr[1000001]; //Here we are declaring it outside the main function so that it is not created and destroyed every time the function is called. This will save time and space.

int main() {
    
    int dum_arr[7]={1,2,2,3,1,1,4};

    for (int i: dum_arr) { // This loop on its own has an O(n) time complexity
        hash_arr[i]++; //We increament the value(frequency) associated with each element in dum_arr 
    }

    cout<<"The element '1' occurs "<<hash_arr[1]<<" times in the array."<<"\n"; //This is O(1)
    cout<<"The element '10' occurs "<<hash_arr[10]<<" times in the array."<<"\n"; //Non-existing elements were given a default of 0, until the 1000001th element

    //However, retrieving the frequency of all elements is an O(n) operation

    for (int i=0;i<7;i++) {
        cout<<"The element '"<<dum_arr[i]<<"' occurs "<<hash_arr[dum_arr[i]]<<" times in the array."<<"\n";
    }


}
