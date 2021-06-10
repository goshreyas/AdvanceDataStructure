

==================================================================================================================================
// Union Find
class UF {
    vector<int> root;
    vector<int> size;
    int count;
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
            size[rootP] += size[Q];
        }
        else {
            root[rootQ] = rootP;
            size[rootQ] += size[P];
        }
            
        --count;
    }
};
==================================================================================================================================
  
Problems:
1. https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree


