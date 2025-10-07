#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    set<int> subsetSums;
    subsetSums.insert(0);

    for (int price : prices)
    {
        vector<int> newSums;

        for (int sum : subsetSums)
        {
            newSums.push_back(sum + price);
        }

        for (int sum : newSums)
        {
            subsetSums.insert(sum);
        }
    }
    vector<int> allSums(subsetSums.begin(), subsetSums.end());
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int L, R;
        cin >> L >> R;

        auto low = lower_bound(allSums.begin(), allSums.end(), L);
        auto high = upper_bound(allSums.begin(), allSums.end(), R);

        int count = high - low;
        cout << count << endl;
    }

    return 0;
}
