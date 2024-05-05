#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define mod 1000000007
#define inf 1000000000000000000
#define pb push_back
#define mp make_pair
#define ff first




template<const bool negative = true, const int BITS = 9, typename _RandomAccessIterator>
inline void radix_sort(_RandomAccessIterator _first, _RandomAccessIterator _last, const bool reverse = false)
{
	typedef typename iterator_traits<_RandomAccessIterator>::value_type value_type;
	if(negative)
	{
		if(!reverse) {
			_RandomAccessIterator _middle = partition(_first, _last, [](value_type a) -> bool {return a<0;});	
			for(auto it = _first; it != _middle; it++)*it *= -1;
			radix_sort<false>(_first, _middle, true);
			for(auto it = _first; it != _middle; it++)*it *= -1;
			radix_sort<false>(_middle, _last);
		} else {
			_RandomAccessIterator _middle = partition(_first, _last, [](value_type a) -> bool {return a>=0;});	
			radix_sort<false>(_first, _middle, true);
			for(auto it = _middle; it != _last; it++)*it *= -1;
			radix_sort<false>(_middle, _last);
			for(auto it = _middle; it != _last; it++)*it *= -1;
		}
		return;
	}
	constexpr int PART = (1<<BITS);
	constexpr int FULL = (1<<BITS)-1;
	int shift = 0;
	auto MAX = *max_element(_first, _last);
	vector<value_type> P[PART];
	while(log2(MAX) >= shift)
	{
		for(auto it = _first; it != _last; it++)P[(((*it)>>shift)&FULL)^(reverse?FULL:0)].push_back(*it);
		auto it = _first;
		for(int i = 0; i < PART; i++)
		{
			for(auto u: P[i]) *it++ = u;
			P[i].clear();
		}
		shift += BITS;
	}
}

void file_i_o() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int main() {
    file_i_o();
    ll n;
    cin >> n;
    vector<ll> v(n);

    for(ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    radix_sort(v.begin(), v.end());
    for (auto i : v) {
        cout << i << " ";
    }
    return 0;
}