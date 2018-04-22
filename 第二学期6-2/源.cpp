#include<iostream>
#include<vector>

using namespace std;

void jump(vector<int>& v, int p, bool& j)
{
	if (p < v.size())
	{
		int steps = v[p];
		if (p == v.size() - 1)
		{
			j = true;
			

		}

		else
		{
			if (steps != 0)
				for (int i = 0; i < steps; i++)
				{
					jump(v, p + i + 1, j);

				}
			
		}
	}
}

int main()
{
	vector<int> plot;
	int t(0);
	while (cin >> t)
	{
		plot.push_back(t);
	}
	
	bool T = false;
	jump(plot, 0, T);
	if (T)
		cout << "TRUE";
	else
	{
			cout << "FALSE";
	}
		
	//system("pause");
	return 0;
}