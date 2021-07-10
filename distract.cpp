#include <iostream>
#include <set>

using namespace std;

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {

        int n;
        cin >> n;
        set<char> s;
        bool isSincere = true;
        char *arr = new char(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {

            if (s.find(arr[i]) != s.end())
            {
                isSincere = false;
                break;
            }
            s.insert(arr[i]);
            int j = i + 1;
            while (j < n && arr[j] == arr[i])
            {

                j++;
            }

            i = j - 1;
        }
        if(isSincere)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}