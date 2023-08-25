class Solution
{
public:
    int fib(int n)
    {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        long long int ans = 1, j = 1;
        n = n - 2;
        // long long int temp = 0 ;

        while (n--)
        {
            // temp = ans;
            ans = ans ^ j;
            j = ans ^ j;
            ans = ans ^ j;
            ans = ans + j;
        }
        return ans;
    }
};