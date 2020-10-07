#include <bits/stdc++.h>

#define fr(s,f) for(int i=(s); i<(f); i++)

using namespace std;

void build_tree(int* arr, int* tree, int start, int end, int treeNode) {    //Time Complexity: O(N)
    if(start == end) {
        tree[treeNode] = arr[start];
        return;
    }

    int mid = (start + end) / 2;
    build_tree(arr, tree, start, mid, 2*treeNode);    //Left side of the tree
    build_tree(arr, tree, mid+1, end, 2*treeNode+1);  //Right side of the tree

    tree[treeNode] = tree[2 * treeNode] + tree[2 * treeNode + 1];
}

void update_tree(int* arr, int* tree, int start, int end, int treeNode, int index, int value) {
    if(start == end) {
        arr[index] = value;
        tree[treeNode] = value;
        return;
    }

    int mid = (start + end) / 2;
    if(index > mid) {
        update_tree(arr, tree, mid + 1, end, 2 * treeNode + 1, index, value); //Right side of the tree
    } else {
        update_tree(arr, tree, start, mid, 2*treeNode, index, value); //Left side of the tree
    }

    tree[treeNode] = tree[2 * treeNode] + tree[2 * treeNode + 1];
}

int query(int* tree, int start, int end, int treeNode, int left, int right) {

    if(start > right || end < left) {
        return 0;
    }

    if(start >= left && end <= right) {
        return tree[treeNode];
    }

    int mid = (start + end) / 2;
    int ans1 = query(tree, start, mid, 2*treeNode, left, right);
    int ans2 = query(tree, mid+1, end, 2*treeNode+1, left, right);

    return ans1 + ans2;
}

int main() {
    int treeNode;
    int arr[] = {1,2,3,4,5};
    int *tree = new int[10];
    build_tree(arr, tree, 0, 4, 1);
    update_tree(arr, tree, 0, 4, 1, 2, 10);
    fr(1, 10) cout << tree[i] << endl;
    int ans = query(tree, 0, 4, 1, 2, 4);
    cout << "The answer of query is: "<<ans<<endl;
}