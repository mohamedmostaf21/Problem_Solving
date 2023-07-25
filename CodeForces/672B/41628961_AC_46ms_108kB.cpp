// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <ctime>
#include <chrono>
using namespace std;


int main()
{
    int n;
    cin >> n;
    char* s = new char[n];
    for(int i=0; i<n ; i++){
        cin >> s[i];
    }
    int freq_arr[26];
    for(int i=0; i<26 ; i++)
        freq_arr[i] = 0;
    for(int i=0; i<n ; i++){
        char c = s[i];
        int char_num = c - 'a';
        freq_arr[char_num]++;
    }
    int counter = 0;
	bool flag = false;
    for(int i=0; i<26 ; i++){
            if(freq_arr[i] > 0 && freq_arr[i] <= 26 && n <= 26){
                counter += freq_arr[i]-1;
            }else if(freq_arr[i] > 26 || n > 26){
				counter = -1;
				break;
			}
    }

	cout << counter;

	delete [] s;
    return 0;
}
