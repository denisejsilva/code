#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, m, p, count;
    vector<int> queue;

    vector<int>::iterator it, it_copy;

    scanf("%d", &n);

    while (n--) {
        count = 0;

        scanf("%d", &m);

        while (m--) {
            scanf("%d", &p);
            queue.insert(queue.begin(), p);
        }

        vector<int> queue_copy(queue);
        sort(queue_copy.begin(), queue_copy.end());

        it_copy = queue_copy.begin();
        for (it = queue.begin(); it != queue.end(); ++it) {
            if (*it == *it_copy) count++;
            ++it_copy;
        }

        printf("%d\n", count);

        queue.clear();
    }

    return 0;
}
