#include <bits/stdc++.h>
typedef long long ll;
#define F first
#define S second
#define pb push_back
#define pi pair<long long, long long>
#define vi vector<long long>
#define mp make_pair
#define endl "\n"
#define mod 1000000007b
#define loop(s,e) for(long long i=s ; i<e ; i++)
#define looprev(s,e) for (long long i = s; i >= e; i--)
using namespace std;

// >>>>>>>>>>>>>>>>>>>>>>comparator funtion for sorting maps according to value(not key)<<<<<<<<<<<<<<<<<<<<<<<<
// bool comp(const pair<string, long long> &a, const pair<string, long long> &b)
// {
// 	if (a.second == b.second) return a.first > b.first; //ascending order
// 	return a.second < b.second; //descending order
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

int main(){
	int n;
	cin>>n;
	set<int> s;
	for(int i = 0 ;i < n; i++){
		int x;
		cin>>x;
		s.insert(x);
	}
	cout<<s.size()<<endl;
}