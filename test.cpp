//q.1
#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
