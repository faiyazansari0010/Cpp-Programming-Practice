#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int pd=a[1]-a[0];
    int ans=2;
    int current=2;
    for (int i = 2; i < n; i++)
    {
        if (a[i]-a[i-1]==pd)
        {
            current++;
        }
        else
        {
            pd=a[i]-a[i-1];
            current=2;
        }
        ans=max(ans,current);
    }
    

cout<<ans<<endl;
    return 0;
}