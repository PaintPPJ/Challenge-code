#include<iostream>
using namespace std;
#include<iomanip>
#include<cmath>
int main()
{
	int a, b, i, sum1, sum2;
	int avg;
	float avg1, avg2;
	double SD1, SD2, variance1, variance2;
	cin >> a >> b;
	if(a!=b){
	if (a > b)
	{
		i = a;
		sum1 = 0;
		while (i >= b)
		{
			cout << i<<" ";
			sum1 += i;
			i--;
		}
		avg1 = (double)sum1/(double)(a-b+1);
		cout << "\n" <<"average = "<< avg1 << setprecision(2);

		i = a;
		variance1 = 0;
		while (i >= b)
		{
			variance1 += pow((i - avg1), 2);
			i--;
		}
		//printf("\n%lf",variance1);
		SD1 = sqrt((double)variance1 / (double)(a - b + 1 - 1));
		cout << "\n" << fixed << setprecision(2) << "SD = " << SD1;
	}
	else if (a < b)
	{
		i = a;
		sum2 = 0;
		while (i <= b)
		{
			cout << i << " ";
			sum2 += i;
			i++;
		}
		//printf("%d",sum2);
		avg2 = (double)sum2 / (double)(b - a + 1);
		cout <<"\n"<< "average = " << avg2 << setprecision(2);

		i = a;
		variance2 = 0;
		while (i <= b)
		{
			variance2 += pow((i - avg2), 2);
			//sum_variance2+=variance2;
			i++;
		}
		//printf("\n%lf",variance2);
		SD2 = sqrt((double)variance2 / (double)(b - a + 1 - 1));
		cout << "\n" << fixed << setprecision(2) <<"SD = " << SD2;

	}

	}
	else 
	{
		cout << " ";
	}
	return 0;
}