#include <iostream>
#include <cstring>

using namespace std;

int main() {
	//Criba de Eratostenes
	int N;
	cin >> N;
	bool isp[N];
	memset(isp, true, sizeof isp);
	isp[0] = isp[1] = false;
	for(int i = 2; i < N; i++)
	  if(isp[i])
	    for(int j=2*i; j<N; j+=i)
	      isp[j] = false;
	//output
	for(int k = 0; k < N; k++)
	if(isp[k])
	cout << k << endl;
	return 0;
}
