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
	string s;
	cin >> s;
	int countN = 0,countE = 0, countI = 0, countT = 0;
	
	for (int i = 0; i < s.size(); i++){
		if(s[i] == 'n')
			countN++;
		else if(s[i] == 'e')
			countE++;
		else if(s[i] == 'i')
			countI++;
		else if(s[i] == 't')
			countT++;
	}
	int answer = (countN - 1)/2;
	if(answer > countE/3)
		answer = countE/3;
	if(answer > countI)
		answer = countI;
	if(answer > countT)
		answer = countT;
	cout << answer;
		
	
    return 0;
}
