
#include <iostream>
using namespace std;

int main()
{
    // Write C++ code here
    int n;
    cout << "Enter no. of process:\t" << endl;
    cin >> n;
    int p[n], a[n], b[n], c[n], t[n], w[n], r[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    cout << "Enter ProcessNo. and Burst Time of all process :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> b[i];
    }
    int sum = 0, temp = 0;
    for (int i = 0; i < n; i++)
    {
        sum += b[i];
        c[i] = sum;
        t[i] = sum;
        //  cout<<t[i]<<" ";
        temp += t[i];
    }
    int temp1 = 0;
    for (int i = 0; i < n; i++)
    {
        w[i] = t[i] - b[i];
        // cout<<w[i]<<" ";
        temp1 += w[i];
    }

    for (int i = -1; i < n; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == -1)
            {
                if (j == 0)
                {
                    cout << "Process        \t";
                }
                else if (j == 1)
                {
                    cout << "Arrival Time   \t";
                }
                else if (j == 2)
                {
                    cout << "Burst Time     \t";
                }
                else if (j == 3)
                {
                    cout << "Completion Time  \t";
                }
                else if (j == 4)
                {
                    cout << "Turn Around Time\t";
                }
                else if (j == 5)
                {
                    cout << "Waiting Time";
                }
            }
            else
            {
                if (j == 0)
                {
                    cout << i + 1 << "\t";
                }
                else if (j == 1)
                {
                    cout << "             " << a[i] << "\t";
                }
                else if (j == 2)
                {
                    cout << "             " << b[i] << "\t";
                }
                else if (j == 3)
                {
                    cout << "             " << c[i] << "\t";
                }
                else if (j == 4)
                {
                    cout << "                  " << t[i] << "\t";
                }
                else if (j == 5)
                {
                    cout << "                 " << w[i] << "\t";
                }
            }
        }
        cout << endl;
    }

    cout << "Average Turn Around Time is :" << (temp / (float)n) << endl;
    cout << "Average Waiting Time is :" << (temp1 / (float)n) << endl;
    return 0;
}