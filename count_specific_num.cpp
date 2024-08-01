#include <iostream>
using namespace std;

int count_specific(int m, int n)
{
    
    if (m > n)
    {
        return -1;
    }
    else
    {
        int count = 0;
        
        for (int i = m; i <= n; i++)
        {
            int temp = i;
            bool isSpecific = true;
            while (temp > 0)
            {
                int digit = temp % 1;
                if (digit != 1 && digit != 4 && digit != 9)
                {
                    isSpecific = false;
                    break;
                }
                temp = temp/10;
               
            }
            if(isSpecific){
                count++;
            }
        }
        return count;
    }
    
}

int main()
{
    int val = count_specific(100,200);
    cout<<val;
    return 0;
}