#include <fstream>
using namespace std;
int main()
{
	ifstream f("rachete.in");
	int n;
	f >> n;
	int ra=0, rr=0, rg=0;
	while (n > 0)
	{
		int x;
		f >> x;
		switch (x)
		{
			case 1: ra++; break;
			case 2: rr++; break;
			case 3: rg++;
		}
		n--;
	}
	f.close();
	ofstream g("rachete.out");
	while (ra > 0)
	{
		g << 1 << ' ';
		ra--;
	}
	while (rr > 0)
	{
		g << 2 << ' ';
		rr--;
	}
	while (rg > 0)
	{
		g << 3 << ' ';
		rg--;
	}
	g.close();
	return 0;
}

