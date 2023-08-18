
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cout << "Enter no. of process:\t" << endl;
    cin >> n;
    int p[n], a[n], b[n], c[n], t[n], w[n], r[n];
    cout << "enter  Process_id ,Arrival Time and Burst Time of all process :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> a[i] >> b[i];
    }

    int sum = 0, temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swap(b[j], b[j + 1]);
                swap(p[j], p[j + 1]);
            }
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " " << a[i] << " " << b[i];
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        if (sum < a[i] && i != 0)
        {
            sum = a[i];
        }
        sum += b[i];
        c[i] = sum;
        t[i] = c[i] - a[i];

        //  cout<<t[i]<<" ";
        //  cout<<t[i]<<" ";
        temp += t[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << " ";
    }
    int temp1 = 0;
    for (int i = 0; i < n; i++)
    {
        w[i] = t[i] - b[i];
        // cout<<w[i]<<" ";
        temp1 += w[i];
    }

    cout << endl;
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