#include <bits./stdc++.h>
using namespace std;

int main()
{

    queue <int> q;
    int n, m;
    cin >> n >> m;

    int ar[1001], a;
    for(int i = 0; i < n; i++)
        cin>>ar[i];

    for(int i = 0; i < m; i++)
    {
        cin>>a;
        q.push(a);
    }


    int cont = 0;
    for(int i = 0; i < n; i++)
    {
        if(ar[i] <= q.front())
        {
            cont++;
            q.pop();
        }

        if(q.empty())
            break;
    }

    cout<<cont<<endl;
    return 0;
}