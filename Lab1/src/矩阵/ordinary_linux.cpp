#include<iostream>
#include <sys/time.h>  
#include <bits/stdc++.h>  
#include <unistd.h>
 using namespace std;
const int N = 10000;
unsigned long long a[N],b[N][N], ord_sum[N],cache_sum[N];

void init(int n)
{
	for (int i = 0; i < N; i++){
		a[i]=i;
		ord_sum[i] = 0;
		cache_sum[i]=0;
		for (int j = 0; j < N; j++)
		b[i][j] = i + j;
	}
}

 int main()
 {
	init(N);
    struct timeval start,end;
		gettimeofday(&start,NULL);
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
			ord_sum[i] += a[j] * b[j][i];
			
        gettimeofday(&end,NULL);
		 cout << "平凡算法:" <<fixed<<setprecision(4)<<(end.tv_usec- start.tv_usec)/1000.0 << "ms"<< endl;
	return 0;
 }