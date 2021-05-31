#include <vector>
using namespace std;

long long sum(vector<int> &a) {
	long long ans = 0;
	
	for(unsigned i = 0; i < a.size(); i++)
	  ans += a[i];
	
	return ans;
}