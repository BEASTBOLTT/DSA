#include <bits/stdc++.h> 
void rs(string& str, int i, int j){
	if(i>j){
		return ;
	}
	swap(str[i], str[j]);
	i++;
	j--;
	rs(str, i, j);
}

string reverseString(string str)
{
	rs(str, 0, str.size()-1);
	return str;
}