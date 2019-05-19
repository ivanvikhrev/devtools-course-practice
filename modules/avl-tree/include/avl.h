// Copyright 2019 Denis Yakovlev

#ifndef MODULES_AVL_TREE_INCLUDE_AVL_H_
#define MODULES_AVL_TREE_INCLUDE_AVL_H_

using key = int64_t;

key GetRandomKey(int64_t nBegin, int64_t nEnd);

struct CNode {
    key data_;
    CNode* pLeft_;
    CNode* pRight_;
    int height_;
};
class CAvl {
 private:
    CNode* Insert(const key& x, CNode* t);
    CNode* SingleRightRotate(CNode* t);
    CNode* SingleLeftRotate(CNode* t);
    CNode* DoubleLeftRotate(CNode* t);
    CNode* DoubleRightRotate(CNode* t);
    CNode* FindMin(CNode* t);
    CNode* Remove(const key& x, CNode* t);
    int Height(CNode* t);
    CNode* pRoot_;
 public:
    CAvl();
    key Find(const key& x);
    void Insert(const key& x);
    void Remove(const key& x);
    key GetRoot() const;
};

#endif  // MODULES_AVL_TREE_INCLUDE_AVL_H_
