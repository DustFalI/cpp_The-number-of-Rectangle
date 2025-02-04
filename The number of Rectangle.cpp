#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long m,n,all_num,square_num=0;
	cin>>n>>m;
	all_num = ((m * (m + 1)) / 2) * ((n * (n + 1)) / 2);//所有矩形数量
	for(long long i=1;i<=min(n,m);i++)//正方形数量 
	{
		square_num += (n-i+1) * (m-i+1);
	}
	cout<<square_num<<' '<<all_num - square_num;
	return 0;
}
