# Contributing to ProCodes

👋 Hello!

Thanks for contributing on [ProCodes](https://github.com/Manas1820/ProCodes). Before adding code for new questions/implementing new features and changes, feel free to [submit an issue](https://github.com/Manas1820/ProCodes/issues/new). We're going to talk here :stuck_out_tongue_winking_eye:.

If you would like to add a new code to ProCodes, fill the provided `ISSUE_TEMPLATE` when creating an issue and take a look at the contributing section.

## How to submit a pull request?

1. 🍴 Fork [this repository](https://github.com/Manas1820/ProCodes/fork).
2. 🌿 Create a new branch with the question code name. (Eg: add-SHENQ, add-ELEVATR)
3. ➕ Add new codes with filename as `question_code.cpp.
4. 👍 Commit your changes. Don't forget to add a commit title with an [emoji](https://gist.github.com/hayat-tamboli/02332eaf2e1800801427061390829464) `when adding new file use 📰 emoji`
5. 🚀 Push your changes.
6. 📥 Submit your pull request.
7. ✅ Complete the checklist given in the pull request

### Sample code which will be accepted

```cpp
//question link: https://www.codechef.com/SEPT20B/problems/TREE2
//authorID: hayattamboli
// Example Input
// 1
// 3
// 1 2 3
// Example Output
// 3
#include <bits/stdc++.h>
using namespace std;
.
.  //some code
.

void solve()
{
    int n;
    si(n);
    set <ll> s1;
    // insert all numbers in a set
    lo(n)
    {
        ll num;
        sl(num);
        // dont count 0
        if(num==0)
            continue;
        s1.insert(num);
    }
    // print all unique entries
    cout<<s1.size()<<endl;
}

//driver function
int main() {
    ll int t;
    sl(t);
	while(t--)
	    solve();
	return 0;
}
```