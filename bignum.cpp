#include <iostream>
#include <math.h>
#include <vector>
int main(void){
	//int l[] = {for(int i=1;i<=pow(2,25);i++){i};}
	std::vector<int> x;
	for(int i=1; i<pow(2,25);i++){ x.push_back(i); }
	for(int i=0; i<x.size();i++){ std::cout<<x.at(i) << ' '; }
	return 0;
}
