
#include<iostream>
#include<vector>
#include<cmath>
#include<iomanip>
using namespace std;
#define ll long long 

int main()
{
	//1
	int a;
	int b;
	cin >> a >> b;
	int sum1=0;
	vector<int>arr = {};
	for (int i = 1; i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			sum1 += i;
			arr.push_back(i);
		}
	}

	for (int j : arr)
	{
		sum1 *= j;
	}
	cout << sum1 << endl;

	
	//3
	int sfm = 1;
	int hour;
	int ggsfm=1;
	cin >> hour;
	for (int i = 1; i <= hour; i++)
	{
		if (i == 2)
		{
			sfm = sfm + 1;
		}
		if ( i>=4 )
		{
			sfm = sfm - ggsfm;
			if(i%2!=0)
			{
				ggsfm++;
			} 
		}
		if (i > 2)
		{
			sfm = sfm * 2;
	
		}
	}
	cout << sfm << endl;

	//4
	ll int c=0, te;
	ll int sum = 1;
	ll int d = 1;
	ll int fd = 1;
	ll int fc = c;
	cin >> te;
	vector<int>arr2 = {};
	ll int sum2=0;
	for (int fs = 1;  sum<te ; ++fs)
	{
		c = d;
		d = sum;
		sum = c + d;
		arr2.push_back(d);
	
	}
	for (int i = 0; i < arr2.size(); i++)
	{
		sum2 += arr2[i];
	}
	cout << sum2<<endl;

	//5
	ll int P;
	float V,T;
	float R = 8.314;
	cin >> P >> V >> T;
	T = T + 273;
	double PV = P * V;
	double RT = R * T;
	double n;
	n = PV / RT;
	cout << setprecision(4) << fixed << n << endl;



system("pause");
return 0;
}