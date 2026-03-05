#include <vector>

// T has to be a numeric type.
template <typename T> class UnionFind {
public:
    UnionFind(T n) {
        rank.resize(n, 0);
        parent.resize(n);
        for (T i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }

    T find(T x) {
        T root = parent[x];

        if (parent[root] != root) {
            root = find(root);
        }

        return root;
    }

    T unite(T a, T b) {
        T ra = find(a);
        T rb = find(b);

        if (ra == rb) return ra;

        if (rank[a] < rank[b]) {
            parent[ra] = rb;
            return ra;
        } else if (rank[a] > rank[b]) {
            parent[rb] = ra;
            return  rb;
        } else {
            parent[ra] = rb;
            ++rank[rb];
            return rb;
        }
    }

private:
    std::vector<T> rank, parent;
};
