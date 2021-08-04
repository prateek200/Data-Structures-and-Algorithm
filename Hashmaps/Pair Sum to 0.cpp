#include<bits/stdc++.h>

int pairSum(int * arr, int n) {

    unordered_map < int, int > mapper;

    for (int i = 0; i < n; i++) {

        mapper[arr[i]] = mapper[arr[i]] + 1;

    }

    int ans = 0;

    for (int i = 0; i < n; i++) {

        if (mapper.count(arr[i]) == 0 || arr[i] == 0)
            continue;

        int num = -arr[i];

        if (mapper.count(num) == 0)
            continue;

        ans += mapper[arr[i]] * mapper[num];

        mapper.erase(arr[i]);
        mapper.erase(num);
    }

    if (mapper.count(0) == 1)
        ans += (mapper[0] * (mapper[0] - 1)) / 2;

    return ans;

}
