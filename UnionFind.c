

==================================================================================================================================
// Union Find
class UF {
    vector<int> root;
    vector<int> size;
    int count;  // No Of components
public:
    UF(int N) {
        count = N;
        root.resize(N, -1);
        size.resize(N, 1);
            
        for(int i = 0; i < N; ++i) {
            root[i] = i; // root of self
            size[i] = 1;
        }
    }
        
    int Count() { return count; }  // No Of components
        
    bool Connected(int P, int Q) {
        return Find(P) == Find(Q);
    }
        
    int Find(int P) {
        if(root[P] != P) {
            root[P] = Find(root[P]);  // Path Compression
        }
            
        return root[P];
    }
        
    void Union(int P, int Q) {
        int rootP = Find(P);
        int rootQ = Find(Q);
            
        if(rootP == rootQ) { return; }
            
        if(size[P] < size[Q]) {
            root[rootP] = rootQ;
            size[rootQ] += size[P];
        }
        else {
            root[rootQ] = rootP;
            size[rootP] += size[Q];
        }
            
        --count;
    }
};
==================================================================================================================================
  
Problems:
1. https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree
2. https://leetcode.com/problems/redundant-connection/
3. https://leetcode.com/problems/optimize-water-distribution-in-a-village/
4. https://leetcode.com/problems/rank-transform-of-a-matrix/
5. https://leetcode.com/problems/synonymous-sentences/
6. https://leetcode.com/problems/largest-component-size-by-common-factor/
7. https://leetcode.com/problems/smallest-string-with-swaps/
8. https://leetcode.com/problems/number-of-islands-ii/
9. https://leetcode.com/problems/satisfiability-of-equality-equations/
10. https://leetcode.com/problems/the-earliest-moment-when-everyone-become-friends/   --- My UnionFind
11. https://leetcode.com/problems/minimize-hamming-distance-after-swap-operations/








