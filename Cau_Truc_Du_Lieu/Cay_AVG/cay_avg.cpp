// Xây dựng cây AVL để lưu trữ dãy số sau: 10, 20, 30, 40, 50, 25
#include <bits/stdc++.h>
using namespace std;

// Cấu trúc một nút
class Node {
  public:
  int key;
  Node *left;
  Node *right;
  int height;
};

// Tính chiều cao của cây
int height(Node *N) {
  if(N == NULL)
    return 0;
  return N ->height;
}

// Tìm giá trị lớn hơn giữa 2 biến
int max(int a, int b) {
  return (a > b) ? a : b;
}

// Thêm nút mới
Node* newNode(int key) {
  Node* node = new Node();
  node ->key = key;
  node ->left = NULL;
  node ->right = NULL;
  node ->height = 1;
  return(node);
}

// Xoay phải
Node *rightRotate(Node *y) {
  Node *x = y ->left;
  Node *T2 = x ->right;
  // Thực hiện xoay phải
  x ->right = y;
  y ->left = T2;
  // Cập nhật lại chiều cao của cây
  y ->height = max(height(y ->left), height(y ->right)) + 1;
  x ->height = max(height(x ->left), height(x ->right)) + 1;
  // Trả lại nút mới
  return x;
}

// Xoay trái
Node *leftRotate(Node *x) {
  Node *y = x ->right;
  Node *T2 = y ->left;
  // Thực hiện xoay trái
  y ->left = x;
  x ->right = T2;
  // Cập nhật lại chiều cao của cây
  x ->height = max(height(x ->left), height(x ->right)) + 1;
  y ->height = max(height(y ->left), height(y ->right)) + 1;
  // Trả lại nút mới
  return y;
}

// Tính mức độ cân bằng của một node bất kỳ
int getBalance (Node *N) {
  if(N == NULL) {
    return 0;
  }
  return height(N ->left) - height(N ->right);
}

// Thêm nút để tạo cây AVL
Node* insert(Node* node, int key) {
  // Thêm nút như cây BST
  if(node == NULL)
    return(newNode(key));
  if(key < node->key)
    node ->left = insert(node ->left, key);
  else if(key > node->key)
    node ->right = insert(node ->right, key);
  else // Không thêm nút đã có key(cây không có các nút key bằng nhau)
    return node;

  // Cập nhật chiều cao cây
  node ->height = 1 + max(height(node ->left), height(node ->right));

  // Tính mức độ cân bằng
  int balance = getBalance(node);

  // Nếu nút không cân bằng, xét các trường hợp sau

  // LL
  if(balance > 1 && key < node ->left ->key)
    return rightRotate(node);

  // RR
  if(balance < -1 && key > node ->right ->key)
    return leftRotate(node);

  // LR
  if(balance > 1 && key > node ->left ->key)
  {
    node ->left = leftRotate(node ->left);
    return rightRotate(node);
  }

  // RL
  if(balance < -1 && key < node ->right ->key) {
    node ->right = leftRotate(node ->right);
    return rightRotate(node);
  }
  return node;
}

// Duyệt cây
void preOrder(Node *root) {
  if(root != NULL) {
    cout << root ->key << " ";
    preOrder(root ->left);
    preOrder(root ->right);
  }
}

int main() {
  Node *root = NULL;

  root = insert(root, 10);
  root = insert(root, 20);
  root = insert(root, 30);
  root = insert(root, 40);
  root = insert(root, 50);
  root = insert(root, 25);

  cout << "\nDuyet cay AVL da tao: ";
  preOrder(root);
  return 0;
}

