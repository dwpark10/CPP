#include <iostream>
#include <vector>

using namespace std;

int a[10001];

int main()
{
	int n, s;
	cin >> n >> s;
	for(int i=0; i<n; i++)
		cin >> a[i];

	int i = 0;
	int j = 0;
	int sum = a[0];
	int ans = n+1;
	while(i <= j && j < n){
		if(sum < s){
			j+=1;
			sum+=a[j];
		}else if(sum == s){
			if(j-i+1 < ans){
				ans = j-i+1;
			}
			j +=1;
			sum += a[j];
		}else if(sum > s){
			if(j-i+1 < ans){
				ans = j-i+1;
			}
			sum -= a[i];
			i+=1;
		}
	}
	if(ans > n) ans = 0;
	cout << ans << '\n';
	return 0;
}

