## BASIC_STUFF

1. **int** - 32bit integer type
   - 4 size(bytes)
   - Value range: −2^31...2^31 − 1 or about −2· 10^9...2· 10^9
2. **long long** - 64bit integer type
   - 8 size(bytes)
   - Value range: −2^63...2^63 − 1 or about −9· 10^18...9· 10^18
3. **double** - 64bit floating point type
   - 8 size(bytes)
   - Value range: -1.7E+308 to +1.7E+308
4. **long double** - 80bit floating type.
5. **char** - 8-bit character
   - 1 size(bytes)
   - Value range: -2^7 to 2^7-1

### Modular Arithmetic

1. Sometimes, the answer to a problem is a very large number but it is enough to output it ”modulo m”, i.e., the remainder when the answer is divided by m (ex: ”modulo 10^9 + 7”).
   
2. Important property:
   - (a+ b) mod m = (a mod m + b mod m) mod m
   - (a− b) mod m = (a mod m − b mod m) mod m
   - (a· b) mod m = (a mod m · b mod m) mod m

## TIME_COMPLEXITY

### Common Complexities and Constraints:

1. Mathematical formulas that just calculate an answer: O(1)
2. Binary search: O(log n)
3. Sorted set/map or priority queue: O(log n) per operation
4. Prime factorization of an integer, or checking primality or compositeness of an integer naively: O(sqrt{n})
5. Reading in n items of input: O(n)
6. Iterating through an array or a list of n elements: O(n)
7. Sorting: usually O(nlog n) for default sorting algorithms (mergesort, Collections.sort, Arrays.sort)
8. Iterating through all subsets of size k of the input elements: O(n^k). For example, iterating through all triplets is O(n^3).
9. Iterating through all subsets: O(2^n)
10. Iterating through all permutations: O(n!)

### Conservative Upper Bounds

| Input Size | Required Time Complexity        |
|------------|--------------------------------|
| n ≤ 10     | O(n!), O(n^7), O(n^6)           |
| n ≤ 20     | O(2^n), O(2^n.n), O(n^5)        |
| n ≤ 500    | O(n^3)                         |
| n ≤ 5000   | O(n^2)                         |
| n ≤ 7*10^4 | O(n*sqrt(n))                   |
| n ≤ 5*10^5 | O(nlogn)                       |
| n ≤ 5*10^6 | O(n)                           |
| n is large | O(1) or O(logn)                |

### Constant Factor

Constant factor refers to the idea that different operations with the same
complexity take slightly different amounts of time to run. For example, three
addition operations take a bit longer than a single addition operation. Another
example is that although binary search on an array and insertion into an ordered
set are both O(\log n), binary search is noticeably faster.

Constant factor is entirely ignored in Big O notation. This is fine most of
the time, but if the time limit is particularly tight, you may receive time
limit exceeded (TLE) with the intended complexity. When this happens, it is
important to keep the constant factor in mind. For example, a piece of code that
iterates through all ordered triplets runs in {O(n^3) time might be
sped up by a factor of $6$ if we only need to iterate through all unordered
triplets.


### Recursion

The time complexity of a recursive function depends on the number of times the function is called and the time complexity of a single call.The total time
    complexity is the product of these values.


                void g(int n) {
                    if (n == 1) return;
                    g(n-1);
                    g(n-1);
                }

                function call           number of calls
                _______________________________________
                g(n)                        1
                g(n−1)                      2
                g(n−2)                      4
                ···                         ···
                g(1)                        2^n−1

## Maximum Subarray Sum: Kadane's Algorithm

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> array(n);
    for(int i = 0; i < n; i++) cin >> array[i];
    
    int best = 0, sum = 0;
    int l = 0, r;
    for(int k = 0; k < n; k++) {
        sum = max(array[k], sum + array[k]);
        best = max(best, sum);
        
        if(best == sum && array[k] > 0) {
            if(l != 0) {
                r = k;
            } else {
                l = k;
            }
        }
    }
    
    cout << best << "\n";
    cout << l << " " << r << endl;
    
    return 0;
}
