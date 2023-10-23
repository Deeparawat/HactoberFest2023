//Method-1
// Sort str in lexographic order using inbuild function sort
// Code in c++

// TC:  O(nlogn)
// n i size of vector

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> str;

    // Input strings
    str.push_back("abc");
    str.push_back("aabc");
    str.push_back("aabcd");
    str.push_back("acbd");
    str.push_back("xsa");

    // Sort the str in lexicographic order using in build function sort.
    sort(str.begin(), str.end());

   // Displaying the sorted string
    cout << "Sorted Strings in lexographical order:" << endl;
    for (const string &strings : str) {
        cout << strings << endl;
    }

    return 0;
}


//Method-2
// Sort str in lexographic order without using user defined function and user defined input
// Code in c++
/*  C++ Program to Sort Strings in Lexicographical Order  */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"How many you want to sort :: ";
    cin>>n;
    string str[n], temp;

    // Taking user defined input
    for(int i = 0; i < n; i++)
    {
        cout<<"\nEnter [ "<<i+1<<" ] String :: ";
        cin>>str[i];
    }

    for(int i = 0; i < n-1; ++i)
       for( int j = i+1; j < n; ++j)
       {
          if(str[i] > str[j])     // user defined sort  using 3 variable sort
          {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
          }
    }

    cout << "\nAfter Sorting Strings in lexicographical order :: \n" << endl;

    for(int i = 0; i < n; ++i)
    {
       cout << str[i] << endl;
    }

    return 0;
}

// TC: O*(n*n)
