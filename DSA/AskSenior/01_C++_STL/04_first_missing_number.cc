#include <iostream>
#include <set>
#include <vector>

using namespace std;

int findFirstMissing(int N, int M, const vector<int>& A) {
    set<int> nums;
    for (int i = -M; i <= M; i++) {
        nums.insert(i);
    }

    for (int num : A) {
        nums.erase(num);
    }

    if (!nums.empty()) {
        return *nums.begin();
    } else {
        return M + 1;
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int firstMissing = findFirstMissing(N, M, A);
    cout << firstMissing << endl;

    return 0;
}
