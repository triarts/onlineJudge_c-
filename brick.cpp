#include <iostream>
using namespace std;

// 10500:Brick Wall Patterns
long long int fibo(int num)
{
    long long int *arr;
    arr = new long long int[num+1];
    arr[0] = 1;
    arr[1] = 1;

    for(int i =2;i<num+1;i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
        //cout << arr[i];
    }
    return arr[num];
}

int main()
{
    /* code */
    int num = 0;
    while(1)
    {
        num = 0;
        cin >> num;
        if(!num || num > 50 || num <= 0)
        {
            break;
        }
        cout << fibo(num)<<"\n";
    }
    return 0;
}