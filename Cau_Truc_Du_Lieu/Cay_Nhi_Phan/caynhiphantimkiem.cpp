#include <iostream>
using namespace std;

struct node {
  int key;
  struct node *left, *right;
};

// Tạo nút
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp ->key = item;
  temp ->left = temp ->right = NULL;
  return temp;
}

// Duyệt cây 
void inorder(struct node *root) {
  if(root != NULL) {
    // Duyệt trái
    inorder(root ->left);

    // Duyệt gốc
    cout << root ->key << " -> ";

    // Duyệt phải
    inorder(root ->right);
  }
}

// Chèn nút
struct node *insert(struct node *node, int key) {
  // Tạo nút mới nếu cây rỗng
  if(node == NULL) return newNode(key);

  // Duyệt phải và chèn nút
  if(key < node->key)
    node ->left = insert(node ->left, key);
  else  
    node ->right = insert(node ->right, key);
  
  return node;
}

// Tìm nút successor
struct node *minValueNode(struct node *node) {
  struct node *current = node;

  // Tìm nút cực trái
  while(current && current ->left != NULL)
    current = current ->left;

  return current;
}

// Xóa nút
struct node *deleteNode(struct node *root, int key) {
  // Nếu cây rỗng
  if(root == NULL) return root;

  // Tìm nút cần xóa
  if(key < root ->key)
    root ->left = deleteNode(root ->left, key);
  else if(key > root ->key)
    root ->right = deleteNode(root ->right, key);
  else {
    // Nếu nút cần xóa chỉ có một hoặc không có nút con
    if(root ->left == NULL) {
      struct node *temp = root ->right;
      free(root);
      return temp;
    }
    else if(root ->right == NULL) {
      struct node *temp = root ->left;
      free(root);
      return temp;
    }

    // Nếu nút cần xóa có hai nút con
    struct node *temp = minValueNode(root ->right);

    // Thay nút succesor vào vị trí nút cần xóa
    root ->key = temp ->key;

    // Xóa nút succerssor vào vị trí nút cần xóa
    root ->key = temp ->key;

    // Xóa nút succeser cũ
    root ->right = deleteNode(root ->right, temp ->key);
  }
  return root;  
}

int main() {
  struct node *root = NULL;
  root = insert(root, 8);
  root = insert(root, 3);
  root = insert(root, 1);
  root = insert(root, 6);
  root = insert(root, 7);
  root = insert(root, 10);
  root = insert(root, 14);
  root = insert(root, 4);

  cout << "Duyet cay: ";
  inorder(root);

  cout << "\nSau khi xoa nut 10\n";
  root = deleteNode(root, 10);

  cout << "Duyet lai cay: ";
  inorder(root);
}