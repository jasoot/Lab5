#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <iomanip>
using namespace std;

void printArray(vector<int> a, int k)
{
    int vector_size = a.size();

    for (int i = 0, j = 0; i < vector_size; i++, j++)
    {
        if (j == k)
        {       
            cout << endl;
            j = 0;
        }
        cout << a[i] << " ";
    }
    cout << endl << endl;
}
void printArray(vector<double> a, int k)
{
    int vector_size = a.size();

    for (int i = 0, j = 0; i < vector_size; i++, j++)
    {
        if (j == k)
        {
            cout << endl;
            j = 0;
        }
        cout << fixed << showpoint;
        cout << setprecision(3);
        cout << a[i] << " ";
    }
    cout << endl << endl;

}
double random(double min, double max)
{
    return (double)(rand()) / RAND_MAX * (max - min) + min;
}

int main()
{   
    double m, n, k, tmp;
    srand(time(0));

    cout << "You must input three numbers," << endl;
    cout << " -m is long of massiv A" << endl;
    cin >> m;
    cout << " -n is long of massiv B" << endl;
    cin >> n;
    cout << " -k is long of string in console" << endl;
    cin >> k;
    cout << endl;

    vector<int> a(m);
    for (int i = 0; i < m; i++){
        a[i] = rand()% 500 - 1000;
    }
    vector<double> b(n);
    for (int i = 0; i < n; i++){
        b[i] = random(5,10);
    }
    cout << "Array A, initial form :" << endl;
    printArray(a, k);
    cout << "Array B, initial form :" << endl;
    printArray(b, k);


    for (int i = 0; i < a.size()-1; i++)
    {
        for (int j = 0; j <= a.size() -2 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < b.size()-1; i++)
    {
        for (int j = 0; j <= b.size() - 2 - i; j++)
        {
            if (b[j] > b[j + 1])
            {
                tmp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = tmp;
            }
        }
    }
    cout << "Array A, sorted form :" << endl;
    printArray(a, k);
    cout << "Array A, sorted form :" << endl;
    printArray(b, k);
}
